public class hollowTriangle{
    public static void main(int n){
        int i,j;
        for(i=0;i<n;i++){
            for(j=0;j<=i;j++){
                if(j==0 || j==i || i==n-1){
                    System.out.print("* ");
                }
                else
                System.out.print("  ");
            }
            System.out.println();
        }
    }
}
//output for n=5
/*
* 
* * 
*   * 
*     * 
* * * * * 
*/