#include <iostream>
#include <vector>
#include <algorithm>
//#include <bits/stdc++.h>
using namespace std;

// Fungsi insertion sort untuk 1 bucket
void insertionSort(vector<float> &bucket) {
    for (int i = 1; i < bucket.size(); i++) {
        float key = bucket[i];
        int j = i - 1;
        while (j >= 0 && bucket[j] < key) {
            bucket[j + 1] = bucket[j];
            j--;
        }
        bucket[j + 1] = key;
    }
}

// Fungsi utama bucket sort
void bucketSort(float arr[], int n) {
    vector<vector<float>> bucket(n); // buat n bucket kosong

    // Masukkan elemen ke bucket masing-masing
    for (int i = 0; i < n; i++) {
        int idx = n * arr[i]; // asumsi arr[i] di [0,1)
        if (idx == n) idx = n - 1;
        bucket[idx].push_back(arr[i]);
    }

    // Urutkan tiap bucket dengan insertion sort
    for (int i = 0; i < n; i++) {
        insertionSort(bucket[i]);
    }

    // Gabungkan hasil dari semua bucket ke array utama
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (float val : bucket[i]) {
            arr[index++] = val;
        }
    }
}

int main() {
    int n;

    cin >> n;

    float arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bucketSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
