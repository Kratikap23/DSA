#include<iostream>
using namespace std;


// Print numbers 1 to 5


// int main(){
//     int count = 1;
//     while (count <= 5){
//         cout << count << " \n";
//         count++;
//     }
//     return 0;
    
// }

// Print the numbers 1 to n

// int main (){
//     int count = 1;
//     int n ;
//     cout << " Enter the number : ";
//     cin >> n;

//     while (count <= n){
//         cout << count << " \n ";
//         count++;


//     }
//     cout << endl;
//     return 0;
   
    
// }

// for loop

// int main(){
//     int n , i;
    
//     cout << " Enter the number : ";
//     cin>>n;

//     for( i = 1 ; i<=n; i++){
//         cout << i << " ";
//     }
// }

// Sum, of number from 1 to n

// int main(){
//     int n,i;
//     int sum = 0;
//     cout << "Enter the number : ";
//     cin >> n;

//     for(i = 1; i<=n;i++){
//          sum += i;
//          break;
//     }
//     cout << "Sum = " <<sum  << endl;
//     return 0;
// }



// Sum of all Odd numbers 1 to n

//int main (){

    //int n = 4;
    //int oddSum=0;
    //int evenSum = 0;
    //int i =0;
    // while (i<=n){
    //     if(i%2 != 0){
    //         oddSum += i;
            
    //     }
    //     i++;
    // }
   
    
    //  for( int i = 1; i<=n;i++){
    //     if(i%2 != 0){
    //         oddSum += i;
    //     }
    //     }

//     for( int i =0 ; i<=n ; i++){
//         if(i%2 == 0){
//             evenSum +=i;
//         }

//     }


//      cout << evenSum<< endl;
//      return 0;
// }


// do while loop

// int main(){
//     int n = 3;
//     int i=1;
//     do{
//         cout << i <<" ";
//         i++;

//     }
//     while(i <=n);
//     cout << endl;
//     return 0;
// }

// int main(){

//     int i;
//     int n = 7;
//     bool isPrime = true;

//     for(i=2;i<=n-1;i++){
//         if(n%i ==0 ){      //non prime
//             isPrime = false;
//             break;
//         }

//     }
//     if (isPrime == true){
//         cout << "Prime number";
//     }
//     else{
//         cout << "Non prime number";
//     }
//     // isPrime -> true -> Prime
//     // isPrime -> false -> non primr
//     return 0;

// }

//nested loop

// int main(){
//     int n = 5;
//     for(int i=1;i<=n;i++){//Lines
//         // cout <<"*****"<<endl;
//         int x = 5;
//         for(int j=1; j<=x;j++)
//         {
//         cout<<"*";
//     }
//     cout << endl;
//     }
//     // int x = 10;
//     // for(int i=1; i<=x;i++){
//     //     cout<<"*";
//     // }
    
//     return 0;
// }


// int main (){
//     int n=9;
//     int i,sum=0;
//     for(i=1;i<=n;i++){
//         if(i%3==0){
//             sum +=i;
//         }
//     }
//     cout << sum <<" ";
//     return 0;
// }

int main(){
     int n=6;
     int i;
     int fact = 1;
     for(i=1;i<=n;i++){
        fact *= i;
     }
     cout <<fact <<" ";
     return 0;
}