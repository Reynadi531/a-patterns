import java.util.Scanner;
public class Star
{
      public static void  main(String[] args)
      {
          
           Scanner sc=new Scanner(System.in);
  
           System.out.print("Enter the number of row ");
           int n=sc.nextInt(); 
          
           for(int i=1;i<=n;i++)
           {
                for(int j=1;j<=n-i;j++)
                 {
                       System.out.print(" ");
                 }

                 for(int j=1;j<=i*2-1;j++)
                 {
                        System.out.print("*");
                 }
                 System.out.println();
            } 
           
            for(int i=n-1;i>0;i--)
            {
                  for(int j=1;j<=n-i;j++)
                  {
                         System.out.print(" ");
                   }
                  for(int j=1;j<=i*2-1;j++)
                  {
                          System.out.print("*");
                  }
             System.out.println();
         }

      }
}


</**
Output
Enter the number of row 5

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/>
