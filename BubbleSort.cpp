#include<iostream>
using namespace std;




int BubbleSort(int arr[],int n){
	int  counter=1;
	while(counter<n){
		for(int i=0;i<=n-counter;i++){
			if(arr[i]>arr[i+1]){
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
				
			}
			
		}
		counter++;
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
	BubbleSort(arr,n);
	for(int j=0;j<n;j++){
		cout<<arr[j]<<" ";
	}
	
}
