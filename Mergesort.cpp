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
}

int main()
{

}