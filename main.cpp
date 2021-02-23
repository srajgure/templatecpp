/*
Stock Span Problem - https://www.geeksforgeeks.org/the-stock-span-problem/

Data structure used- Stack
*/

#include <stdio.h>     
#include <stdlib.h>    
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <queue>
#include <deque>
#include <iomanip>
#include <cmath>
#include <set>
#include <stack>
#include <map>
#include <unordered_map>
 
#define FOR(i,n) for(long long i=0;i<n;i++)
#define FORE(i,a,b) for(long long i=a;i<=b;i++)
#define ll long long 
#define ld long double
#define vi vector<int>
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define iii pair<int,ii>
#define iiii pair<iii,int>
#define pll pair<ll,ll>
#define plll pair<ll,pll>
#define vv vector
#define endl '\n'
 
using namespace std;

 
void solve(){
	ll N,i;
	cin>>N;
	vector<ll> arr(N);
	FOR(i,N)cin>>arr[i];
	stack<ll> st;
	st.push(0);
	cout<<1<<" ";
	FORE(i,1,N-1)
	{
		
		while(!st.empty() and arr[st.top()]<=arr[i])
			st.pop();

		if(st.empty())
			cout<<i+1<<" ";
		else
			cout<<i-st.top()<<" ";

		st.push(i);
	}
	cout<<endl;
}
 
int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	ll t;
	cin >> t;
	while(t--)solve();
	return 0;
} 