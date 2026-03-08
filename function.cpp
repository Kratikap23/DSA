#include<iostream>
using namespace std;

//function definition
// void printHello(){
//     cout<<" Hello\n";
// }

//Sum of 2 number
// int sum(int a , int b){
//     int s = a+b;
//     return s;
// }

//Calculate N factorial

// int factorial(int n){
//     int fact = 1;

//     for(int i=1; i<=n; i++){
//         fact *=i;
//     }
//     return fact;
// }

//Calculate sum of digits of a number

// int sumOfDigits(int num){
//     int digitSum=0;

//     while (num>0){
//        int lastDigit = num % 10;
//        num = num/10;

//        digitSum += lastDigit;

//     }

//     return digitSum;
    
    

// }

//Calculate nCr binomial coefficient for n & r
// int factorial(int n){
//     int fact = 1;

//     for(int i=1; i<=n; i++){
//          fact *=i;
//      }
//      return fact;
// }

// int nCr(int n, int r){
//     int fact_n = factorial(n);
//     int fact_r = factorial(r);
//     int fact_nmr = factorial(n-r);

//     return fact_n / (fact_r*fact_nmr);
// }
void prime(int a){
   int  i;
    bool isPrime = true;
    if(a<2){
        isPrime = false;
    }
    else{
        for(i=2 ;i<a;i++ ){
            if( a% i == 0){
                isPrime =false;
                break;
            }
        }
    }
    if( isPrime)
    {
        cout << "Prime" << endl;
    }
    else{
        cout << "Non Prime" <<endl;
    }
   
}


int main(){
    int n =8 ;
    //nCr(n,r);
     prime(n) ;

    //cout <<nCr(n,r)<<endl;
    //cout << factorial(5)<<endl;

    //Function call/ invoke
    //printHello();
    //cout << sum(10,20)<<endl;

    //cout << sumOfDigits(1234)<<endl;
    return 0;
}