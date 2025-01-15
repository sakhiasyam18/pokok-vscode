document.addEventListener("DOMContentLoaded", () => {
  const bookForm = document.getElementById("bookForm");
  const incompleteBookList = document.getElementById("incompleteBookList");
  const completeBookList = document.getElementById("completeBookList");
  const searchForm = document.getElementById("searchBook");
  const searchInput = document.getElementById("searchBookTitle");

  const STORAGE_KEY = "BOOKSHELF_APPS";
  let books = [];

  // Load data from localStorage
  if (localStorage.getItem(STORAGE_KEY)) {
    books = JSON.parse(localStorage.getItem(STORAGE_KEY));
    renderBooks();
  }

  // Save data to localStorage
  function saveBooks() {
    localStorage.setItem(STORAGE_KEY, JSON.stringify(books));
  }

  function renderBooks() {
    incompleteBookList.innerHTML = "";
    completeBookList.innerHTML = "";

    const incompleteBooks = books.filter((book) => !book.isComplete);
    const completeBooks = books.filter((book) => book.isComplete);

    if (incompleteBooks.length === 0) {
      const placeholder = document.createElement("div");
      placeholder.classList.add("placeholder");
      placeholder.innerText = "Buku sudah terbaca semuanya.";
      incompleteBookList.appendChild(placeholder);
    }

    if (completeBooks.length === 0) {
      const placeholder = document.createElement("div");
      placeholder.classList.add("placeholder");
      placeholder.innerText = "Belum ada buku yang selesai dibaca.";
      completeBookList.appendChild(placeholder);
    }

    books.forEach((book) => {
      const bookElement = createBookElement(book);
      if (book.isComplete) {
        completeBookList.appendChild(bookElement);
      } else {
        incompleteBookList.appendChild(bookElement);
      }
    });
  }

  // Create book element
  function createBookElement(book) {
    const bookItem = document.createElement("div");
    bookItem.classList.add("book-item");
    bookItem.setAttribute("data-bookid", book.id);
    bookItem.setAttribute("data-testid", "bookItem");

    bookItem.innerHTML = `
      <h3 data-testid="bookItemTitle">${book.title}</h3>
      <p data-testid="bookItemAuthor">Penulis: ${book.author}</p>
      <p data-testid="bookItemYear">Tahun: ${book.year}</p>
    `;

    const actions = document.createElement("div");

    // Toggle complete status
    const toggleButton = document.createElement("button");
    toggleButton.setAttribute("data-testid", "bookItemIsCompleteButton");
    toggleButton.textContent = book.isComplete
      ? "Belum Selesai"
      : "Selesai Dibaca";
    toggleButton.addEventListener("click", () => {
      book.isComplete = !book.isComplete;
      saveBooks();
      renderBooks();
    });

    // Edit book
    const editButton = document.createElement("button");
    editButton.setAttribute("data-testid", "bookItemEditButton");
    editButton.textContent = "Edit Buku";
    editButton.addEventListener("click", () => {
      const newTitle = prompt("Masukkan judul baru:", book.title);
      const newAuthor = prompt("Masukkan penulis baru:", book.author);
      const newYear = prompt("Masukkan tahun baru:", book.year);

      if (newTitle && newAuthor && newYear && !isNaN(newYear)) {
        book.title = newTitle;
        book.author = newAuthor;
        book.year = newYear;
        saveBooks();
        renderBooks();
      } else {
        alert("Data tidak valid!");
      }
    });

    // Delete book
    const deleteButton = document.createElement("button");
    deleteButton.setAttribute("data-testid", "bookItemDeleteButton");
    deleteButton.textContent = "Hapus Buku";
    deleteButton.addEventListener("click", () => {
      books = books.filter((b) => b.id !== book.id);
      saveBooks();
      renderBooks();
    });

    actions.appendChild(toggleButton);
    actions.appendChild(editButton);
    actions.appendChild(deleteButton);

    bookItem.appendChild(actions);
    return bookItem;
  }

  // Search books
  searchForm.addEventListener("submit", (e) => {
    e.preventDefault();
    const query = searchInput.value.toLowerCase();

    // Filter buku berdasarkan judul, penulis, atau tahun
    const filteredBooks = books.filter((book) => {
      return (
        book.title.toLowerCase().includes(query) || // Pencarian berdasarkan judul
        book.author.toLowerCase().includes(query) || // Pencarian berdasarkan penulis
        book.year.toString().includes(query) // Pencarian berdasarkan tahun
      );
    });

    // Kosongkan daftar sebelum menampilkan hasil pencarian
    incompleteBookList.innerHTML = "";
    completeBookList.innerHTML = "";

    // Render buku yang sesuai dengan pencarian
    filteredBooks.forEach((book) => {
      const bookElement = createBookElement(book);
      if (book.isComplete) {
        completeBookList.appendChild(bookElement);
      } else {
        incompleteBookList.appendChild(bookElement);
      }
    });

    // Kosongkan input pencarian setelah pencarian selesai
    searchInput.value = "";
  });

  // Add new book
  bookForm.addEventListener("submit", (e) => {
    e.preventDefault();

    const title = document.getElementById("bookFormTitle").value;
    const author = document.getElementById("bookFormAuthor").value;
    const year = document.getElementById("bookFormYear").value;
    const isComplete = document.getElementById("bookFormIsComplete").checked;

    // Validasi: Tahun harus angka dan positif
    if (!year || isNaN(year) || year <= 0) {
      alert("Masukkan tahun yang valid (hanya angka positif).");
      return; // Hentikan proses jika validasi gagal
    }

    const newBook = {
      id: +new Date(),
      title,
      author,
      year: parseInt(year, 10), // Konversi ke integer
      isComplete,
    };

    books.push(newBook);
    saveBooks();
    renderBooks();

    // Reset form setelah buku berhasil ditambahkan
    bookForm.reset();
  });
});
