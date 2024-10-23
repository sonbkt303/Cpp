#include <iostream>
#include <string>
 
using namespace std;
 
// Global variable (Code Smell #1: Global State)
int counter = 0;
 
// Function that performs different tasks based on input
void doSomething(int option) {
   if (option == 1) {
       cout << "Option 1 selected!" << endl;
   } else if (option == 2) {
       cout << "Option 2 selected!" << endl;
   } else if (option == 3) {
       cout << "Option 3 selected!" << endl;
   } else {
       // Silent failure (Code Smell #2: Lack of Error Handling)
   }
   counter++; // Increment global variable (Code Smell #1)
}
 
int main() {
   // Repeated code (Code Smell #3: Repetition)
   cout << "Enter a number (1-3): ";
   int choice;
   cin >> choice;
  
   doSomething(choice);  // Option based behavior
 
   cout << "Counter is now: " << counter << endl;  // Shows global state
 
   // Unused variable (Code Smell #4: Dead Code)
   string unusedVariable = "I'm never used!";
 
   // Hardcoded values (Code Smell #5: Magic Numbers)
   int arr[3] = {1, 2, 3};
   for (int i = 0; i < 3; i++) {
       cout << "Array element " << i << ": " << arr[i] << endl;
   }
 
   return 0;
}