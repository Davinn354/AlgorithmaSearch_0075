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

    //menambahkan output keterangan "enter array elements"
    cout << "\n---------------------\n";
    cout << "Enter array elements \n";
    cout << "\n-------------------\n";
    for (i = 0; i < n; i++) //menambahkan looping for untuk mengiterasi input setiap elemen array dari indeks 0 hingga n-1
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}


void LinearSearch()
{
    char ch; 
    int ctr; 
    int item;
    do 
    {

        cout << "\nEnter the elemnt you want to search : "; //step 1 //menambahkan input output untuk membaca item apa yang akan dicari
        cin >> item;
        ctr = 0; //menambahkan ctr = 0 sebagai perhitungan jumlah perbandingan dimulai dari 0
        i = 0; //step 2 //menambahkan i = 0 yang digunakan sebagai indeks pencarian item yang dimulai dari indeks 0
        while (i < n) //step 3 //menambahkan perulangan while untuk mengiterasi step 4 hingga menemukan posisi item
        {
            ctr++;
            if (arr[i] == item)
            {
                cout << "\n" << item << " found at position " << (i + 1) << endl; //step 6
                break;
            }
            i++; //step 4
        }
        if (i == n) //step 5 //menambahkan desicion making if ketika indeks i sudah sampai baris akhir artinya posisi item tidak ditemukan
            cout << "\n" << item << " not found in the array\n";

        cout << "\nNumber of comparison : " << ctr << endl; //menambahkan output untuk keterangan jumlah perbandingan yang dilakukan
        cout << "\nContinue search (y/n) : "; //menambahkan input output untuk melanjutkan atau menghentikan pencarian
        cin >> ch;
    } while ((ch == 'y') || (ch == 'Y')); //menambahkan syarat perulangan, jika jawaban 'y' atau 'Y' maka akan mengiterasi input item yang diinginkan

   
}

void display() //membuat prosedur display
{
    cout << "Array elements are : ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() //membuat fungsi main untuk memanggil seluruh prosedur
{
    input();
    LinearSearch();
    display();
}