#include <iostream>
#define max(a,b) ((a > b) ? a : b)
#define min(a,b) ((a < b) ? a : b)

using namespace std;


int main(){
    int num1, num2, num3, lowest, highest, middle, T;

    cin >> T;

    for( int t = 1; t <= T; t++){
       cin >> num1>> num2>> num3;

       lowest = min(min(num1, num2), num3);
       highest = max(max(num1, num2), num3);
       middle = (num1+ num2 + num3) - (lowest + highest);

       cout << "Case " << t << ": " << lowest << " " << middle << " " <<  highest << endl;
    }



    return 0;
}
