#include <iostream>
using namespace std;

int arr[20], B[20]; // array utama dan array sementara
int n; // ukuran array

void input() // Prosedur input data
{
    while(true)
    {
        cout << "Masukkan panjang element array : ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else 
        {
            cout << "\n Maksimal panjang array adalah 20";
        }
    }
    cout << "\n========================" << endl;
    cout << "Inputkan isi element array" << endl;
    cout << "==========================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Array index ke- " << i << " : ";
        cin >> arr[i];
    }
}

void mergeSort(int low, int high)
{
    if (low >= high) // step 1
    {
        return; // step 1a
    }

    int mid = (low + high) / 2; // step 2

    //Fungsi Rekursi - Memanggil diri sendiri
    mergeSort(low, mid); // step 3
    mergeSort(mid + 1, high); // step 3a

    int i = low; // step 4
    int j = mid + 1; // step 4a
    int k = low; // step 4b

    while (i <= mid && j <= high) // step 4d
    {
        if (arr[i] <= arr[j]) 
        {
            B[k] = arr[i]; 
            i++; 
        }
        else 
        {
            B[k] = arr[j]; 
            j++; 
        }
        k++; 
    }
    while (j <= high) // step 4e
    {
        B[k] = arr[j]; 
        j++; 
        k++; 
    }
    while (i <= mid) // step 4f
    {
        B[k] = arr[i]; 
        i++; 
        k++; 
    }

    for (int y = low; y <= high; y++)
    {
        arr[y] = B[y]; // step 5
    }
}

void output()
{
    cout << " \nData setelah diurutkan (Merge Sort) : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    input(); // Memanggil prosedur input
    mergeSort(0, n - 1); // Memanggil fungsi MergeSort
    output(); // Memanggil prosedur output
}