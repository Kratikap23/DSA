#include<iostream>
using namespace std;

int decToBi(int decNum){
    int ans =0;
    int pow=1;
    while(decNum >0){
        int lastDigit = decNum %2;
        decNum = decNum /2;
        ans += lastDigit*pow;
        pow = pow*10;
    }
    return ans;
}

int main(){
    int num;
    // cout <<"Enter a Decimal number :";
    // cin>> num;
    // cout << "Binary Form of "<< num <<" is :"<<endl;
    // cout << decToBi(num)<<endl;

    for(int i=0; i<=10; i++){
        cout <<"Decimal : "<< i << " Binary : " << decToBi(i) <<endl;
    }
    return 0;
}