#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[5] = {0, 1, 2, 3, 4};
    cout << "enter the value to search in arr" << endl;
    int key;
    cin >> key;

    bool found = search(arr, 5, key);
    if (found)
    {
        cout << "found ";
    }
    else
    {
        cout << "The value is not in arr";
    }

    return 0;
}