#include<iostream>
#include<climits>
using namespace std;


int buysellFun(int arr[], int n){
    int max = INT_MIN;
    int min = INT_MAX;
    int minIndex;
    int target;
    int arrSize = sizeof(arr)/sizeof(int);
    // min = arr[0];
    
    for(int i=0;i<n;i++){
        if (arr[i]<min){
            min = arr[i];
            minIndex = i;
        }
    }
    // max = arr[minIndex];
    for(int j = minIndex; j<n;j++){
        if (minIndex==arrSize){
            cout<<"no result";
            break;
        }
        else{
            for (int k = minIndex; k<n;k++){
                if (arr[k]>max){
                    max = arr[k];

                }
            }
        }
    }

    cout<<"Buy:"<<min<<":Sell:"<<max<<endl;
    target = max - min;
    cout<<"Target:"<<target;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

buysellFun(arr,n);

}