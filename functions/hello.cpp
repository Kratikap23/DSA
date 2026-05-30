#include<iostream>
using namespace std;

//Sum of 2 number
int sum(int a , int b){ //parameters
    int s = a+b;
    return s;
}

//minimum of 2 number
int min(int a, int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
    }

    //Calculate sum of numbers from 1 to N
    int sumOfNumbers(int n)
{
    int sum =0;
    for(int i=1; i<=n; i++){
        sum +=i;
    }
    return sum;
}

// Calculate N factorial
int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++)
{
    fact*=i;
}
return fact;
}


// pass by value
int add(int a, int b){
    a=13, b=34; //these changes will not affect the original variables in main()
    return a+b;
}

int changeX(int x){
    x =2*x;
    cout <<"x = " << x << endl; //x will be changed inside this function
}

//Calculate sum of digits of numbers
 int sumOfDigits(int num){
    int digitSum = 0;
    while(num>0){
        int lastDigit = num % 10;
        num = num/10;
        digitSum += lastDigit;
    }
    return digitSum;
 }

 //Calculate ncr binomial coefficient for n & r
 int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);

    return fact_n / (fact_r*fact_nmr);
 }
int main(){
    //cout << sum(10,5) << endl;
    //cout <<min(10,5) << endl; //arguments
    //cout << sumOfNumbers(5) << endl;
    //cout << factorial(5) << endl;

    //Pass by value example
    // int a=9, b=4;
    // cout << add(a,b) << endl; //Pass by value, changes made to a and b inside add() will not affect the original variables in main()
    // cout << a << " " << b << endl; //Original values of a and b remain unchanged

    // int x=5;
    // changeX(x); //Pass by value, changes made to x inside changeX() will not affect the original variable in main()
    // cout << "x = " <<x << endl; //Original value of x remains unchanged

    // int num = 1234;
    // cout << sumOfDigits(num) << endl; //Output: 10 (1+2+3+4=10)

    int n=8, r=2;
    cout << nCr(n,r) << endl; //Output: 10 (8C2 = 28)
    return 0;
}


    