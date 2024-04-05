#include <iostream> 
using namespace std;

int arr[20]; //membuat variable global array dengan panjang maximum 20
int n; //membuat variable global int n untuk menyimpan jumlah elemen yang diinginkan dalam array.
int i; //membuat variable global int i yang digunakan sebagai indeks iterasi 
void input() // memulai prosedur input
{
	while (true) //menambahkan looping while (true) didalam input ntuk membuat loop yang akan terus berjalan tanpa henti sampai ada instruksi break di dalamnya.
    {
        cout << "Enter the number of elements in the array : "; //menambahkan input output jumlah element yang diinginkan dalam array 
        cin >> n;
        if ((n > 0) && (n <= 20)) //menambahkan decision making if..else untuk menentukan apakah program akan melanjutkan eksekusi atau menampilkan pesan kesalahan
            break;
        else
            cout << "\nArray shoould have minimum 1 and maximum 20 elements.\n\n";

    }
}