package com.company;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter Number: ");
        int Number = input.nextInt();

        for (int i = Number; i >= 1; --i) {
            for (int j = 1; j <= i; ++j) {
                System.out.print(j + " ");
            }
            System.out.println();
        }
    }
}

/**
Output:

1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 
 */