#include<iostream>
using namespace std;

int selectionsort(int arr[],int n){
	
	for (int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
				
			}
		}
	}
	
}


int main(){
	int n;
	cout<<"Enter the number of elements\n";
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"enter the elements\n";
	cin>>arr[i];
	}
	for(int j=0;j<n;j++){
		cout<<arr[j]<<" ";
	}
	cout<<endl;
	selectionsort(arr,n);
	for(int j=0;j<n;j++){
		cout<<arr[j]<<" ";
	}
	
}
