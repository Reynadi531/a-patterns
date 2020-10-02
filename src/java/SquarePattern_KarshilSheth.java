/*
*           @author : Karshil Sheth
*           DOC : 2nd October,2020
*           Github Issue solved : https://github.com/Reynadi531/a-patterns/issues/6
*
* */
package com.company;

public class SquarePattern_KarshilSheth {

    public static void main(String[] args) {
	// write your code here
//        System.out.println("Welcome to design patterns in java");
        print_square(5,5);
    }
    static void print_square(int lenght,int breadth){
        for (int i = 0; i <=lenght; i++) { // Iterating outer for loop
            System.out.print(" ");
            for (int j = 0; j <=breadth ; j++) { // Iterating inner loop
                System.out.print("* "); //Printing star pattern with space

            }
            System.out.println();//for new line pattern.
        }
    }
}
