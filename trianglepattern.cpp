#include<iostream>
using namespace  std;

//Star Pattern
// int main(){
//     int n=4;

//     for(int i=0; i<n; i++){
//         for (int j=0; j<i+1; j++){
//             cout << "*"<< " ";
//         }
//         cout<<endl;
//     }


//     return 0;
// }


//Easy with number
int main(){
    int n=4;

    for(int i=0; i<n; i++){
        // for(int j=0; j<i+1; j++){
        //     cout << i+1<< " ";
        // }

        for(int j=1; j<=i+1; j++){
            cout << j <<" ";
        }
        cout<< endl;

    }
}