# Here 'n' is the number of rows and columns

def pattern(n):
    print("* "*n,end="\n")
    for a in range(n-2):
        print("* "+"  "*(n-2)+"*")
    print("* "*n,end="\n")

pattern(5)


'''

this will return 

* * * * *
*       *
*       *
*       *
* * * * *

'''
