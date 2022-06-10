#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    int N,D;
    cin>>N>>D;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    D=D%N;
    int a[N];
    
    for(int i=0;i<N;i++)
    {
        a[i]=arr[i];
    }
    for(int i=0;i<N;i++)
    {
        int index=(N-D+i)%N;
        arr[index]=a[i];
    }
    for(int i=0;i<N;i++)
    {
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
    }
}