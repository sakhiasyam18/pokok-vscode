// Gunakan fungsi di bawah ini untuk menghasilkan id yang unik
function generateUniqueId() {
  return `_${Math.random().toString(36).slice(2, 9)}`;
}

// Menampung data orders
let orders = [];

// Menambahkan pesanan baru
function addOrder(customerName, items) {
  const totalPrice = items.reduce((sum, item) => sum + item.price, 0);
  const newOrder = {
    id: generateUniqueId(),
    customerName,
    items,
    totalPrice,
    status: 'Menunggu',
  };
  orders.push(newOrder);
  return newOrder;
}

// Memperbarui status pesanan berdasarkan ID
function updateOrderStatus(orderId, status) {
  const order = orders.find(order => order.id === orderId);
  if (!order) return false;
  order.status = status;
  return true;
}

// Menghitung total pendapatan dari pesanan dengan status "Selesai"
function calculateTotalRevenue() {
  return orders
    .filter(order => order.status === 'Selesai')
    .reduce((sum, order) => sum + order.totalPrice, 0);
}

// Menghapus pesanan berdasarkan ID
function deleteOrder(id) {
  const initialLength = orders.length;
  orders = orders.filter(order => order.id !== id);
  return orders.length < initialLength;
}

export { orders, addOrder, updateOrderStatus, calculateTotalRevenue, deleteOrder };
