#include <unistd.h> 
// Write this function so that it prints a string
// with a following pattern depending on value of "a":
// {type} and {module_range}

// {type} is replaced by one of the following:
// "The number is positive" -> when a > 0
// "The number is negative" -> when a < 0
// "The number is zero" -> when a = 0

// {module_range} is replaced by one of the following:
// "" -> when a = 0
// "less or equal to 10" -> when |a| <= 10
// "more than 10 and less or equal to 100" -> when 10 < |a| <= 100
// "more than 100 and less or equal to 1000" -> when 100 < |a| <= 1000
// "more than 1000" -> when |a| > 1000

// Examples:

// a = 0		->	"The number is zero
// a = -5		->	"The number is negative and less or equal to 10"
// a = 42		->	"The number is positive and more than 10 and less or equal to 100"
// a = -1000 	->	"The number is negative and more than 100 and less or equal to 1000"
// a = 100000	->	"The number is positive and more than 1000"



void task_00( int a) {
	if (a == 0) { 
		write(1, "The number is zero\n", 20);
		}
	if ((a > 0) && (a < 10)){
		write(1, "The number is positive and less or equal to 10\n", 48);
	}
	else if ((a > 10) && (a < 100)){
		write(1, "The number is positive and more than 10 and less or equal to 100\n", 66);
	}
	else if ((a > 100) && (a < 1000)){
		write(1, "The number is positive and more than 100 and less or equal to 1000\n", 68);
	}
	else if (a > 1000) {
		write(1, "The number is positive and more than 1000\n", 43);
	}




	if ((a < 0) && (a >= -10)){
		write(1, "The number is negative and less or equal to 10\n", 47);
	}
	else if ((a < -10) && (a <= -100)){
		write(1, "The number is negative and more than 10 and less or equal to 100\n", 61);
	}
	else if ((a < -100) && (a <= -1000)){
		write(1, "The number is negative and more than 100 and less or equal to 1000\n", 68);
	}
	else if ((a < 0) && (a < -1000)) {
		write(1, "The number is negative and more than 1000\n", 43);
	}

}


 

