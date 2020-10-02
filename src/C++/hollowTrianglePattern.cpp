#include <bits/stdc++.h>
using namespace std;

void printHollowTrianglePattern(int n) {
	/* suppose n is 5 the function will print
	 *
	 **
	 * *
	 *  *
	 *****
	*/
	for(int i = 1 ; i <= n ; i++) { // i depicts the line number of the pattern
		for(int j = 1 ; j <= i ; j++) { // j is the number of stars in every line
			if(i==n || j==1 || j==i) cout << "*" ;
			else cout<<" ";
			cout<<" "; // for adding space between stars
		}
		cout << "\n"; // a line break after every line
	}
}

int main() {
	int n;
	cin >> n;
	printHollowTrianglePattern(n);
}




