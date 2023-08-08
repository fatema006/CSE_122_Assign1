#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
#define ll long long int  

void solve() {
     int arr[6][6];
     int data;

     for(int i=1; i<=5; i++) {
        for(int j=1; j<=5; j++) {
            cin>> arr[i][j];

            if(arr[i][j] == 1) 
                cout<< abs(i-3) + abs(j-3) << endl;
        }
     }
}


int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();


}