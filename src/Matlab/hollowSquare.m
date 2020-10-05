array = input('\nNumber of rows: ');

for loop = 1:array
    for loop2 = 1:array
        if(loop == 1 || loop2 == 1 || loop2 == array  || loop == array)
            fprintf('*')
        else
            fprintf(' ')
        end
    end
    fprintf('\n')
end

%Sample output if row = 5
%*****
%*   *
%*   *
%*   *
%*****