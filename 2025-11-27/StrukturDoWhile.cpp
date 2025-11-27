#include <iostream>

using namespace std;

int main(){
    int n;
    const int test = 5;

    do{
        cout << "Pilih dari 1-10" << endl;
        cin >> n;

        if(n != test){
            cout << "Salah" << endl;
        } 
    } while (n != test);
    cout << "Benar";
    return 0;
}
