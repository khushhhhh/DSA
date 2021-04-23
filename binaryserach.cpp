#include<iostream>
using namespace std;

int binarysrch(int arr[],int n,int key){
	int ans,start,end,mid;
	start=0;
	end=n-1;
	
	
	while(start<=end){
		
		int mid= start+end/2;
	
		if(key==arr[mid]){
			return mid;
		}
		else if(arr[mid]>key){
			end=mid-1;
		}
		else{
			start=mid+1;
		
		}
		}
		return -1;
		
		
	
	
}
int main(){
	int n,key;
	cout<<"Enter the number of elements \n";
	cin>>n;
	int arr[n];
	
	for(int i =0;i<n;i++){
		cout<<"Enter the elemts\n";
		cin>>arr[i];
	}
	cout<<"Enter the key\n";
	cin>>key;
	int a=binarysrch(arr,n,key);
	cout<<a;
	
	
	
	
}



