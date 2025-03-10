<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Formulir Diri Sendiri</title>
</head>

<body>
    <?php
    $username = $umur = $jenis = $lahir = "";

    if ($_SERVER["REQUEST_METHOD"] == "POST") {
        $username = test_input($_POST["username"]);
        $umur = test_input($_POST["umur"]);
        $jenis = test_input($_POST["jenis"]);
        $lahir = test_input($_POST["lahir"]);
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
        <h2>FORMULIR ISI DIRI</h2>
        <form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]); ?>">
            <p>Nama <input type="text" name="username" placeholder="username" required></p>
            <p>Usia <input type="number" name="umur" placeholder="wajib angka" required></p>
            Jenis Kelamin
            <select name="jenis" required>
                <option value="laki">Laki</option>
                <option value="Perempuan">Perempuan</option>
            </select>
            <br><br>
            Tanggal Lahir <input type="date" name="lahir" required>
            <br><br>
            <input type="submit" name="klik" value="Klik">
        </form>
    </div>

    <div class="data">
        <h3>Oke, Ini Data Anda Sudah Masuk</h3>
        <table border="2">
            <tr>
                <th>Nama Kamu</th>
                <th>Usia nya</th>
                <th>Jenis</th>
                <th>Lahirmu</th>
            </tr>
            <?php
            if ($_SERVER["REQUEST_METHOD"] == "POST") {
                echo "<tr>";
                echo "<td>$username</td>";
                echo "<td>$umur</td>";
                echo "<td>$jenis</td>";
                echo "<td>$lahir</td>";
                echo "</tr>";
            }
            ?>
        </table>
    </div>
</body>

</html>