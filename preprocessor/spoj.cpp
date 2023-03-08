#include <bits/stdc++.h>
using namespace std;

#define fastIO cin.tie(0)->sync_with_stdio(0)
#define forn(i,n) for(int i=0;i<int(n);i++)

void debug(vector<int>& pr){
    for(int i=0;i<pr.size();i++){
        cout<<pr[i]<<" ";
    }
    cout<<"\n";
}


int t=1,n,a[1001],zero;
vector<int> order;
void solve(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=1;i<n;i++){
		if(a[i]<a[i-1]){
			order.push_back(a[i-1]);
			a[i-1]=-1;
		}
	}
	
	for(int i=n-1;i>=0;i--){
		if(a[i]!=-1){
			order.push_back(a[i]);
		}
	}
	
	for(int i=0;i<order.size()-1;i++){
		if(order[i]<order[i+1]){
			cout<<"NO"<<"\n";
			return;
		}
	}
	cout<<"YES"<<"\n";

}

int main(){
    fastIO;
    if(t!=1){
    cin>>t;
    }
    while(t--){
        solve();
    }
    return 0;
}
