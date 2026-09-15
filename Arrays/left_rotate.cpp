// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    // Write C++ code here
    int arr[] = {1, 2, 3, 4, 5, 7};
    int i, k = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp = arr[0];
    k = k % 2;
    for (int z = 1; z <= k; z++)
    {
        int temp = arr[0];
        for (i = 1; i < n; i++)
        {
            arr[i - 1] = arr[i];
        }
        arr[n - 1] = temp;
    }
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }

    return 0;
}