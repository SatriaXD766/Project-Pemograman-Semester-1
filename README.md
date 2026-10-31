<img src="https://capsule-render.vercel.app/api?type=waving&color=gradient&customColorList=6,11,20,25,30&height=320&section=header&text=Project%20Semester%201&fontSize=55&fontColor=fff&animation=fadeIn&fontAlignY=38&desc=Satria%20Bagas%20Sejati%20%E2%80%A2%20552012610009%20%E2%80%A2%20Teknik%20Informatika&descAlignY=62&descSize=20" />

<div align="center">
  
[![Typing SVG](https://readme-typing-svg.demolab.com?font=JetBrains+Mono&weight=700&size=28&duration=3000&pause=800&color=00F5FF&center=true&vCenter=true&multiline=true&width=850&height=150&lines=Si+Anak+Informatika+%F0%9F%92%BB+Satria+Bagas+Sejati;Ngoding+Dari+Nol%2C+Mimpi+Setinggi+Langit+%F0%9F%9A%80;Welcome+to+My+Semester+1+Journey+%F0%9F%94%A5;Slay+Every+Bug+%2C+Build+The+Future+%E2%9C%A8)](https://git.io/typing-svg)

<p>
  <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" />
  <img src="https://img.shields.io/badge/Semester%201-FF6B00?style=for-the-badge&logo=bookstack&logoColor=white" />
  <img src="https://img.shields.io/badge/Monorepo-2_Projects-00FFAB?style=for-the-badge&logo=stackblitz&logoColor=black" />
  <img src="https://img.shields.io/badge/Status-On_Fire-FF00FF?style=for-the-badge&logo=fire&logoColor=white" />
</p>

<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif" width="100%">

## 👨‍💻 Identitas
- **Nama:** Satria Bagas Sejati
- **NIM:** 552012610009
- **Prodi:** Teknik Informatika - Semester 1
- **Universitas:** Cahaya Surya Kediri
- **Repo:** `Project-Pemograman-Semester-1` - Kumpulan Project C++ dari Nol

> "Ini bukan sekedar tugas, tapi jejak pertama saya di dunia developer."

---

## 📚 Daftar Project Semester 1

Repo ini adalah monorepo - semua project semester 1 aku kumpulin di sini biar rapi dan jadi portofolio.

| No | Folder | Nama Project | Fokus Materi | Status |
| :--- | :--- | :--- | :--- | :--- |
| 01 | [`01-Konversi-Sistem-Bilangan`](./01-Konversi-Sistem-Bilangan/) | Konversi Sistem Bilangan Lengkap | Function, Horner Method, Math Logic | ✅ Done |
| 02 | [`01-Mini-POS-ATK`](./01-Mini-POS-ATK/) | Mini POS ATK (Sistem Kasir) | DO-WHILE, FOR, IF-ELSE, Array | ✅ Done |

---

## 🔍 Detail Project

### 01 - Konversi Sistem Bilangan
File: `konversi_lengkap.cpp`
Project pertama ku pas awal-awal ngerti logika.

**Fitur Utama:**
1. Desimal -> Biner, Oktal, Heksadesimal
2. Biner, Oktal, Heksadesimal -> Desimal (Metode Horner)
3. Konversi silang antar basis non-desimal (Hexa <-> Okta, Biner <-> Okta/Hexa)

**Alur Pengembangan:**
1. Analisis konsep Metode Horner
2. Rancang fungsi `charToValue` untuk 'A'-'F' -> 10-15
3. Implementasi inti `toDecimal` sebagai basis Horner
4. Implementasi `decimalToBinary`, `decimalToOctal`, `decimalToHexadecimal` via pembagian bersisa
5. Konversi silang via Desimal sebagai perantara
6. Testing & handle huruf kecil/besar

### 02 - Mini POS ATK
File: `main.cpp`
Fokus ke control flow biar paham fundamental.

**Alokasi Logika Sesuai Requirement:**
- **DO-WHILE:** Loop menu utama belanja + validasi uang bayar (uang kurang loop lagi)
- **FOR:** Tampilkan katalog, hitung total belanja, cetak struk
- **IF-ELSE:** Validasi pilihan menu + logika diskon threshold

**Logika Diskon:**
- Total >= Rp 50.000 = Diskon 5%
- Total < Rp 50.000 = 0%

---

## ✨ Harapan & Journey di GitHub

Sebagai mahasiswa baru, ini langkah pertama ku:
1. **Belajar Open Source:** Paham Git & version control
2. **Bangun Portofolio Digital:** Dokumentasi belajar dari nol
3. **Feedback:** Terbuka buat masukan dosen & teman
4. **Konsistensi:** Komitmen upload setiap project kecil selama kuliah
5. **Motivasi:** Kode yang di-publish = motivasi buat nulis kode rapi

### 🚀 Langkah Upload Project Pertama (Jejak Awal)
- **Tahap 1:** Buat akun github.com & install Git
- **Tahap 2:** New repository -> `Project-Semester-1` -> Public + Add README
- **Tahap 3:** Siapkan file `.cpp` yang udah tested & ke-compile
- **Tahap 4:** Add file > Upload files > Commit `Initial commit`
- **Tahap 5:** Edit README.md pakai Markdown
- **Tahap 6:** Sekarang jadi monorepo semester 1 biar lebih rapi!

---

## 💻 Cara Menjalankan

Pastikan sudah install G++.

```bash
# Clone repo
git clone https://github.com/SatriaXD766/Project-Pemograman-Semester-1.git
cd Project-Pemograman-Semester-1

# Run Konversi
cd 01-Konversi-Sistem-Bilangan
g++ konversi_lengkap.cpp -o konversi
./konversi

# Run Mini POS ATK
cd ../01-Mini-POS-ATK
g++ main.cpp -o kasir
./kasir
