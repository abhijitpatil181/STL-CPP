#include <iostream>
using namespace std;

int main(){
    int r1,c1,r2,c2;
    cout<<"Enter rows for and col for matrix 1"<<endl;
    cin>>r1>>c1;
    if(r1<=0 || c1<=0){
        cout<<"enter correct value"<<endl;
    }
    int** matrix1=new int*[r1];
    
    for(int i=0;i<r1;i++){
        matrix1[i]=new int[c1];  //contructing col for row
    }
    cout<<"enter element for first matrix"<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>matrix1[i][j];
        }
    }
    
    cout<<"Enter rows for and col for matrix 2"<<endl;
    cin>>r2>>c2;
    if(r2<=0 || c2<=0){
        cout<<"enter correct value"<<endl;
    }
    int** matrix2=new int*[r2];
    for(int i=0;i<r2;i++){
        matrix2[i]=new int[c2];  //contructing col for row
    }
    cout<<"Enter elements for matrix 2"<<endl;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>matrix2[i][j];
        }
    }

    int** product=new int*[r1];   //product matrix will have rows of first and col of second
    for(int i=0;i<r1;i++){
        product[i]=new int[c2];
    }

    
    
    //condition for multiplication
    if(c1!=r2){
        cout<<"multiplication is not possible"<<endl;
    }
    else{
        // cout<<"1"<<endl;
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                product[i][j]=0;
                for(int k=0;k<c1;k++){
                    product[i][j]+=matrix1[i][k]*matrix2[k][j];
                }
            }
        }

    }
    if(c1==r2){
        cout<<"product matrix is"<<endl;
        for(int i=0; i<r1; i++)
        {
        for(int j=0; j<c2; j++){
            cout<<product[i][j]<<" ";
        }
        cout<<endl;
        }
    }

}