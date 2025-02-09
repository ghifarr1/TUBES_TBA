/*Kami Kelompok 2 di kelas KOM-1C2 pada Tugas Besar Teori Bahasa dan Automata atas nama Muhammad Fathan Putra (2300330) sebagai ketua,
Naufal Fakhri Al-Najieb (2309648), Abdurrahman Al Ghifari (2300456), Hanif Ahmad Syauqi (2304330), Anugrah Bayu Satrio (2300624)
mengerjakan untuk keberkahanNya. Semoga segala codingan dan komentar yang ada di codingan ini dapat membantu
pihak peninjau untuk memberikan nilai yang terbaik, Aamiin.*/

#include <stdio.h>  //library codingan umum
#include <string.h> //library yang berhubungan dengan string

typedef struct {      // deklarasi typedef agar dapat digunakan di setiap bagian mesin
    int stasiun1;     // deklarasi variabel buat nampung stasiun asal
    int stasiun2;     // deklarasi variabel buat nampung stasiun tujuan
    char metode[101]; // deklarasi variabel buat nampung metode yang mau digunakan user
    int tunai;        // deklarasi variabel buat nampung bilangan tunai pertama kali
    int tunai2;       // deklarasi variabel buat nampung bilangan tunai tambahan kalau kurang
    char valid;       // deklarasi variabel buat nampung jawaban valid di tunai
    char valid2;      // deklarasi variabel buat nampung jawaban valid di e-money
    int emoney;       // deklarasi variabel buat namping bilangan random e-money
    char konfir[101]; // deklarasi variabel buat konfirmasi mau ngulang atau sudah cukup
} bungkusan;          // nama typedef nya 'bungkusan'

void Daftar() {
    // Void untuk List Statiun MRT nya
    printf(" _______________________________________________________\n");
    printf("|                  !!!Selamat Datang!!!                 |\n");
    printf("|            Di Laman Stasiun UPI Kota Wacanda          |\n");
    printf("|_______________________________________________________|\n");
    printf("|             List Stasiun MRT Di Kota Wacanda          |\n");
    printf("|=======================================================|\n");
    printf("| No MRT |     Tujuan Stasiun           |     Tarif     |\n");
    printf("|=======================================================|\n");
    printf("|   1    |      Lebak Bulus Grab        |    Rp.5000    |\n");
    printf("|   2    |      Haji Nawi               |    Rp.5000    |\n");
    printf("|   3    |      ASEAN                   |    Rp.5000    |\n");
    printf("|   4    |      Cipete Jaya             |    Rp.5000    |\n");
    printf("|   5    |      Bendungan Hilir         |    Rp.5000    |\n");
    printf("|   6    |      Bundaran HI             |    Rp.5000    |\n");
    printf("|   7    |      Fatawawti Indomaret     |    Rp.5000    |\n");
    printf("|   8    |      Blok M BCA              |    Rp.5000    |\n");
    printf("|   9    |      Blok A                  |    Rp.5000    |\n");
    printf("|   10   |      Senayan                 |    Rp.5000    |\n");
    printf("|   11   |      Setia Budi Astra        |    Rp.5000    |\n");
    printf("|   12   |      Istora Mandiri          |    Rp.5000    |\n");
    printf("|   13   |      Dukuh Atas BNI          |    Rp.5000    |\n");
    printf("|________|______________________________|_______________|\n");
    printf("Selamat datang di Mesin Tiket Kereta Api UPI Suka Bercanda!!!\n");
    printf("Silahkan pilih Nomor Kereta menggunakan NO MRT yang telah tertera di layar!\n");
    printf("Untuk membatalkan pembelian, tekan '0'\n");
}

void struk_ke_1() {
    // Struk pas pake metode pembayaran E-Money tapi saldonya belum mencukupi (Q18)
    printf(" ________________________________________________________________________\n");
    printf("|          Mohon maaf, Saldo Uang Onlen Anda tidak mencukupi -o-         |\n");
    printf("|  Silahkan untuk mengisi saldo terlebih dahulu di GamaMart Terdekat!!!  |\n");
    printf("|________________________________________________________________________|\n");
}

