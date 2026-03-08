#include<iostream>
using namespace std;


//if else



// int main(){
//     int age;
//     cout << "enter age : \n";
//     cin >> age;

//     if(age>= 18){
//         cout<<"You can vote\n";
//     }
//     else{
//         cout<<"You can not be vote\n";
//     }
//     return 0;
// }


//Odd or Even example
//  int main(){
//     int n;
//     cout << "Enter a number : \n";
//     cin >> n;

//     if(n%2 == 0){
//         cout <<"Even\n";

//     }
//     else{
//         cout <<"Odd";
//     }
//  }


// int main() {
//     int marks;
//     cout <<"Enter Marks : ";
//     cin >> marks;

//     if(marks >= 90){
//         cout << " Grade A";

//     }
//     else if(marks >=80 && marks < 90){
//         cout <<" Grade B";

//     }
//     else {
//         cout <<" Grade C";
//     }
//     return 0;
// }


//Practice quethion

// int main (){
//     char ch;
//     cout <<"Enter character : ";
//     cin>> ch;

//     if(ch >= 'a' && ch <= 'z'){
//         cout << "Lowercase";
//     }
//     else {
//         cout << "upercase";
//     }
// }


class Solution {
public:
    void studentGrade(int marks) {
        
        if(marks>=90){
            cout <<"Grade A";
             }
            else if(marks<90 && marks>=70){
                cout <<"Grade B";
                 }
                else if(marks<70 && marks>=50){
                    cout <<"Grade C";
                     }
                    else if(marks<50 && marks >=35){
                        cout <<"Grade D";
                         }
                        else{
                            cout <<"Fail";
                        }
    }
};
int main(){
    Solution obj;
    int marks;
    cout <<"Enter the marks :";
    cin >>marks;
    obj.studentGrade(marks);
    return 0;
}