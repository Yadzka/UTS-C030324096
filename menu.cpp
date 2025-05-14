#include <iostream>
#include <conio.h>
using namespace std;

const int MAX = 10; // konstanta jumlah data

void dMenu()
{
  system("cls");
  cout << "Aplikasi Tampilan Menu" << "\n";
  cout << "1. Menu Pertama" << "\n";
  cout << "2. Menu Kedua" << "\n";
  cout << "3. Menu Ketiga" << "\n";
  cout << "4. Menu Keempat" << "\n";
  cout << "5. Exit" << "\n";
  cout << "Masukan angka :";
}

void mPertama(string pesan)
{
  system("cls");
  cout << "hallo saya menu " << pesan;
  getch();
}

// Fungsi user menginput data
void inputData(int data[], int n)
{
  system("cls");
  cout << "Menu ke-1" << endl;
  cout << "Masukkan 10 data : " << endl;

  for (int i = 0; i < n; i++)
  {
    cout << "Masukkan Data ke-" << i + 1 << ": ";
    cin >> data[i];
  }
  cout << "Tekan tombol apapun untuk kembali ke menu utama." << endl;
  getch();
}

// Fungsi quote / sepatah kata
void sepatahKata()
{
  system("cls");
  cout << "Menu ke-4 " << endl;
  cout << "Kode bisa dihapus, semangat jangan" << endl;
  getch();
}

int main()
{
  char p;
  int d_array[MAX];
  do
  {
    dMenu();
    p = getch();
    switch (p)
    {
    case '1':
      inputData(d_array, MAX);
      break;
    case '2':

      break;
    case '3':

      break;
    case '4':
      sepatahKata();
      break;
    case '5':
      break;
    default:
      system("cls");
      cout << "Pilihan Tidak Tersedia";
      getch();
      break;
    }
  } while (p != '5');
  return 0;
}