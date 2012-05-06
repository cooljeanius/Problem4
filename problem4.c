/*
 *  problem4.c
 *  problem4
 *
 *  Created by Eric Gallager on 2/24/12.
 *  Copyright 2012 George Washington University. All rights reserved.
 *  From pg. 160 in "C Program Design for Engineers"
 *  (pg. 160 is part of chapter 4, which is on selection structures: if and switch statements)
 *
 * Problem: Write a program that interacts with the user like this:
 *	(1) Carbon monoxide
 *	(2) Hydrocarbons
 *	(3) Nitrogen oxides
 *	(4) Nonmethane hydrocarbons
 *	Enter pollutant number>> 2
 *	Enter number of grams emitted per mile>> 0.35
 *	Enter odometer reading>> 40112
 *	Emissions exceed permitted level of 0.31 grams/mile
 * Use the table of emissions limits below to determine the appropriate message:
 * 
 *							First 50,000 Miles	Second 50,000 Miles
 * carbon monoxide			3.4 grams/mile		4.2 grams/mile
 * hydrocarbons				0.31 grams/mile		0.39 grams/mile
 * nitrogen oxides			0.4 grams/mile		0.5 grams/mile
 * nonmethane hydrocarbons	0.25 grams/mile		0.31 grams/mile
 *
 * Algorithm: 
 * 1. Get user input for each of the 3 variables
 * 2. Select row from table corresponding to pollutant number chosen:
 *	2a. If 1, then select row 1: carbon monoxide
 *	2b. If 2, then select row 3: hydrocarbons
 *	2c. If 3, then select row 3: nitrogen oxides
 *	2d. If 4, then select row 4: nonmethane hydrocarbons
 * 3. Select column based on the entered odometer reading:
 *	3a. If the entered reading is less than 50,000, then select column 1: First 50,000 Miles
 *	3b. If the entered reading is more than 50,000, then select column 2: Second 50,000 Miles
 * 4. Get the number that occurs at the intersection of that row and that column
 * 5. Compare the number from step 4 to the number the user entered for grams/mile
 *	5a. If the user's number for grams/mile is greater than the number in the table, then display "Emissions exceed permitted level of <number from the table>"
 *	5b. If the user's number for grams/mile is less than the number in the table, then display <something else>.
 * 6. Exit
 *
 */

#include <stdio.h>

int main(char pollutant, double grams_per_mile, int odometer_reading, double table_value)

{
	// insert code here...
    printf("(1) Carbon monoxide \n(2) Hydrocarbons \n(3) Nitrogen oxides \n(4) Nonmethane hydrocarbons \n"); //display choices
	printf("Enter pollutant number>> "); //prompt for first input
	scanf("%c", &pollutant); //get first input
	/* printf("%c \n", pollutant); */ //just checking to make sure the number got entered properly
	printf("Enter number of grams emitted per mile>> "); //prompt for second input
	scanf("%lf", &grams_per_mile); //get second input
	/* printf("%6.2f \n", grams_per_mile); */ //just checking to make sure the number got entered properly
	printf("Enter odometer reading>> "); //prompt for third input
	scanf("%i", &odometer_reading); //get third input
	/* printf("%i \n", odometer_reading); */ //just checking to make sure the number got entered properly
	if (pollutant == '1' && odometer_reading <= 50000) { //if row 1 and column 1
		table_value = 3.4;
		/* printf("\n table value is: %6.2f \n", table_value); */ //checking to make sure working properly
		if (grams_per_mile > table_value) {
			printf("Emissions exceed permitted level of %6.2f \n", table_value);
		} else
			printf("Looks like you're good \n");
	} else if (pollutant == '2' && odometer_reading <= 50000) { //if row 2 and column 1
		table_value = 0.31;
		/* printf("\n table value is: %6.2f \n", table_value); */ //checking to make sure working properly
		if (grams_per_mile > table_value) {
			printf("Emissions exceed permitted level of %6.2f \n", table_value);
		} else
			printf("Looks like you're good \n");
	} else if (pollutant == '3' && odometer_reading <= 50000) { //if row 3 and column 1
		table_value	= 0.4;
		/* printf("\n table value is: %6.2f \n", table_value); */ //checking to make sure working properly
		if (grams_per_mile > table_value) {
			printf("Emissions exceed permitted level of %6.2f \n", table_value);
		} else
			printf("Looks like you're good \n");
	} else if (pollutant == '4' && odometer_reading <= 50000) { //if row 4 and column 1	
		table_value = 0.25;
		/* printf("\n table value is: %6.2f \n", table_value); */ //checking to make sure working properly
		if (grams_per_mile > table_value) {
			printf("Emissions exceed permitted level of %6.2f \n", table_value);
		} else
			printf("Looks like you're good \n");
	} else if (pollutant == '1' && odometer_reading >= 50000) { //if row 1 and column 2
		table_value = 4.2;
		/* printf("\n table value is: %6.2f \n", table_value); */ //checking to make sure working properly
		if (grams_per_mile > table_value) {
			printf("Emissions exceed permitted level of %6.2f \n", table_value);
		} else
			printf("Looks like you're good \n");
	} else if (pollutant == '2' && odometer_reading >= 50000) { //if row 2 and column 2
		table_value = 0.39;
		/* printf("\n table value is: %6.2f \n", table_value); */ //checking to make sure working properly
		if (grams_per_mile > table_value) {
			printf("Emissions exceed permitted level of %6.2f \n", table_value);
		} else
			printf("Looks like you're good \n");
	} else if (pollutant == '3' && odometer_reading >= 50000) { //if row 3 and column 2
		table_value = 0.5;
		/* printf("\n table value is: %6.2f \n", table_value); */ //checking to make sure working properly
		if (grams_per_mile > table_value) {
			printf("Emissions exceed permitted level of %6.2f \n", table_value);
		} else
			printf("Looks like you're good \n");
	} else if (pollutant == '4' && odometer_reading >= 50000) { //if row 4 and column 2	
		table_value = 0.31;
		/* printf("\n table value is: %6.2f \n", table_value); */ //checking to make sure working properly
		if (grams_per_mile > table_value) {
			printf("Emissions exceed permitted level of %6.2f \n", table_value);
		} else
			printf("Looks like you're good \n");
	} else
		printf("\n This is not supposed to happen \n");
    return 0;
}

// newline
