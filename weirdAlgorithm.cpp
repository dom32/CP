/*
Problem Name: Weird Algorithm
Problem Link: https://cses.fi/problemset/task/1068
Author: limon
*/

#include <bits/stdc++.h>
using namespace std;



int main ()
{
	long long N;
	cin>>N;
	while(N>1){
		cout<<N<<" ";
		if(N&1) N = 3*N+1; // bitwise & help to find num is odd or even 
		else N >>=1; //right shift using to devide the number
	}
	cout<<"1\n";
	return 0;
}