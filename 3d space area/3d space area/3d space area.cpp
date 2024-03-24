// 3d space area.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<vector<int>> A
    {1, 3, 4},
    {2, 2, 3 },
    { 1, 2, 4 }
};

int count = 0, rowsum = 0;
int columnsum = 0;
int etraA = 0;

for (int i = 0;i < A.size();i++) {
    int rowmax = 0, columnmax = 0;
    for (int j = 0;j < A[i].size();j++) {

        if (A[i][j] > 0)
            count += 1;

        if ((A[i][j] < A[i][j - 1]) && (A[i][j + 1] > A[i][j])) {

            if (A[i][j - 1] < A[i][j + 1])
                etraA += (A[i][j - 1] - A[i][j]);

            else if (A[i][j - 1] == A[i][j + 1])
                etraA += (A[i][j - 1] - A[i][j]);

            else
                etraA += (A[i][j + 1] - A[i][j]);
        }

        rowmax = max(rowmax, A[i][j]);
        columnmax = max(columnmax, A[j][i]);



    }
    rowsum += rowmax;
    columnsum += columnmax;
}
int area = 2 * (count + rowsum + columnsum + etraA);
cout << area;

}
