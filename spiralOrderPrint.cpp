#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int rowS = 0, rowE = n - 1, colS = 0, colE = m - 1;

    // spiral order print

    while (rowS <= rowE && colS <= colE)
    {

        // for row start
        for (int col = colS; col <= colE; col++)
        {
            cout << arr[rowS][col] << " ";
        }
        rowS++;

        // for col end
        for (int row = rowS; row <= rowE; row++)
        {
            cout << arr[row][colE] << " ";
        }
        colE--;

        // for row end
        for (int col = colE; col >= colS; col--)
        {
            cout << arr[rowE][col] << " ";
        }
        rowE--;

        //for col start
        for (int row = rowE; row >= rowS; row--)
        {
            cout << arr[row][colS] << " ";
        }
        colS++;
    }

    return 0;
}