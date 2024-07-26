#include<iostream>
using namespace std;
#include<limits.h>


int findMax(int arr[][3],int row , int col,int max){

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > max)
            {   
                max = arr[i][j];
            }
            
        }
    }

    return max;
}

int findMin(int arr[][3],int row , int col,int min){

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < min)
            {   
                min = arr[i][j];
            }
            
        }
    }

    return min;
}

int main(){

    int arr[][3] = {
        {1,-2, -9},
        {4, -8, -6},
        {-7, 5, -12}
    };

    int max = INT_MIN;;
    int min = INT_MAX;;

    cout<<"Maximum Element is: "<<findMax(arr,3,3,max)<<endl;
    cout<<"Minimum Element is: "<<findMin(arr,3,3,min)<<endl;
    
    
    return 0;
}