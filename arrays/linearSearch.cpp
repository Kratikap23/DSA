#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for (int i=0;i<size ; i++){
        if(arr[i]== target){
            cout << "Element found at index : " << i << endl;
            return i;
        }
    }
    // cout << "Element  not found in the array\n"<< endl;
    return -1;
}
int main(){
    int arr[] ={4 , 2, 7, 8, 1, 2 ,5};
    int size =7;
    int target = 70;
     linearSearch(arr, size, target);
        return 0;
}