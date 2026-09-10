#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // n = 8

    for (int i = 0; i < n; i++)
    {
        // Print the first element or whenever the value changes
        if (i == 0 || arr[i] != arr[i - 1])
        {
            cout << arr[i] << endl;
        }
    }

    return 0;
}