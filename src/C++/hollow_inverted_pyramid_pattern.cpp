// CPP program to print a hollow 
// inverted pyramid pattern 
/*
o/p

***********
 *       *
  *     *
   *   *
    * *
     *
*/  

#include <iostream> 
using namespace std; 
void printPattern(int); 
int main() 
{ 
	int n = 6; 

	printPattern(n); 
} 
void printPattern(int n) 
{ 
	int i, j; 
	for (i = 1; i <= n; i++) { 
		// Print spaces 
		for (j = 1; j < i; j++) { 
			cout << " "; 
		} 

		// Print hollow inverted pyramid 
		for (j = 1; j <= (n * 2 - (2 * i - 1)); j++) { 

			if (i == 1 || j == 1 || j == (n * 2 - (2 * i - 1))) { 
				cout << "*"; 
			} else { 
				cout << " "; 
			} 
		} 

		// next line 
		cout << endl; 
	} 
} 
