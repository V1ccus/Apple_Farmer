#include <iostream>
#include <time.h>
using namespace std;
/*
 * Hosea Nicolas ANPP
 * FTI_TeknikInformatika | 672021159
 * =======================================
*/

int main() {
    //inisialisasi
    char yt;
    string nm;
    int x, a;

            /*Menu Utama*/
            system("cls");
            menu :
            cout << "--------------------------------\n";
            cout << "[PROGRAM | TEBAK ANGKA KOMPUTER]\n";
            cout << "=========================================\n";
            cout << "siapa nama-mu, nak?\n";
            getline(cin, nm);
            cout << "\n\n";
            system("cls");
            cout << "[ Komputer ]\n";
            cout << "Sedang memberi nilai angka secara acak.\n";system("pause");
            system("cls");
            cout << "[ " << nm << " ]\n";
            cout << "hmm...\n";system("pause");
            system("cls");
            cout << "[ Komputer ]\n";
            cout << "Hey, " << nm;
            cout << " tebak angka yang aku pikirkan sekarang!\n";system("pause");
            system("cls");
            cout << "[ " <<nm<< " ]\n";
            cout << "kasih aku cluenya, dong\n";system("pause");
            system("cls");
            cout << "[ Komputer ]\n";
            cout << "baik, cluenya adalah angka dengan range 1 - 10.\n";system("pause");

        /*Input Jawab dan Pengulangan*/
        system("cls");
    do {
        jawab:
        cout << "[ " << nm << " ]\n";
        cout << "Ok, jawabnya adalah ";
        cin >> x;
        cout << "\n[ Komputer ]\n";

        //
        srand(time(NULL));
        int angka = (rand() % 10)+1;
        a++;

        //Percabangan
        if (x == angka) {system("cls");
            cout << "...\n";
            cout << "Wow, Tebakan-Mu Benar! | Total tebakan : "<<a<<"x.\n";
            cout << "--------------\n";
            cout << "Ingin bermain denganku lagi? (y/t)";cin>>yt;cout <<"\n";
        } else if (x < angka) {system("cls");
            cout << "...\n";
            cout << "Angka yang kamu masukkan terlau kecil.\n";system("pause");
            goto jawab;
        } else if (x > angka) {system("cls");
            cout << "...\n";
            cout << "Angka yang kamu masukkan terlau besar.\n";system("pause");
            goto jawab;
        } else {system("cls");
            cout << "Maaf, aku tidak paham dengan input yang kamu berikan.\n";system("pause");
            goto menu;
        }

    }while(yt/='y');
    system("cls");
    cout << "Terima kasih..\n";
    system("pause");
    return 0;}
