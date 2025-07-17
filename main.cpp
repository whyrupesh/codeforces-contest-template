
#include <bits/stdc++.h>
using namespace std;
// run this file by pressing f5 or fn+f5 - (debugging)
// output.txt will be automatically created and output will be producted there

void helper(int n){

    for(int i=0;i<n;i++){
        cout<<"hello world"<<endl;
    }

}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;

    while (t--){
        int n;
        cin>>n;
        helper(n);
    }

    return 0;
}
