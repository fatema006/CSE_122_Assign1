#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
#define ll long long int  

void solve() {
    string str;  cin>> str; 

    if(str.length() <=100) {

        for(int i=0; i<str.length(); i+=2) {
            for(int j=0; j<str.length()-1; j+=2) {
                if(str[j] > str[j+2])  
                    swap(str[j], str[j+2]);
            }
        }

        cout<< str << endl;
    }

    
}


int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();


}