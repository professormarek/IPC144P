/*
this program demonstrates passing structs to functions
and answers the question whether they are passed by address or by value...
*/
#include <stdio.h>

//this is only telling the compiler what a car IS
struct Car{
	int horsepower;
	double price_cad;
	int year;
};


//notice that the compiler is case sensitive
void displayCar(struct Car car){
	printf("The car's year is: %d\n", car.year);
	printf("The car's horsepower is: %d\n", car.horsepower);
	printf("The car's price is: %.2lf\n", car.price_cad);
}

//let's try to pass a struct and change its values
/*
this function lets the user input and modify  information about a car
in order to be able to change the values in the car, we use pointers here 
NOTE: input validation is an exercise for you
*/
void editCar(struct Car *car){
	printf("Enter a new year, horsepower, and price separated by forward slash: \n");
	scanf("%d/%d/%lf", &car->year, &car->horsepower, &car->price_cad);
}

int main(void){
	//declare a variable of our Car type - called a object (this requres memory)
	struct Car nova = {350 , 4999.99  , 1966};
	struct Car jeep = {1000, 29999.99, 2016};
	printf("Printing data for Nova:\n");
	//display the nova's data on the screen by calling displayCar and passing nova
	displayCar(nova);

	printf("Display the (wrong) jeep data: \n");
	displayCar(jeep);
	//call the editCar function to fix jeep data
	printf("Enter corrected data for jeep: \n");
	editCar(&jeep);
	
	//display the corrected jeep data that the user entered
	printf("The corrected(?) jeep data is:\n");
	displayCar(jeep);
	

	return 0;
}

