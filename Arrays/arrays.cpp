#include <iostream>
using namespace std;

int main()
{
    int num[] = {10, 20, 50, 30};
    int n = sizeof(num) / sizeof(num[0]);

    for (int i = 0; i < n; i++)
    {
        cout << num[i] << endl;
    }

    return 0;
}