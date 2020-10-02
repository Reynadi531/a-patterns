#Code of Hollow Triangle
#Rishabh Pathak

rows = int(input())

for i in range(rows):                             #Outer Loop for iterating the rows
    for j in range(i + 1):                        #Inner Loop for printing "*" and " "
        if j == 0 or i == j or i == rows - 1:     #j == 0 for first column, i == j for diagonal, i == rows - 1 for last row
            print('*', end=" ")
        else:
            print(' ', end=" ")
    print()

#Example input: 5
#Output:
#* 
#* * 
#*   * 
#*     * 
#* * * * * 