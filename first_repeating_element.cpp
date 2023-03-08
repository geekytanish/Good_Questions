class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
       for(int i=0; i<n; i=i+1){
           for(int j=i+1; j<n; j=j+1){
             if(arr[i]==arr[j]){return i+1;}
           }
       }
       return -1;
    }
};
