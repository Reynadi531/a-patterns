def square_pattern(n)
    for i in 1..n do
        for j in 1..n do
            print('* ')
        end
        puts('')
    end
end

if ARGV.length > 1
    puts('Too many arguments!')
else 
    number = ARGV[0]
    square_pattern(number.to_i)    
end

# ruby squarepattern.rb 5
#   * * * * * 
#   * * * * * 
#   * * * * * 
#   * * * * * 
#   * * * * * 