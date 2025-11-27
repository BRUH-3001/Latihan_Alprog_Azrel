#include <iostream>

using namespace std;

int Fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;

    return Fibonacci(n-1) + Fibonacci(n-2);
}

int main(){
    int n;
    cin >> n;

    int index = 0;

    for(int i = 0; i < n; i++){

        for(int s = 0; s < n-i; s++){
            cout << "  ";
        }
        for(int j = 0; j <= i; j++){
            cout << Fibonacci(index++) << "  ";
        }
        cout << endl;
    }
    return 0;
}