#include <iostream>
using namespace std;

void swapp(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int arr[] = {1, 3, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    swapp(arr, n);
    cout << "Reversed:";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
