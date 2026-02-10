#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array:";

    cin>>n;
    int arr[n];
    cout<<"enter the elements in the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int hash[13]={0};
    for(int i=0;i<n;i++){
            hash[arr[i]]+=1;

    }
    int q;
    cout<<"Enter no.of queries:";
    cin>>q;
    while(q--){
        int s;
        cin>>s;
        cout<<hash[s]<<endl;
    }
    return 0;

}
