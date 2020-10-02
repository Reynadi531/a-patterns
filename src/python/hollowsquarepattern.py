def hollowSquare(length, width):
    for i in range(length):
        if i == 0 or i == length - 1:
            print("* " * width)
        else:
            #The length of the spacing could also be calculated, but this is a basic implementation
            output = ""
            for j in range(width):
                if j == 0 or j == width - 1:
                    output += "* "
                else:
                    output += "  "
            print(output)


hollowSquare(5, 5)