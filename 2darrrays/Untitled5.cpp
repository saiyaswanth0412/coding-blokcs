#include<iostream>
using namespace std;
int main(){
  
    int M,N;
    cin>>M>>N;
    int arr[M][N];
    int row=0;
    int col=0;
    for(row=0;row<M;row++){
        for(col=0;col<N;col++){
            cin>>arr[row][col];
        }
    }
    
        for(col=0;col<N;col++){   //change
        
            
                if(col%2 == 0){
                    for(row=0;row<M;row++){   //change
                        cout<<arr[row][col]<<","<<" ";
                    }
                }else{
                    for(row=M-1;row>=0;row--){   
                        cout<<arr[row][col]<<","<<" ";

                    }
                }          
        }
        cout<<"END";
    
    return 0;
}
