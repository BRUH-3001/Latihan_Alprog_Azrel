#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
   int n;

   cin >> n;
   cin.ignore();
   
   vector<string> nama(n);
   for(int i = 0; i < n; i++){
    
    getline(cin, nama[i]);
   }

   for(int i = 0; i < n; i++){
    cout << nama[i] << " ";
   }
   return 0;
}