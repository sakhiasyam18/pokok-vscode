<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Formulir Diri Sendiri</title>
    <link rel="stylesheet" href="tugaspemwebformcss.css">
</head>

<body>
    <?php
    // Define variables and set to empty values
    $username = $nisn = $jenis = $lahir = $alamat = $telepon = $foto = "";

    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        $username = test_input($_POST["username"]);
        $nisn = test_input($_POST["nisn"]);
        $jenis = test_input($_POST["jenis"]);
        $lahir = test_input($_POST["lahir"]);
        $alamat = test_input($_POST["alamat"]);
        $telepon = test_input($_POST["telepon"]);
        $foto = $_FILES["foto"]["name"];
    }

    function test_input($data)
    {
        $data = trim($data);
        $data = stripslashes($data);
        $data = htmlspecialchars($data);
        return $data;
    }
    ?>

    <div class="formulir">
        <h2>FORM PENGUMPULAN DATA DIRI</h2>
        <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?>"
            enctype="multipart/form-data">
            <label for="username">Nama Lengkap:</label>
            <input type="text" id="username" name="username" placeholder="Masukkan Nama Lengkap" required>

            <label for="nisn">NISN:</label>
            <input type="text" id="nisn" name="nisn" placeholder="Masukkan NISN" required>

            <label for="jenis">Pilih Kelas:</label>
            <select id="jenis" name="jenis" required>
                <option value="" disabled selected>Pilih Jenis Kelamin</option>
                <option value="Laki-laki">Laki-laki</option>
                <option value="Perempuan">Perempuan</option>
            </select>

            <label for="lahir">Tanggal Lahir:</label>
            <input type="date" id="lahir" name="lahir" required>

            <label for="alamat">Alamat:</label>
            <input type="text" id="alamat" name="alamat" placeholder="Masukkan Alamat" required>

            <label for="telepon">Nomor Telepon/HP:</label>
            <input type="text" id="telepon" name="telepon" placeholder="Masukkan Nomor Telepon" required>

            <label for="foto">Upload Foto (JPG/PNG):</label>
            <input type="file" id="foto" name="foto" accept="image/jpeg, image/png" required>

            <input type="submit" name="klik" value="Kirim Data">
        </form>
    </div>
</body>

</html>