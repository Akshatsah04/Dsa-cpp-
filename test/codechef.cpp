#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t>0){
	    int x , y , z;
	    cin>>x>>y>>z;
	    int maxi = min(x , z);
	    int maxi2= y/2;
	    cout<<maxi+maxi2<<"\n";
	    t--;   
	}
	return 0;

}
























