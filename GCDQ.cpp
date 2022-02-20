// Gcd Queries Problem Code: GCDQ
// ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif

#include <bits/stdc++.h>
using namespace std;

int main()

{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		int a[n+10];
		for(int i=1;i<=n;++i){
			cin>>a[i];
		}
		while(q--){
			int l,r;
			cin>>l>>r;
			int gc=0;
			for (int i = 1; i <= l-1; ++i)
			{
				gc= __gcd(gc,a[i]);
			}
			for (int i = r+1; i <= n; ++i)
			{
				gc= __gcd(gc,a[i]);
			}
			cout<<gc<<endl;
		}
	}
}

