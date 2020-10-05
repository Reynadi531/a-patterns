array = input('\nNumber of rows: ');

for loop = 1:array
    for loop2 = 1:loop
        if(loop2 == 1 || loop == loop2 || loop == array)
            fprintf('*')
        else
            fprintf(' ')
        end
    end
    fprintf('\n')
end

%Sample output if row = 5
%*
%**
%* *
%*  *
%*****