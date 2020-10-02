public class arrowLeft
{ 
    public static void pattern(int n) 
    { 
        int i, j;  
        for(i=1; i<n+1; i++)              
        {
        for(j=2*(n-i); j>=0; j--)        
            {           
                System.out.print(" ");     
            } 
        for(j=0; j<i; j++)          
        {       
           System.out.print("* ");     
         }
         if(i == 1) {
              System.out.print("      *");
         }
        if(i == 2) {
              System.out.print("  *");
        }
         System.out.println();        
        } 
    } 
    
    public static void main(String args[]) 
    { 
        int n = 5; 
        pattern(n); 
    } 
}

/*
*       *
* *   *
* * * 
* * * * 
* * * * * 
*/
