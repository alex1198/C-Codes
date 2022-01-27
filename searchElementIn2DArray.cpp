#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[n][m];
    int element;
    bool flag = false;
    cin >> element;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == element)
            {
                flag = true;
            }
        }
    }

    if (flag == true)
    {
        cout << "Element Found";
    }
    else
    {
        cout << "Element Not Found";
    }

    return 0;
}