#include <iostream>
using namespace std;

void run()
{
    int arr[] = {10, 5, 4, 6};
    int int_max = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > int_max)
        {
            int_max = arr[i];
            cout << int_max << endl;
        }
    }
    cout << int_max;
}
int main()
{

    run();
    return 0;
}