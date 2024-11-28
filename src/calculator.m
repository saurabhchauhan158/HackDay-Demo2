classdef Calculator
    methods(Static)
        function result = add(a, b)
            result = a + b;
        end
        
        function result = subtract(a, b)
            result = a - b;
        end
        
        function result = multiply(a, b)
            result = a * b;
        end
        
        function result = divide(a, b)
            if b == 0
                error('Division by zero is undefined.');
            end
            result = a / b;
        end
    end
end
