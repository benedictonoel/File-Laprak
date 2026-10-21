#include <iostream>
#include <iomanip>

using namespace std;

    int countDigits(int n) {
        int count = 0;
        while (n > 0){
            count++;
            n /= 10;
        }
        return count;
    }
    int main(){
        int numbers = 123450;
        cout << "Jumlah Digit : " << countDigits(numbers) << endl;
        
        int number = 012345;
        cout << "Jumlah Digit : " << countDigits(number) << endl;

        return 0;
    }

    

