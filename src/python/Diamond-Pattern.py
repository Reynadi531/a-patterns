# To draw a diamond pattern
rows = int(input())
a = (2 * rows) - 2
# For upper half
for i in range(0, rows):
    for j in range(0, a):
        print(end=" ")
    a -= 1
    for j in range(0, i + 1):
        print("* ", end="")
    print("")

a = rows - 2

# For lower half
for i in range(rows, -1, -1):
    for j in range(a, 0, -1):
        print(end=" ")
    a += 1
    for j in range(0, i + 1):
        print("* ", end="")
    print("")