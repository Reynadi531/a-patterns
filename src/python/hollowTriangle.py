
def pattern(n):
    k, space, rows = 0, 1, n

    for i in range(rows, 0, -1):
        for j in range(1, i + 1):
            print('*', end='')

        if i != rows:
            for k in range(1, space + 1):
                print(' ', end='')

            space += 2
        for j in range(i, 0, -1):
            if j != rows:
                print('*', end='')
        print()
    print("*"*((n*2)-1))


n = 6

pattern(n)

# output

#   ***********
#   ***** *****
#   ****   ****
#   ***     ***
#   **       **
#   *         *
#   ***********
