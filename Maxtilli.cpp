#include<iostream>
using namespace std;

int main(){
    int n;
	cout<<"Enter the number of elements\n";
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"enter the elements\n";
	cin>>arr[i];
	}
    int max=arr[0];

    for(int j=0;j<n;j++){
        
        cout<<"Max till "<<j<<": "<<max<<endl;
        if(arr[j]<arr[j+1]){
            max=arr[j+1];
        }
    }

}
