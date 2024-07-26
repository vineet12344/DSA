#include <iostream>
using namespace std;
#include <vector>

int main()
{
    // int arr[3][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6}, 
    //     {7, 8, 9}
    // };

    // cout<<arr[2][2];


    // Row based access
    // for (int i = 0; i < 3; i++)
    // {
    //     for(int j = 0;j<3;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    // for (int i = 0; i < 3; i++)
    // {
    //     // column based access  
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<arr[j][i]<<" ";
    //     }
    //     cout<<endl;
        
    // }

    int arr[4][3];

    // Row wise input
    // for (int  i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin>>arr[i][j];
    //     }
        
    // }

    // Column wise input
    for (int  i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[j][i];
        }
        
    }

        cout<<endl;

    for (int  i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[j][i]<<" ";
        }
        
        cout<<endl;
    }
    
    

    return 0;
}
