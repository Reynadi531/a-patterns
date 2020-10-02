import java.util.Scanner;

public class RightTriangleStarPattern {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Please enter the rows for triangle pattern :");
        int n = sc.nextInt();


        for (int i = 0; i < n; i++) {  //Iterating outer loop
            for (int j = 0; j <= i; j++) {
                System.out.print("* "); //Printing the star
            }
            System.out.println(); // Breaking the line for design pattern
            
        }
    }
}

