#include<iostream>
using namespace std;




int main(){
    int i,j,arr[i][j];
    

    cout<<"Enter the no of rows:";
    cin>>i;
    cout<<"enter the no of colums:";
    cin>>j;
    for(int a=0;a<i;a++){
        for(int b=0;b<j;b++){
            cin>>arr[a][b];
        }
    }
    for(int a=0;a<i;a++){
        for(int b=0;b<j;b++){
            cout<<arr[a][b];
        }
    }
    int rs=0,cs=0,re=i-1,ce=j-1;
    while(rs<=re && cs<=ce){

        for(int col=cs;col<=ce;col++){
            cout<<arr[rs][col]<<endl;
        }
        rs++;
        for(int row=rs;row<=re;row++){
            cout<<arr[row][ce]<<endl;
        }
        ce--;
        
            for(int col=ce;ce<=cs;col--){

                cout<<arr[re][col]<<endl;
            }
            re--;

            for(int row=re;row<=rs;row--){
                cout<<arr[row][cs]<<endl;
            }
            cs++;

        


    }
    return 0;


}
