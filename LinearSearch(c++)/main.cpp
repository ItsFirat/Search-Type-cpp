#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key);
int main() {
   int arr[] = {2, 5, 8, 10, 13, 17, 19};
   int size = sizeof(arr) / sizeof(arr[0]);

   int key;
   cout << "Aranacak elemani giriniz: ";
   cin >> key;

   int result = linearSearch(arr, size, key);
   if(result == -1) {
      cout << "Element bulunamadi" << endl;
   }
   else {
      cout << "Element " << result << ". indisde bulundu" << endl;
   }
   return 0;
}

int linearSearch(int arr[], int size, int key) {
   for(int i = 0; i < size; i++) {
      if(arr[i] == key) {
         return i;
      }
   }
   return -1;
}
