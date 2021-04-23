#include<iostream>
using namespace std;




int rcrdbrk(int arr[],int n){
    

    int record=-1;
    int count =0;

    if(n==1){
        cout<<1<<endl;
        return 0;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1] && arr[i]>record){
            count++;
            
        }

        if(arr[i]>record){
            record=arr[i];
        }

        
        
         


    }
    return count;


}



int main(){
	int n;
	cout<<"Enter the number of elements\n";
	cin>>n;
	
	int arr[n+1];
    arr[n]=-1;
	for(int i=0;i<n;i++){
		cout<<"enter the elements\n";
	    cin>>arr[i];

	}
    
    

    int days=rcrdbrk(arr,n);
     cout<<days;
    
    
	
	
	
}