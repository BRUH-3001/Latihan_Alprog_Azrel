#include <bits/stdc++.h>

using namespace std;

void BucketSort(float arr[], int n){
    vector<vector<float>>ember(n);

    for(int i = 0; i < n; i++){
        int index = n * arr[i];
        if (index == n) index = n - 1;
        ember[index].push_back(arr[i]);
    }

    for(int i = 0; i < n; i++){
        sort(ember[i].begin(), ember[i].end());
    }

    int idx = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < ember[i].size(); j++){
            arr[idx++] = ember[i][j];
        }
    }
}

int main(){
    int n;
    cin >> n;

    float arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    BucketSort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}