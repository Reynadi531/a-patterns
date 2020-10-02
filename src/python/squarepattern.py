
def square_pattern(n):
  for i in range(n):
    for j in range(n):
      print("*",end=" ")
    print()

square_pattern(5)

'''
python3 squarepattern.py          

* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * *
'''