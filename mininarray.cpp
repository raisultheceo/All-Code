#include<iostream>
using namespace std;
int getMin (int num [],int n ){
int min = INT16_MAX;
for (int i = 0; i< n ;i++){
    if(num[i]<min){
        min = num [i];
    }
}
return min;
}

int main (){
int size ;
cin>> size ;
int num[100];
for (int i =0; i<size ; i++){
    cin>>num[i];
}
cout << "The minimum value is "<<getMin(num,size)<<endl;
return 0;
}