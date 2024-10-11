#include <iostream>
using namespace std;
int binarySearch(int arr[],int size, int key){
    int start = 0;
    int end = size -1;
    int mid = (start + end)/2;
    while (start <= end){
        if(arr[mid]== key)
        {
            return mid;
        }
        // To Go to right part
        if (key>arr[mid]){
           start = mid + 1  ;
        }
        //To go to left  part
        else {
            end = mid -1 ;
        }
        mid = (start + end)/2 ;

    }
    return -1 ;

}

int main (){
    int even [6] = {2,12,4,16,6,18};
    int odd[5]= {1,3,5,7,9};
    int index = binarySearch(odd,5, 7);

    cout << " Index of 7 is "<< index<<endl;

    return 0;
}