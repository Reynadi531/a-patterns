public class SquarePattern {
    public static void main(String... args) {
        //testing with various test cases
        printSquare(5); // 5 x 5 square test
        printSquare(6); // 6 x 6 square test
        printSquare(1); // 1 x 1 square test
        printSquare(0); // nothing should be printed
    }

    static void printSquare(int N) {
        if (N == 0)
            return;

        for(int row = 0; row < N; row++) {
            for(int column = 0; column < N; column++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}

/*
-> javac SquarePattern.java
-> java SquarePattern
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * * 
* * * * * * 
* * * * * * 
* * * * * * 
* * * * * * 
* * * * * * 
* 

*/