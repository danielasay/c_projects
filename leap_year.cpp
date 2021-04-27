#include <iostream>
#include <unistd.h>



int countDigit(long long n) 
{ 
    int count = 0; 
    while (n != 0) { 
        n = n / 10; 
        ++count; 
    } 
    return count; 
}

int main(void) 
{ 
	int year;
	int divide4;

	std::cout << "Please enter the year: ";
	std::cin >> year; 
    countDigit(year);

    if(countDigit(year) != 4){
    	std::cout << "Please try again.\n";
    	usleep(1000000);
    	std::cout << "Please enter the year: ";
    	std::cin >> year;
    	std::cout << "'n";
    }

   	if(year % 4 == 0 || year % 400 == 0){
   		std::cout << "That's a leap year!\n";
		}
	else {
		std::cout << "Sorry, not a leap year!\n";
	}		

}




