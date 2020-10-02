#created by ymchandaliya

#function to make hollow triangle
def HollowTrianglePattern(n):
    for i in range(n-1):
        for j in range(i+1):
            if(j==0 or j==i):
                print('*', end = " ") #prints '*' only to the edge of the triangle
            else:
                print(' ', end = " ")

        print() #adds new line

    for i in range(n): #printing the last line
        print('*', end = " ")


HollowTrianglePattern(10)

'''
This will return

* 
* * 
*   * 
*     * 
*       * 
*         * 
*           * 
*             * 
*               * 
* * * * * * * * * * 


'''
