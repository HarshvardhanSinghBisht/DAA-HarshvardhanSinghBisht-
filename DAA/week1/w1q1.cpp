#include <iostream>
using namespace std;


int main()
{
    int key, i, n;
    int arr[200];
    cout << "enter n nos.";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> key;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << key << "is present at location" << i + 1 << "in the array";
            break;
        }
        else if (i == n)
            {
                cout << key << " isn't preasent in array";
            }
    }
    return 0;
}
