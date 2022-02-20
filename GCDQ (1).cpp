// Gcd Queries Problem Code: GCDQ
// ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
//     #endif
/*
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
		int forward[n+10];
		int backward[n+10];
		for(int i=1;i<=n;++i){
			cin>>a[i];
		}
		for(int i=1;i<=n;++i){
			forward[i]=__gcd(forward[i-1],a[i]);
		}
		for(int i=n;i>=1;--i){
			backward[i]=__gcd(backward[i+1],a[i]);
		}
		while(q--){
			int l,r;
			cin>>l>>r;
			// int gc=0;
			cout<< __gcd(forward[l-1], backward[r+1])<<endl;
		}
	}
}*/

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
	int t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		int a[n+10];
		int for_ward[n+10];
		int backward[n+10];
		for_ward[0] = backward[n+1] =0;
		for(int i=1;i<=n;++i){
			cin>>a[i];
		}
		for(int i=1;i<=n;++i){
			for_ward[i]=__gcd(for_ward[i-1],a[i]);
		}
		for(int i=n;i>=1;--i){
			backward[i]=__gcd(backward[i+1],a[i]);
		}
		while(q--){
			int l,r;
			cin>>l>>r;
			// int gc=0;
			cout<< __gcd(for_ward[l-1], backward[r+1])<<endl;
		}
	}
}

