//problem 4
//#include <iostream>
//
//using namespace std;
//
//int countElementsWithSmallerNeighbors(int arr[], int n) {
//    int count = 0;
//    for (int i = 1; i < n; i++) {
//        if(i+1!=n-1 ){
//        if (arr[i - 1] < arr[i] && arr[i + 1] < arr[i]) {
//            count++;
//        }
//        } else{
//            if(arr[i+1]>arr[i]){
//                count++;
//            }
//        }
//
//    }
//    return count;
//}
//
//int main() {
//    int n;
//    cin>>n;
//    int arr[n];
//    for(int i=0;i<n;i++){
//        int m;
//        cin>>m;
//        arr[i]=m;
//    }
//
//    int count = countElementsWithSmallerNeighbors(arr, n);
//    cout << count << endl;
//
//    return 0;
//}
