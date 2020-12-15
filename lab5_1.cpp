#include<iostream>
using namespace std;

int main(){
    int num = 1;
    int i = 0;
    int Even = 0;
    int Odd = 0;
    while(num != 0){
        cout << "Enter an integer: ";
        cin >> num;
        if(num % 2 == 0 && num != 0){
            Even++;
        }
        if(num % 2 != 0 && num != 0){
            Odd++;
        }


        i++;
            
        }
        
    cout << "#Even numbers = " << Even << "\n";
    cout << "#Odd numbers = " << Odd;
    return 0;
}
