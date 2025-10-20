#include <iostream>  // Untuk input dan output
#include <string>   // Untuk menggunakan tipe data string

int main() {
    // Variabel untuk menyimpan nama pengguna
    std::string nama;

    // Menampilkan pesan untuk meminta input
    std::cout << "Masukkan nama Anda: ";
    
    // Membaca input dari pengguna
    std::cin >> nama;
    
    // Menampilkan pesan salam
    std::cout << "Hello, " << nama << "!" << std::endl;

    return 0;  // Program selesai
}