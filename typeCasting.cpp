#include<iostream>
using namespace std;

int main(){
    //Type conversion(implicit)
    char grade ='A';
    int value = grade;
    //cout << value << endl;

    //Type casting(explicit)
    double price=100.99;

    int newPrice = (int)price;
    cout << newPrice <<endl;


    return 0;
}
