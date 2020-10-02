for i in range(1,6):
    for j in range(i):
        print("*" ,end = " ")
    if(i == 1):
        print("      *",end = "")
    if(i == 2):
        print("  *",end = "")
    print()

"""
*       *
* *   *
* * * 
* * * * 
* * * * * 

"""