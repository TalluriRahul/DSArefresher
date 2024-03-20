#include<bits/stdc++.h>

void bubbleSort(int arr1[],int n){
  for(int i=n-1;i>0;i--){
    for(int j=0;j<i;j++){
      if(arr1[j]>arr1[j+1]){
        int temp=arr1[j];
        arr1[j]=arr1[j+1];
        arr1[j+1]=temp;
      }
    }
  }
}

int main(){
  int n;
  std::cout<<"Enter the size of the array"<<std::endl;
  std::cin>>n;
  int arr1[n];
  std::cout<<"Enter the numbers of the array";
  for(int i=0;i<n;i++){
    std::cin>>arr1[i];
  }
  bubbleSort(arr1,n);
  for(int i=0;i<n;i++){
      std::cout<<arr1[i]<<std::endl;
  }
  return 0;
}