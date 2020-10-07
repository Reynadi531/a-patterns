array = input('\nNumber of rows: ');

for loop = 1:array
    for loop2 = 1:(array - loop)
        fprintf('  ')
    end
    
    for loop2 = 1:(2 * loop - 1)
        fprintf('* ')
    end
    fprintf('\n')
end

for loop = 1:(array -1)
    for loop2 = 1:(loop)
        fprintf('  ')
    end
    
    for loop2 = 1:(2 * (array - loop) - 1)
        fprintf('* ')
    end
    fprintf('\n')
end

%Sample output if row = 3
%    *
%  * * *
%* * * * *
%  * * *
%    *
