#include <iostream>
using namespace std;

int linearsearch(int arr[], int tar, int n)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == tar)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 4, 3, 6};
    int tar = 4;
    int index = -1;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << linearsearch(arr, tar, n) << endl;
    return 0;
}