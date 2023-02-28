#include <iostream>

int main()
{
    std::cout << "\n Largest of Three\n";
 
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int largest = 0;
    int total = 0;

    cout << "\n First Number: ";
    std::cin >> num1;

    cout << "\n Second Number: ";
    std::cin >> num2;

    cout << "\n Third Number: ";
    std::cin >> num3;

    total = num1 + num2 + num3;

    if (num1 > num2)
    {
        if (num1 > num3)
        { largest = num1;
        }
        else
        { largest = num3;
        }
    }
    else
    {
        if (num2 > num3)
        { largest = num2;
        }
        else 
        { largest = num3;
        }
    }
   
    std::cout << "\n\n The largest of " << num1 << " and " << num2 << " and " << num3 << " is " << largest;
    std::cout << "\n\n The total is " << total << "\n\n";
    std::cout << "\n\n The largest is " << largest << "\n\n";

}
