#include<iostream>
using namespace std;


bool findKey(int arr[][3],int row,int col,int key)
{
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==key){
                return true;
            }
        }
    }
    return false;
}

int main(){

    int arr[][3] ={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    } ;

    // int key = 99;

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         if (arr[i][j] == key){
    //             cout<<"found that Nigga !"<<endl;
    //             return true;
    //         }
    //     }
        
    // }

    if(findKey(arr,3,3,5))
        cout<<"true";
    else   
        cout<<"false";
    


    return 0;
}