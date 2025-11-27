#include <iostream>

using namespace std;

int main(){
 int n;
 cin >> n;
    if(n == 1){
        cout << "Fizz" << endl; 
    } else if (n == 0){ 
        cout << "Buzz" << endl;
    } else {
        cout << "FizzBuzz" << endl;
    }
}
