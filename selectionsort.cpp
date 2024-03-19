//implementing a selection sort algorithm.

#include <bits/stdc++.h>
void selectionsort(int arr[],int n){
  for(int i=0;i<n-1;i++){
    int idx=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[idx])
          idx=j;
    }
    int temp=arr[i];
    arr[i]=arr[idx];
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
  selectionsort(arr1,n);
  for(int i=0;i<n;i++){
      std::cout<<arr1[i]<<std::endl;
  }
  return 0;
}
