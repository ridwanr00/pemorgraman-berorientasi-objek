# Tugas Praktik 1 - Pemrograman Berorientasi Objek

Implementasi perancangan class dan objek dalam bahasa **Java** dan **C++**
sesuai spesifikasi Tugas Praktik 1.

## Identitas Mahasiswa

- **Nama:** Ridwan Rasyid
- **NIM:** 1003260037
- **Kelas:** IF104 - Pemrograman Berorientasi Objek
- **Program Studi:** Teknik Informatika
- **Perguruan Tinggi:** Institut Teknologi Tangerang Selatan

## Spesifikasi Kasus

Parameter kasus ditentukan berdasarkan NIM:

- **Digit terakhir (7):** domain kasus **bengkel**
- **Digit ke-4 dan ke-5 dari belakang (32):** nilai dasar `32 × 1.000 = Rp32.000`
- **Atribut numerik:** `biayaServis`
- **Class model:** `Servis0037`
- **Class pengelola:** `Bengkel`

Program memodelkan data servis kendaraan yang terdiri dari jenis servis, biaya
servis, dan biaya part. Class `Bengkel` mencetak nota dan
`Servis0037` menghitung total biaya. Setter biaya juga memvalidasi nilai
negatif dan mengubahnya menjadi `0`.

## Struktur Direktori

```text
.
├── cpp/
│   ├── Bengkel.cpp
│   ├── Bengkel.h
│   ├── main.cpp
│   ├── Servis0037.cpp
│   └── Servis0037.h
├── java/
│   ├── src/
│   │   ├── Bengkel.java
│   │   ├── Main.java
│   │   └── Servis0037.java
│   └── .gitignore
├── screenshots/
│   ├── output_cpp.png
│   └── output_java.png
└── README.md
```

File `.class`, folder `out/`, dan executable hasil kompilasi merupakan artefak
build dan tidak diperlukan sebagai source code.

## Menjalankan Program C++

Dari direktori yang berisi README ini, jalankan:

```bash
g++ -std=c++17 cpp/main.cpp cpp/Bengkel.cpp cpp/Servis0037.cpp \
    -o cpp/tugas_oop
./cpp/tugas_oop
```

## Menjalankan Program Java

Dari direktori yang berisi README ini, jalankan:

```bash
javac -d java/out java/src/*.java
java -cp java/out Main
```

Java membutuhkan JDK, sedangkan C++ membutuhkan compiler yang mendukung
standar C++17.

## Contoh Output

Hasil eksekusi program tersedia pada:

- [Output C++](screenshots/output_cpp.png)
- [Output Java](screenshots/output_java.png)

Kedua program menampilkan nota untuk dua data servis dan menguji validasi
setter dengan memasukkan nilai biaya part negatif.
