#include<iostream>
#include <climits> 
using namespace std;

int sumAndProduct(int arr[], int sz){
   int sum=0; int pro=1;
    for(int i=0; i<sz; i++){
        sum +=arr[i];
        pro *=arr[i];
    }
    
    cout<<"Sum = " << sum <<endl;
    cout<<"Product = "<< pro <<endl;
    return 0;
}
int swapMaxMin(int arr[],int sz){
    int minIndex = 0;
    int maxIndex = 0;
    for(int i=0; i<sz; i++){
        if(arr[i]<arr[minIndex])
            minIndex =i;
        
        if(arr[i]>arr[maxIndex])
            maxIndex =i;
         }
        swap(arr[minIndex],arr[maxIndex]);
        cout<< "Array after swapping :"<<endl;
        for(int i=0; i<sz ; i++){
            cout << arr[i] <<endl;
        }

    
   
}


int uniqueVal(int arr[],int sz){
    for(int i=0; i<sz ; i++){
    int count =0;
        for(int j=0; j<sz; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            cout<< arr[i] <<" ";
        }
    }
   return 0;
}


int intersectionArr(int arr1[],int arr2[], int n, int m){
    for(int i=0; i<n ; i++){
        for (int j=0; j<m; j++){
            if(arr1[i]==arr2[j]){
                cout << arr1[i] << " ";

            }
        }
    }
    return 0;
}
int main (){
    int arr1[] ={1,2,3};
    int arr2[] ={1,2,3,4};
    int n=3, m=4;
    intersectionArr(arr1,arr2,n,m) ;
    
    // sumAndProduct(arr,sz);
    // swapMaxMin(arr,sz);
    // uniqueVal(arr,sz);

    return 0;
    
}