void struk_ke_2() {
    // Struk kalau misal metode pembayaran tidak sesuai (Q30)
    printf(" ____________________________________________________________\n");
    printf("| Maaf, metode pembayaran yang Anda ajukan belum tersedia :( |\n");
    printf("|          Silahkan untuk mengulang kembali :0               |\n");
    printf("|____________________________________________________________|\n");
}
void struk_ke_3() {
    // Struk kalau user nggak mau masukin inputan lagi (Q27)
    printf(" _____________________________________________________________________________\n");
    printf("|          Wah, Sayang sekali Uang yang setorkan masih kurang (oUo)           |\n");
    printf("|     Silahkan untuk mengambil uang di Amati Turu Motoran Terdekat (ATM) ~.~  |\n");
    printf("|_____________________________________________________________________________|\n");
}
void struk_ke_4() {
    // Struk kalau misal nggak mau melanjutkan transaksi kembali (Q29)
    printf(" __________________________________________________________\n");
    printf("|         Baik, terimakasih atas perhatiannya!!            |\n");
    printf("|         Semoga perjalanan Anda menyenangkan :)           |\n");
    printf("|__________________________________________________________|\n");
}

void struk_final(bungkusan panggil, int stasiunt, int total, int sisa) {
    // Struk buat nampilin hasil akhir kalau berhasil "E-Money" atau "Tunai (Q28)
    printf("_________________________________________________________________________\n");
    printf("                                                                         \n");
    printf("                     DD   DD     DDDDDDD     DDD                         \n");
    printf("                     DD   DD     DD   DD     DDD                         \n");
    printf("                     DD   DD     DDDDDDD     DDD                         \n");
    printf("                     DD   DD     DD          DDD                         \n");
    printf("                     DDDDDDD     DD          DDD                         \n");
    printf("                                                                         \n");
    printf("                      < Struk Pemesanan Tiket >                          \n");
    printf("                                                                         \n");
    printf("   Jenis Pembayaran              : %s                                    \n", panggil.metode);
    printf("   Kode Booking                  : UP1 3DUN                              \n");
    printf("   Jumlah Stasiun yang dilewati  : %d                                    \n", stasiunt);
    printf("   Biaya                         : Rp.%d                                 \n", total);
    printf("   Uang Sisa Kembalian           : Rp.%d                                 \n", sisa);
    printf("                                                                         \n");
    printf("             Struk ini harus ditukarkan dengan tiket di                  \n");
    printf("              stasiun keberangkatan paling telat 1 jam                   \n");
    printf("                     sebelum keberangkatan :)                            \n");
    printf("                                                                         \n");
    printf("            Informasi lebih lanjut, hubungi contact center               \n");
    printf("                       0858 4908 4405 (Kobo)                             \n");
    printf("_________________________________________________________________________\n");
}

