#include <iostream>
using namespace std;
int linearSearch(int arr[],int n,int key){
  for(int i=0;i<n;i++){
    if(arr[i]==key){
      return i;
    }
  }
  return -1;
}
int main() {
 int arr[6]={12,42,45,65,76,88};
 int n=sizeof(arr)/sizeof(arr[0]); 
  int ans=linearSearch(arr, n, 89);
  cout<<"the key is present at index "<<ans<<endl;
}