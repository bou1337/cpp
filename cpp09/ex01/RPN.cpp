
#include "RPN.hpp"

void result(const std::string& s)
{
    std::stack<int> stack;

    for (int i = 0; i < s.size(); ++i)
    {
        char c = s[i];

        if (c == ' ')
            continue;
        if (isdigit(c))
        {
            stack.push(c - '0');
        }
        else if (c == '+' || c == '-' || c == '*' || c == '/')
        {

            if (stack.size() < 2)
                throw "Error: not enough operands\n";

            int b = stack.top(); stack.pop();
            int a = stack.top(); stack.pop();
            long long res = 0;

            switch (c)
            {
                case '+':
                    res = (long long)a + b;
                    if (res > INT_MAX || res < INT_MIN)
                        throw "Overflow in addition\n";
                    break;
                case '-':
                    res = (long long)a - b;
                    if (res > INT_MAX || res < INT_MIN)
                        throw "Overflow in subtraction\n";
                    break;
                case '*':
                    res = (long long)a * b;
                    if (res > INT_MAX || res < INT_MIN)
                        throw "Overflow in multiplication\n";
                    break;
                case '/':
                    if (b == 0)
                        throw "Division by zero\n";
                    if (a == INT_MIN && b == -1)
                        throw "Overflow in division\n";
                    res = a / b;
                    break;
            }

            stack.push(res);
        }
        else
        {
            throw "Error: invalid character\n";
        }
    }

    if (stack.size() != 1)
        throw "Error: invlaid format\n";

    std::cout << "Result = " << stack.top() << std::endl;
}