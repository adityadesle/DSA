// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
using namespace std;

int main() {
    // Write C++ code here
    cout << "Hello world!"<<endl;
    int arr[]={7,10,-4,0,18,24};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int max = INT_MIN;
    int smax =INT_MIN;
    
    for(int i=0;i<n;i++){
        if (max <arr[i]){
            max = arr[i];
        }
    }
    cout<<max<<endl;
    for(int j =0;j<n;j++){
        if (smax < arr[j] && arr[j] != max ){
            smax = arr[j];
        }
    }
    cout<<smax;
    return 0;
}