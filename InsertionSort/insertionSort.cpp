#include <bits/stdc++.h>
int insertionSort(int arr[], int n){
  for(int i=1;i<n;i++){
    int idx=0, temp=0;
      if(arr[i]<arr[i-1]){
          for(int j=0;j<i;j++){
            idx=j;
            std::cout<<"idx:"<<idx<<std::endl;
            if(arr[j]>arr[i]){
              temp=arr[i];
              break;
            }
          }
          for(int j=i;j>idx;j--){
            arr[j]=arr[j-1];
            std::cout<<arr[j+1]<<"arr[j+1]"<<std::endl;
          }
      }
      arr[idx]=temp;
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
  insertionSort(arr1,n);
  for(int i=0;i<n;i++){
      std::cout<<arr1[i]<<std::endl;
  }
  return 0;
}