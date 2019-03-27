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
	if ((a > 0) && (a <= 10)){
			write(1, "The number is positive and less or equal to 10\n", 48);
	}
	else if ((a > 10) && (a <= 100)){
		write(1, "The number is positive and more than 10 and less or equal to 100\n", 66);
	}
	else if ((a > 100) && (a <= 1000)){
		write(1, "The number is positive and more than 100 and less or equal to 1000\n", 68);
	}
	else if ((a > 0) && (a > 1000)) {
		write(1, "The number is positive and more than 1000\n", 43);
	}




	if ((a < 0) && (a >= -10)){
			write(1, "The number is negative and less or equal to 10\n", 47);
	}
	else if ((a < -10) && (a >= -100)){
		write(1, "The number is negative and more than 10 and less or equal to 100\n", 66);
	}
	else if ((a < -100) && (a >= -1000)){
		write(1, "The number is negative and more than 100 and less or equal to 1000\n", 68);
	}
	else if  (a < -1000) {
		write(1, "The number is negative and more than 1000\n", 43);
	}

}
int main() {
task_00(64);
task_00(-1244);
task_00(392);
task_00(-90);
task_00(528);
task_00(-696);
task_00(-5783);
task_00(4);
task_00(-99);
task_00(-8);
task_00(88);
task_00(9400);
task_00(-445);
task_00(-5655);
task_00(8403);
task_00(3763);
task_00(91);
task_00(8);
task_00(-5578);
task_00(3);
task_00(895);
task_00(951);
task_00(723);
task_00(-1622);
task_00(-873);
task_00(950);
task_00(-3043);
task_00(-6454);
task_00(-8928);
task_00(869);
task_00(2546);
task_00(-2991);
task_00(-9);
task_00(79);
task_00(-42);
task_00(7426);
task_00(1529);
task_00(3);
task_00(4387);
task_00(-8280);
task_00(3326);
task_00(-377);
task_00(-462);
task_00(-1);
task_00(2782);
task_00(-5);
task_00(-5553);
task_00(-966);
task_00(42);
task_00(-3);
task_00(-10);
task_00(11);
task_00(-484);
task_00(-1);
task_00(-8357);
task_00(-8446);
task_00(-72);
task_00(-58);
task_00(-997);
task_00(9);
task_00(562);
task_00(-1257);
task_00(249);
task_00(1);
task_00(-3);
task_00(4503);
task_00(66);
task_00(58);
task_00(0);
task_00(9);
task_00(66);
task_00(-990);
task_00(9482);
task_00(-58);
task_00(691);
task_00(-20);
task_00(655);
task_00(573);
task_00(-73);
task_00(7545);
task_00(-4208);
task_00(2449);
task_00(-99);
task_00(-24);
task_00(4047);
task_00(8318);
task_00(-646);
task_00(-7112);
task_00(9);
task_00(9727);
task_00(2462);
task_00(46);
task_00(7740);
task_00(1);
task_00(-5048);
task_00(912);
task_00(-1303);
task_00(2159);
task_00(-5);
task_00(-10);
task_00(6);
} 


 

