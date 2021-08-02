#include <iostream>
using namespace std;

int main (){
    int box, T, increment;
    cin >> T;

    for(int i = 1; i <= T; i++){
        cin >> box;
        for(int j = 0; j < box; j++){
            for(int k = 0; k < box; k++){
                cout <<"*";
            }
            cout << "\n";
        }

        if(i  < T){
            cout << "\n";
        }

    }
   return 0;
}
