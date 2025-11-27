#include <iostream>

using namespace std;

int main(){
 int n;
 cin >> n;
 switch(n){
   case 1 : cout << "Buzz" << endl; break;
   case 2: cout << "Fizz" << endl; break;
   default : cout << "BuzzFizz" << endl; break;
   }
  return 0;
}
