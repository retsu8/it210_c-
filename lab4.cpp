/****************
*
* William Paddock
* CS 210 - LAB 4
*
****************/

#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &vec, int low, int high) {

    // Selecting last element as the pivot
    int pivot = vec[high];

    // Index of elemment just before the last element
    // It is used for swapping
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {

        // If current element is larger than or
        // equal to pivot
        if (vec[j] >= pivot) {
            i++;
            swap(vec[i], vec[j]);
        }
    }

    // Put pivot to its position
    swap(vec[i + 1], vec[high]);

    // Return the point of partition
    return (i + 1);
}

void quickSort(vector<int> &vec, int low, int high) {

    // This part will be executed till the starting
    // index low is lesser than the ending index high
    if (low < high) {

        // pi is Partitioning Index, arr[p] is now at
        // right place
        int pi = partition(vec, low, high);

        // Separately sort elements before and after the
        // Partition Index pi
        quickSort(vec, low, pi - 1);
        quickSort(vec, pi + 1, high);
    }
}

void SortVector(vector<int>& myVec){
   quickSort(myVec, 0,  myVec.size() - 1);
}

int main() {
   // Input handle here
   int input;
   int i;
   
   // Grab first input of string length
   cin >> input;

   // Vector int setup variable
   vector<int> myVec(input);

   // Setting up while loop to get input
   for (i = 0; i < input; i++){
     cin >> myVec[i];
   }
   
   // Sortvector here
   SortVector(myVec);
   
   // Print the vector here after sorting
   for (i = 0; i < myVec.size(); i++){
      cout << myVec.at(i) << ",";
   }

   cout << endl;
   
   return 0;
}
