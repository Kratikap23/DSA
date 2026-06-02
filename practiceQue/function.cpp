#include<iostream>
using namespace std;

//if a number is prime or not
int isPrime(int n){
    if(n<=1){
        return 0; //not prime
    }
    for(int i=2;i<n;i++)
{
    if(n%i==0){
        return 0 ;//Not prime
    }

}
return 1; //Prime
}

int primeNumbers(int n){
    cout <<"Prime numbers from 1 to "<< n <<" are: "<< endl;
    for(int i=2; i<=n; i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }
}

int fibonacci(int n){
    if(n<=1){
        return n;
    }
    int a=0, b=1;
    for(int i=2;i<=n;i++){
        int next =a+b;
        a=b;
        b=next;
    }
    return b;
}
int main(){
//  int n;
//  cout <<"Enter a number: ";
//  cin >> n;
//  if(isPrime(n)){
//     cout << n <<" is a prime number."<< endl;
//  }
//  else{
//     cout << n <<" is not a prime nuber. "<< endl;
//  }

// int n;
// cout <<"Enter a Number : "<< endl;
// cin >> n;
// primeNumbers(n);

int n;
cout <<"Enter a Number : " <<endl;
cin>>n;
cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;
}
