#include <iostream>
using namespace std;

void transpose(int arr[][3], int row, int col,int transpose[][3])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }
}

int main()
{

    int arr[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int transposearr[3][3];

    transpose(arr,3,3,transposearr);

    cout << "After Swap array :" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << transposearr[i][j] <<" ";
        }
        cout << endl;
    }

    return 0;
}