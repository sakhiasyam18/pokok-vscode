<?php
// Inisialisasi array untuk menyimpan data
$data = [];
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    // Ambil data dari formulir
    $nama = $_POST['nama'];
    $usia = $_POST['usia'];
    $jenis_kelamin = $_POST['jenis_kelamin'];
    $tanggal = $_POST['tanggal'];

    // Simpan data ke array (sementara, bisa diganti dengan database)
    $data[] = [
        'nama' => $nama,
        'usia' => $usia,
        'jenis_kelamin' => $jenis_kelamin,
        'tanggal' => $tanggal
    ];
}
