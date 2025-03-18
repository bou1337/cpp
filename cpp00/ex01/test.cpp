#include <iostream>
#include <string>

int valid_index(std::string s)
{
    int i = 0;
    while (i < s.length())
    {
        if (s[i] > '9' || s[i] < '0')  // Check if the character is not a digit
            return -1;  // Return -1 if non-digit found
        i++;
    }

    // Use std::stoi instead of atoi (better exception handling)
    return std::stoi(s);
}

int main() {
    std::string input = "12345";
    int result = valid_index(input);

    if (result == -1)
        std::cout << "Invalid input!" << std::endl;
    else
        std::cout << "Valid number: " << result << std::endl;

    return 0;
}




