#include<bits/stdc++.h>
using namespace std;
#define endl '\n' 
#define ll long long int  

void solution() {
    char s[1001], s2[1001];
    gets(s);
    gets(s2);
 
    strlwr(s);
    strlwr(s2);
 
    int res = strcmp(s, s2);
    cout<< res << endl;
     
}


void solve() {

     string a, b; cin>> a  >> b;

    if((a.length()>= 1 && a.length() <= 100) || (b.length() >=1 && b.length() <=100)) {

        for(int i=0; i<a.length();  i++)  a[i] = tolower(a[i]); 
        for(int i=0; i<b.length(); i++) b[i] = tolower(b[i]);

        int ans= a.compare(b);
        cout<< ans << endl;
    }

}


int main() { 
    ios_base :: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    solve();
    // solution();
   


}