# Python program to print a hollow 
# inverted pyramid pattern 
''' 
O/P

***********                                                                                                                                   
 *       *                                                                                                                                    
  *     *                                                                                                                                     
   *   *                                                                                                                                      
    * *                                                                                                                                       
     *   '''



def printPattern(n) : 
	
	for i in range(1,n+1) : 
		
		# Print spaces 
		for j in range(1,i) : 
			print (" ", end="") 
			
		# Print hollow inverted pyramid 
		for j in range(1,(n * 2 - (2 * i - 1)) 
									+1) : 
			if (i == 1 or j == 1 or
			j == (n * 2 - (2 * i - 1))) : 
				print ("*", end="") 
			else : 
				print(" ", end="") 
				
		# next line 
		print (""), 

# Driver code 
n = 6
printPattern(n) 


