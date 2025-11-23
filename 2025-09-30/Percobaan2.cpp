/*
Nama Program: Typewriter Simulation
Nama : Azrel Sakhi Reswara
NPM: 140810250098
Tanggal Buat: 30 September 2025
Deskripsi: Memunculkan output text dengan efek lambat layaknya mesin pengetik
*/

#include <iostream>
#include <thread>
#include <chrono>
#include <utility>

using namespace std;

void printperChar(string text, int delay){
    for (char c : text){
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(delay));
    }
    cout << endl;
}

int main(){
    cout <<"Прощай навеки"<< endl;
    cout<<endl;

    pair<string, int> lyrics[] = {
        {"The evening comes to the city,", 200},
        {"There's November outside the window for three days,", 150},
        {"I'm lighting the candles,", 230},
        {"There's your photo before me,", 110},
        {"The memory again and again", 100},
        {"Brings me back to those days,", 120},
        {"Again and again I'm sad for them,", 115},
        {"The memory again and again", 120},
        {"Brings me back to those days,", 100},
        {"Again and again I'm sad for them,", 300},
        {"Again and again I'm sad for them,", 300},
        {"Again and again I'm sad for them,", 300},
    };
    int n = sizeof(lyrics)/sizeof(lyrics[0]);
    for (int i = 0; i < n; i++){
        printperChar(lyrics[i].first, lyrics[i].second);
    }
}