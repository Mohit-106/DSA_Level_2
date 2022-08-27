// class Solution
// {
     
//     void swap(int arr[], int i, int j){
//         int temp = arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//     }
//     public:
//     //Function to sort an array using quick sort algorithm.
//     void quickSort(int arr[], int lo, int hi)
//     {
//         if(lo>=hi){
//             return;
//         }
        
//         int pivot = arr[hi];
//         int mid = partition(arr,pivot,hi);
//         quickSort(arr,lo,mid-1);
//         quickSort(arr,mid+1,hi);
        
//     }
    
//     public:
//     int partition (int arr[], int pivot, int hi)
//     {
//      int i = 0;
//      int j = 0;
//      while(i<=hi){
//          if(arr[i]<=pivot){
//              swap(arr,i,j);
//              i++;
//              j++;
//          }else{
//              i++;
//          }
//      }
//      return j-1;
//     }
// };
