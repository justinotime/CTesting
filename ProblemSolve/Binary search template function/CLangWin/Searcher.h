#ifndef SEARCHER_H
#define SEARCHER_H

#include "Comparer.h"

template <typename T>
class Searcher {
public:
   // Returns the index of the key in the sorted array, or -1 if the key is not
   // found
   static int BinarySearch(T* array, int arraySize, const T& key,
      Comparer<T>& comparer) {
      // Your code here (remove placeholder line below)
      int low = 0;
      int high = arraySize - 1;

      while (high >= low) {
         int mid = (high + low) / 2;
         if (array[mid] < key) {
            low = mid + 1;
         }
         else if (array[mid] > key) {
            high = mid - 1;
         }
         else {
            return mid;
         }
      }
      return -1;
   }
};

#endif
