#include <bits/stdc++.h>
using namespace std;

void printStarPattern(int n) {
	/* suppose n is 3 the function will print
	 "*
	 * *
	 * * *"
	*/
	for(int i = 1 ; i <= n ; i++) { // i depicts the line number of the pattern
		for(int j = 1 ; j <= i ; j++) { // j is the number of stars in every line
			cout << "*" ;
			if(j!=i) {
				cout << " ";
			} // a space if the star isn't the last one in line
		}
		cout << "\n"; // a line break after every line
	}
}

int main() {
	int n;
	cin >> n; 
	printStarPattern(n);
}
	

	
