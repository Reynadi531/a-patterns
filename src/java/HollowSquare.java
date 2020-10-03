public class HollowSquare {
    public static void printHollowSquare(int n) {
	// method prints a hollow nxn square of asteriks
	
	for (int i = 0; i < n; i++) {
	    if (i == 0 || i == n - 1){
		// print full line of * for top or bottom
		for (int j = 0; j < n; j++) {
		    System.out.print("* ");
		}
		// new line at the end of this row
		System.out.println();
	    } else {
		// center cases, only print star on edges
		for (int j = 0; j < n; j++) {
		    if (j == 0 || j == n - 1) {
			// at an edge of this line
			System.out.print("* ");
		    } else {
			System.out.print("  ");
		    }
		}
	        System.out.println();
	    }
	}
    }

    public static void main(String[] args) {
	// change dimension value to change size of hollow square
	int dimension = 5;

	printHollowSquare(dimension);
    }
}

/*

Prints the following (with dimension == 10):

* * * * *
*       *
*       *
*       *
* * * * * 

*/
