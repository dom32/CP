/*
Problem Name: Missing Number
Problem Link: https://cses.fi/problemset/task/1083
Author: limon
*/
#include <bits/stdc++.h>

using namespace std;

long long int N, x, tnum;

int main(){
    cin>>N;
    for(int i = 1; i <= N; i++)
        tnum ^= i;//assing binary value of i
    for(int i = 0; i < N-1; i++){
        cin>>x;
        tnum ^= x;//compering ith value with assinging value
    }
    cout<<tnum<<"\n";
}