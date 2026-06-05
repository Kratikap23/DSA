#include<iostream>
#include <climits> 
using namespace std;
int main(){
//     int marks[5] = {90, 80, 70, 60, 50};
//    marks[0] = 99; // Modifying the first element of the array
//    cout << marks[0] << endl; // Accessing first element
//     cout << marks[1] << endl; // Accessing second element
//     cout << marks[2] << endl; // Accessing third element
//     cout << marks[3] << endl; // Accessing fourth element
//     cout << marks[4] << endl; // Accessing fifth element

 //loops : 0 to size of array -1
//  int size=5;
//  for(int i=0; i<size; i++){
//     cout << marks[i] <<endl;
//  }

//Find smallest / largest element in an array
int i;
int nums[] ={5,15,22,1,-15,24};
int size =6;
int smallest = INT_MAX; // Initialize smallest to maximum possible integer value
int largest = INT_MIN; // Initialize largest to minimum possible integer value
for(i=0; i<size; i++){
// if(nums[i]<smallest)
// {smallest = nums[i];

// }
smallest=min(nums[i], smallest);
largest=max(nums[i], largest);
}
cout<< "Smallest  = " << smallest << endl;
cout<< "Largest  = " << largest << endl;
    return 0;
}