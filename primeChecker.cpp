#include<bits/stdc++.h>
using namespace std;

// checking the prime 

void removeIfDivisible(int k,vector<int>& arr){
	for(int x=0;x<arr.size();x++){
		if(arr[x]%k == 0)
			arr.erase(arr.begin()+x);
	}
}


int main(){
	int n = 0;
	cin>>n;
	int i=0;
	bool isPrime = true;
	vector<int>arr;
	for(int t=1;t<n/2;t++){
		arr.push_back(t+1);
	}
	int arr_size = arr.size();
	
	while(i<=arr_size){
		if(n%arr[i]==0){
			isPrime = false;
			break;			
		}
		if(i == arr_size)
			break;
			
		removeIfDivisible(arr[i],arr);
		arr_size = arr.size();
		i=0;
	}
	if(isPrime)
		cout<<"\nPrime"<<"\n";
	else
		cout<<"\nNot Prime"<<"\n";
	return 0;
}
