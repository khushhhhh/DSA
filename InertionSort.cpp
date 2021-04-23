#include<iostream>
using namespace std;


void InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int current =arr[i];
        int j=i-1;
        while(arr[j]>arr[i]){
            int temp=current;
            arr[j];
            arr[j]=temp;
            j--;
            i++; 
            
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
	InsertionSort(arr,n);
	for(int j=0;j<n;j++){
		cout<<arr[j]<<" ";
	}
	
}