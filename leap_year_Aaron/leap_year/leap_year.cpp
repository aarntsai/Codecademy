
#include <iostream>

int year;



int main()
{
    
    std::cout << "Enter Year in question: ";
    std::cin >> year;
    std::cout << "\n";
    
    //Check number of digits

        
    if (year > 9999 || year < 1000) {

        std::cout << "Invalid year. 4-digit year required.";

    } else if ((year % 4 ) == 0 && (year % 100 ) != 0 || (year % 400) == 0) {
 
        std::cout << year << " is a leap year.\n\n";

    }
    else {

        std::cout << year << " is not a leap year.\n\n";

    }
    


}