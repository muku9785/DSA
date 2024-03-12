#include <iostream>
using namespace std;

void reverse(int arr[], int size)
{
    cout << "The reverse elements are: ";
    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

                                   /*ALTERNATIVE OR REVERSING*/
// void reverse(int arr[],int size){
//     int start =0; //start index  or first element of index
//     int end = size-1; //end index last element of index
//     while(start < end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;

//     }
// }

int main()
{
    int arr[10];
    int size;
    cout << "Enter total number of elements: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of array element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "The array elements are: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverse(arr, size); // Call the reverse function separately

    return 0;
}
