#include <iostream>
using namespace std;
int linearSearch(int arr[],int n,int key){
  for(int i=0;i<n;i++){
    if(arr[i]==key){
      return i;//returning the index of the element searched
    }
  }
  return -1;//if element is not found
}
int main() {
 int arr[6]={12,42,45,65,76,88};
 int n=sizeof(arr)/sizeof(arr[0]); 
  int ans=linearSearch(arr, n, 88);
  cout<<"The key is present at index "<<ans<<endl;
  int ans1=linearSearch(arr, n, 12);
  cout<<"The key is present at index "<<ans1<<endl;
  int ans2=linearSearch(arr, n, 89);
  cout<<"The key is present at index "<<ans2<<endl;
}