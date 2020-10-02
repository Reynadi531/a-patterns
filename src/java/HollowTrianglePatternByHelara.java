package com.company;

public class HollowTrianglePatternByHelara {
    public static void printHollowTriangle(int n) {
        // prints a hollow triangle with sides of size n
        String pattern = "";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j || i == n - 1 || j == 0) {
                    pattern += "* ";
                } else {
                    pattern += "  ";
                }
            }
            pattern += "\n";
        }
        System.out.print(pattern);
    }

    public static void main(String[] args) {
        printHollowTriangle(5);
        /* Output:
         *
         * *
         *   *
         *     *
         * * * * *
         */
    }
}
