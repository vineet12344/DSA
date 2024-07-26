#include<iostream>
using namespace std;

int main(){
    int arr[5][4] = {
        {1,2,3,4},
        {2,3,4,1},
        {5,6,1,3},
        {2,4,6,8},
        {1,9,9,6},
    };

    int sum = 0;

    for (int  i = 0; i < 4; i++)
    {
        for (int  j = 0; j < 5; j++)
        {
            // sum = sum + arr[i][j];       // row wise sum
            sum = sum + arr[j][i];       // Col wise sum
        }
        cout<<"sum of "<<i<<"th"<<"column is:"<<sum<<endl;
        sum = 0;
        
    }
    



    return 0;
}