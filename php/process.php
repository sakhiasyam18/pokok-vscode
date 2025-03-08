<?php
session_start();
if (!isset($_SESSION['data'])) {
    $_SESSION['data'] = [];
}

if ($_SERVER['REQUEST_METHOD'] == 'POST') {
    $nama = trim($_POST['nama']);
    $usia = trim($_POST['usia']);
    $jenis_kelamin = $_POST['jenis_kelamin'];
    $tanggal = $_POST['tanggal'];

    if (!empty($nama) && is_numeric($usia)) {
        $_SESSION['data'][] = [
            'nama' => $nama,
            'usia' => $usia,
            'jenis_kelamin' => $jenis_kelamin,
            'tanggal' => $tanggal
        ];
    }
}

$no = 1;
foreach ($_SESSION['data'] as $row) {
    echo "<tr>
                    <td>{$no}</td>
                    <td>{$row['nama']}</td>
                    <td>{$row['usia']}</td>
                    <td>{$row['jenis_kelamin']}</td>
                    <td>{$row['tanggal']}</td>
                  </tr>";
    $no++;
}
