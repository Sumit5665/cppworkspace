#include <iostream>

using namespace std;

void quicksort(int arr[], int l, int h){
    if(l<h){
        int pivot;
    }
}
int main(){
    int arr[10]={34, 5, 27, 29, 57, 21, 73, 7, 219, 19};
    int len= sizeof(arr)/sizeof(arr[0]);
    quicksort(arr, 0, len-1);
    for(int i=0; i<len; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}