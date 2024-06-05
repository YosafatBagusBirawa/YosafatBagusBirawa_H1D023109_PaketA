#include <iostream>
using namespace std;

int linier(int arr[], int n, int x){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==x)
        {
            return i;
        }
        
    }
    return -1;
}

int binary(int arr[], int n, int x){
    int i;
    int kiri =0;
    int kanan =n;
    int tengah;
    while (arr[tengah] != x )
    {
        tengah=(kiri+kanan)/2;
        if (arr[tengah]>x){
            kanan = tengah;
        }
        if (arr[tengah]<x)
        {
            kiri = tengah;
        }
        if (arr[tengah]==x){
            return tengah;
        }
        if ((kiri=kanan) != x)
        {
            return -1;
        }
        
    }  
    
}

int main(){
    int n;
    int m, x;
    cin>>n;
    cin>>m;

    int array_A[n];
    int array_B[m];

    for (int i=0;i<n;i++){
        cin>>array_A[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin>>array_B[i];
    }

    cin>>x;

    int index_A = linier(array_A, n, x);
    int index_B = binary(array_B, m, x);

    if (index_A ==-1 && index_B==-1)
    {
        cout<<"keduanya"<<index_A<<index_B;
    }

    cout<<index_A;
    cout<<index_B;

    return 0;
}