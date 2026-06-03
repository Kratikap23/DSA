#include<iostream>
using namespace std;

int biToDec(int biNum){
    int ans =0; int pow=1;
    while(biNum>0){
        int lastDigit = biNum %10;
       
        ans += lastDigit*pow;
         biNum = biNum/10;
        pow =pow*2;

    }
    return ans;

}

int main(){
    int num;
    cout <<"Enter a Binary Number : ";
    cin >> num;
    cout << "Decimal form of "<<num <<" is : "<< biToDec(num)<<endl;

    return 0;
}