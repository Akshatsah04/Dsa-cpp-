#include<iostream>
using namespace std;
#include<vector>

int main() { 
	int n;
	cin>>n;
	int arr[n];
	for(int i=0 ; i<n ; i++){
		cin>>arr[i];
	}

	vector<int> newarr;
	int count=0;

	for(int i=0 ;i<n;i++ ){
		if(arr[i]==0){
			count++;
		}
		else{
			newarr.push_back(arr[i]);
		}
	}
	for(int i=0 ; i<count ; i++){
		newarr.push_back(0);
	}
	for(int i=0 ; i<n ; i++){
		cout<<newarr[i]<<" ";
	}
	
	                                                               
	return 0;
}