int main() {
    // pertama kita mulai dengan memanggil daftarnya terlebih dahulu (Q0)
    Daftar();          // kita panggil daftarnya terlebih dahulu
    int i = 0;         // kita bikin variabel + marking buat dipake di perulangan mesin-mesinnya
    int total = 0;     // kita bikin variabel + marking buat nampung total tarif yang harus dibayar
    int stasiunt = 0;  // kita bikin variabel + marking buat print jumlah stasiun yang sudah dilewati
    int sisa = 0;      // kita bikin variabel + marking buat print uang sisa kembalian user
    bungkusan panggil; // kita kasih nama kotak typedef nya 'panggil'

    // kedua, kita buat perulangan buat masukin inputan user (Q1 - Q13)
    i = 0; // iterasi untuk perulangan di do-while
    do {
        printf("\nPilih titik awal stasiun keberangkatan:\n"); // print kata-katanya untuk penanda user memasukkan titik keberangkatan
        // Titik awal keberangkatan
        scanf("%d", &panggil.stasiun1);                                 // minta user untuk masukkan data stasiun awal keberangkatan
        if (panggil.stasiun1 == 0) {                                    // kita check, jika user memasukkan angka 0
            printf("Pembelian dibatalkan\n");                           // maka langsung saja print 'pembelian dibatalkan'
            return 0;                                                   // lalu mesin langsung berhenti
        } else if ((panggil.stasiun1 < 1) || (panggil.stasiun1 > 13)) { // dan jika user memasukkan inputan diluar angka 1 dan 13
            printf("Inputan tidak valid\n");                            // maka langsung saja print 'inputan tidak valid'
            return 0;                                                   // lalu mesin langsung berhenti
        }
        printf("\nPilih titik akhir stasiun tiba:\n"); // print kata-katanya untuk penanda user memasukkan titik destinasi
        // Titik akhir tiba
        scanf("%d", &panggil.stasiun2);                                 // minta user untuk masukkan data stasiun akhir tujuan
        if (panggil.stasiun2 == 0) {                                    // kita check, jika user memasukkan angka 0
            printf("Pembelian dibatalkan\n");                           // maka langsung saja print 'pembelian dibatalkan'
            return 0;                                                   // lalu mesin langsung saja berhenti
        } else if ((panggil.stasiun2 < 1) || (panggil.stasiun2 > 13)) { // dan jika user memasukkan inputan diluar angka 1 dan 13
            printf("Inputan tidak valid\n");                            // maka langsung saja print 'inputan tidak valid'
            return 0;                                                   // lalu mesin langsung berhenti
        }

        if (panggil.stasiun1 == panggil.stasiun2) {                                      // dan jika saat di check, tujuan awal dan tujuan destinasi ternyata tempatnya sama
            printf("\nTidak bisa melakukan transaksi di tujuan stasiun yang sama :(\n"); // maka langsung saja print 'tidak bisa melakukan transaksi di tujuan stasiun yang sama'
            return 0;                                                                    // lalu mesin langsung berhenti
        }

        sisa = 0;     // marking untuk sisa uang user setelah dikurangi biaya yang harus dibayar
        stasiunt = 0; // marking untuk jumlah stasiun yang dilewati
        total = 0;    // marking untuk total biaya yang harus dibayarkan
        // ketiga, kita masukkan stasiun yang sudah di pilih user ke dalam suatu variabel (Q14)
        if (panggil.stasiun1 < panggil.stasiun2) {                      // kita check, kalau stasiun akhir lebih besar dari stasiun awal (pada urutan stasiunnya)
            stasiunt = ((panggil.stasiun2 - panggil.stasiun1) + 1);     // maka jumlah stasiunnya akan seperti ini
            total = ((panggil.stasiun2 - panggil.stasiun1) + 1) * 5000; // dan penjumlahan total biaya yang diperlukan akan seperti ini
        } else if (panggil.stasiun1 > panggil.stasiun2) {               // namun jika stasiun awal lebih besar dari stasiun akhir (pada urutan stasiunnya)
            stasiunt = ((panggil.stasiun1 - panggil.stasiun2) + 1);     // maka jumlah stasiunnya akan seperti ini
            total = ((panggil.stasiun1 - panggil.stasiun2) + 1) * 5000; // dan penjumlahan total biaya yang diperlukan akan seperti ini
        }

        // keempat, kita masukkan metode pembayaran yang mau digunakan user
        printf("\nPilih metode pembayaran yang mau digunakan: (Tunai/E-Money)\n"); // print kata-katanya untuk penanda user memasukkan metode pembayaran
        scanf("%s", panggil.metode);                                               // minta user untuk memasukkan metode-nya
        // Jika Metode yang digunakan Tunai (Q15)
        if (strcmp(panggil.metode, "Tunai") == 0) {                                                                            // bila user memilih metode Tunai
            printf("\nMasukan Nominal Tunai Anda: (kelipatan 5k)\n");                                                          // user akan diminta untuk memasukkan uang dengan kelipatan 5
            scanf("%d", &panggil.tunai);                                                                                       // user memasukkan inputan yang diminta
            if (panggil.tunai % 5000 == 0) {                                                                                   // bila benar inputan user kelipatan 5
                if (panggil.tunai < total) {                                                                                   // bila ternyata uang yang user input belum sama dengan total
                    printf("\nNominal uang tunai yang Anda masukan kurang, Apakah Anda ingin mengisi saldo kembali? (y/n)\n"); // mesin akan bertanya apakah ingin menginput uang kembali atau tidak
                    scanf(" %c", &panggil.valid);                                                                              // ini untuk inputan user
                    if (panggil.valid == 'y') {                                                                                // bila user menjawab mau 'y'
                        do {
                            printf("\nTolong masukan jumlah nominal tambahan: \n");              // akan print ini sebagai pertanya user untuk memasukkan uang kembali
                            scanf("%d", &panggil.tunai2);                                        // untuk inputan user (Q25)
                            if (panggil.tunai2 % 5000 == 0) {                                    // bila inputan user benar kelipatan 5
                                panggil.tunai += panggil.tunai2;                                 // maka nominal yang kurang akan ditambah dengan nominal yang baru
                            } else {                                                             // namun jika inputan user bukan kelipatan 5
                                printf("Inputan nominal tidak valid mohon masukan kembali\n\n"); // akan print ini (Q27)
                            }
                        } while (panggil.tunai <= total);                                // perulangan ini akan berlangsung selama inputan user masih dibawah nominal yang harus dibayar
                        sisa = panggil.tunai - total;                                    // sisa adalah jumlah uang final user - total yang harus dibayarkan
                        struk_final(panggil, stasiunt, total, sisa);                     // dan akan print struknya (Q28)
                    } else if (panggil.valid == 'n') {                                   // namun bila user tidak mau memasukkan inputan kembali saat uangnya kurang
                        struk_ke_3();                                                    // maka akan langsung print struk ke 3 (Q27)
                    } else {                                                             // namun bila inputan user bukan 'y' / 'n'
                        printf("\nInputan tidak valid mohon untuk mengulang kembali\n"); // maka akan print ini (Q30)
                        return 0;                                                        // dan mesin akan langsung berhenti
                    }
                } else {
                    sisa = panggil.tunai - total;
                    struk_final(panggil, stasiunt, total, sisa);
                }
            } else {                                                                   // bila inputan user bukan kelipatan 5
                printf("\nInput nominal tidak valid mohon untuk mengulang kembali\n"); // maka akan langsung print ini (Q30)
                return 0;                                                              // dan mesin akan langsung berhenti
            }
        }
        // Jika Metode yang digunakan E-Money (Q16)
        else if (strcmp(panggil.metode, "E-Money") == 0) {                  // bila user memilih metode E-Money
            printf("\nApakah Anda memiliki saldo E-money? (y/n)\n");        // user akan ditanya, apakah memiliki cukup saldo
            scanf(" %c", &panggil.valid2);                                  // user memasukkan inputan 'y' / 'n'
            if (panggil.valid2 == 'y') {                                    // bila user memasukkan inputan 'y' (Q17)
                printf("\nSilahkan Masukan jumlah saldo E-money Anda: \n"); // user akan diminta untuk memasukkan jumlah saldonya
                scanf("%d", &panggil.emoney);                               // user akan memasukkan saldo e-money -nya
                if (panggil.emoney < total) {                               // jika saldo tidak mencukupi (N/0)
                    struk_ke_1();                                           // maka akan print struk ke-1 (Q18)
                    return 0;                                               // dan mesin akan langsung berhenti
                } else {                                                    // namun, bila ternyata saldo mencukupi (Y/0) (Q19)
                    sisa = panggil.emoney - total;                          // sisa saldo adalah inputan saldo - total biaya yang harus dibayar
                    struk_final(panggil, stasiunt, total, sisa);            // maka akan print struk sesuai dengan urutan berikut (Q28)
                }
            } else if (panggil.valid2 == 'n') {                                                        // namun bila user memasukkan inputan 'n' (Q18)
                printf("\nPembelian dibatalkan, terima kasih telah mencoba melakukan transaksi :)\n"); // maka akan print 'pembelian dibatalkan, terima kasih telah mencoba melakukan transaksi' (Q18)
            } else {                                                                                   // namun bila inputan tidak sesuai 'y' / 'n' (else)
                printf("Inputan tidak valid mohon untuk mengulang kembali\n");                         // maka akan langsung print ini (Q30)
                return 0;                                                                              // dan mesin akan langsung berhenti
            }
        } else {          // namun bila user memasukkan metode selain 'y' dan 'n'
            struk_ke_2(); // maka akan keluar struk ke-2, yang artinya metode belum tersedia (Q30)
            return 0;     // dan mesin langsung berhenti
        }

        // bila sudah print struk terakhir (Q28)
        printf("\nApakah Anda mau melanjutkan transaksi? (Yes / No)\n"); // user akan ditanyakan, apakah ingin melanjutkan transaksi / tidak
        // Konfirmasi ulang untuk balik lagi ke awal (Q0)
        scanf("%s", panggil.konfir);              // user diminta untuk memasukkan inputan
        if (strcmp(panggil.konfir, "Yes") != 0) { // bila jawaban user adalah selain 'YES' (N/1)
            struk_ke_4();                         // maka akan print struk ke-4 (menyudahi transaksi) (Q29)
        }
        i++;                                      // setiap perulangan ini, i akan bertambah untuk check ke bilangan / string selanjutnya
    } while (strcmp(panggil.konfir, "Yes") == 0); // semua bagian mesin diatas akan dijalankan minimal 1x, pada saat user setuju untuk melakukan Transaksi (tidak memasukkan 0)
}