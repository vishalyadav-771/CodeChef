#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin>>N;

    vector<long long>arr(N);

    for (int i=0; i<N; i++) {
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end());

    long long A = arr[0] * arr[1];      
    long long B= arr[N - 1] * arr[N - 2]; 

    cout<<max(A,B);

    return 0;
}