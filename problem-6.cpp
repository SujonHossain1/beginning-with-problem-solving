#include <iostream>
using namespace std;

int main(){
    int  first, sum, num = 0, temp = 0, T;

    cin>> T;
    for(int i = 1; i <= T; i++){
        cin>> num;

        first = num % 10;
        for(int j = 1; j <= 5; j++){
            temp = num % 10;
            num = num / 10;
        }
        sum = first + temp;
        cout << "Sum = " << sum << endl;
    };

    return 0;
}
