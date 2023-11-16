/*
 * Author:
 * Date:
 * Name:
 */
//problem 1
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//bool swapAdjacent(vector<string>& books, int i) {
//    if (books[i] > books[i + 1]) {
//        swap(books[i], books[i + 1]);
//        return true;
//    }
//    return false;
//}
//
//void bubbleSort(vector<string>& books) {
//    bool swapped = true;
//    while (swapped) {
//        swapped = false;
//        for (int i = 0; i < books.size() - 1; i++) {
//            if (swapAdjacent(books, i)) {
//                swapped = true;
//            }
//        }
//    }
//}
//
//int main() {
//    vector<string> books = {"Catcher in the Rye", "Pride and Prejudice", "To Kill a Mockingbird", "The Great Gatsby", "Aobyfddfsgstg Dick"};
//
//    bubbleSort(books);
//
//    for (string book : books) {
//        cout << book << endl;
//    }
//
//
//    return 0;
//}







////problem 2
//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//int main(){
//
//
//int n;
//cin>>n;
//for(int i=0;i<n;i++) {
//
//}
//
//    vector<int> list_of_coins;
//int m;
//for(int i=0;i<n;i++){
//    cin>>m;
//
//    list_of_coins.push_back(m);
//}
//
//    int k=1;
//
//    while(k<list_of_coins.size()){
//        int m=list_of_coins[k];
//        int j=k-1;
//        while (j>=0 && m>list_of_coins[j]){
//           list_of_coins[j+1]=list_of_coins[j];
//           j=j-1;
//        }
//        list_of_coins[j+1]=m;
//        k=k+1;
//    }
//    for(int i=0;i<n;i++){
//        cout<<list_of_coins[n-i-1]<<endl;
//    }
//
//}


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
