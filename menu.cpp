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

// Fungsi menampilkan data input dari user
void tampilData(int data[], int n)
{
  system("cls");
  cout << "Menu ke-2" << endl;
  cout << "Data yang dimasukkan adalah: ";
  for (int i = 0; i < n; i++)
  {
    cout << data[i] << " ";
  }
  cout << endl;
  cout << "Tekan tombol apapun untuk kembali ke menu utama." << endl;
  getch();
}

// Fungsi untuk mengurutkan dari kecil ke besar
void ascendingSort(int data[], int n)
{
  int temp;
  for (int i = 1; i < n; i++)
  {
    temp = data[i];
    int j = i - 1;
    while (j >= 0 && data[j] > temp)
    {
      data[j + 1] = data[j];
      j--;
    }
    data[j + 1] = temp;
  }
}

// Fungsi untuk mengurutkan dari besar ke kecil
void descendingSort(int data[], int n)
{
  int temp;
  for (int i = 1; i < n; i++)
  {
    temp = data[i];
    int j = i - 1;
    while (j >= 0 && data[j] < temp)
    {
      data[j + 1] = data[j];
      j--;
    }
    data[j + 1] = temp;
  }
}

// Fungsi untuk menyimpan data dari hasil input user
void simpanData(int arr[], int t[], int n)
{
  for (int i = 0; i < n; i++)
  {
    t[i] = arr[i];
  }
}

// Fungsi menampilkan hasil sorting ascend dan descend
void sort(int arr[], int n, char mode)
{
  if (mode == 'a')
  {
    ascendingSort(arr, n);
    cout << "Ascending (Kecil ke Besar): ";
  }
  else if (mode == 'd')
  {
    descendingSort(arr, n);
    cout << "Descending (Besar ke Kecil): ";
  }
  else
  {
    cout << "Mode tidak valid." << endl;
    return;
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// Fungsi untuk menampilkan hasil sorting dari data
void sorting(int data[], int n)
{
  int temp[MAX];
  system("cls");
  cout << "Menu ke-3" << endl;
  cout << "Hasil Pengurutan Data:" << endl;

  simpanData(data, temp, n);
  sort(temp, n, 'a');

  simpanData(data, temp, n);
  sort(temp, n, 'd');

  cout << "Tekan sembarang tombol untuk kembali ke menu utama." << endl;
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


// Fungsi utama
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
      tampilData(d_array, MAX);
      break;
    case '3':
      sorting(d_array, MAX);
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