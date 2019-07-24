// Calculate Taxes

#include<stdio.h>

#define LOWEST  0000000.00
#define HIGHEST 1000000.00

#define LIMIT1 10000.00
#define LIMIT2 20000.00
#define LIMIT3 30000.00
#define LIMIT4 50000.00

#define RATE1 02
#define RATE2 05
#define RATE3 07
#define RATE4 10
#define RATE5 15

#define DEDN_PER_DPNDNT 1000

// Function Declarations
void getData   (double* totalIncome, double* taxPaid,
				   int*  numOfDpndnts);
				
void calcTaxes (double  totalIncome,
				double  taxPaid,
				int     numOfDpndnts,
				double* taxableIncome,
				double* totalTax,
				double* taxDue);
				
void printInformation (double  totalIncome,
						double taxPaid,
						int    numOfDpndnts,
						double totalTax,
						double paidTax,
						double taxDue);
						
double bracketTax ( double income,
					double startLimit,
					double stopLimit,
					int		rate);
					
int main (void) 
{
	// Local Declarations
	int numOfDpndnts;
	double taxDue;
	double taxPaid;
	double totalIncome;
	double taxableIncome;
	double totalTax;
	
	// Statements
	getData 			(&totalIncome, 	&taxPaid, 		&numOfDpndnts);
	
	calcTaxes 			(totalIncome, 	taxPaid, 		numOfDpndnts,
						&taxableIncome, &totalTax, 		&taxDue);
	
	printInformation 	(totalIncome, 	taxableIncome, 	numOfDpndnts,
						totalTax, 		taxPaid, 		taxDue);
	
	return 0;
				} ///// main
				
/*
================ getData ===========
*/				
void getData (double* totalIncome, double* taxPaid, int* numOfDpndnts)
{
	// Statements
	
	printf("Enter your total icome for last year: ");
	scanf("%lf", totalIncome);
	
	printf("Enter total of payroll deductions: ");
	scanf("%lf", taxPaid);
	
	printf("Enter the number of dependants: ");
	scanf("%d", numOfDpndnts);	
	
	return;
} ////////// getData


/*
==================== calcTaxes =============
*/
void calcTaxes (double 	totInc, 	double 	taxPaid, 	int 	numOfDpndnts,
				double* taxableInc, double* totTax, 	double* taxDue)
{
	// Statements
	*taxableInc = totInc - (numOfDpndnts* DEDN_PER_DPNDNT);
	
	*totTax = 	bracketTax(*taxableInc, LOWEST, LIMIT1,  RATE1)
			  + bracketTax(*taxableInc, LIMIT1, LIMIT2,  RATE2)
			  +	bracketTax(*taxableInc, LIMIT2, LIMIT3,  RATE3)
			  +	bracketTax(*taxableInc, LIMIT3, LIMIT4,  RATE4)
			  +	bracketTax(*taxableInc, LIMIT4, HIGHEST, RATE5);
			  
	*taxDue = *totTax - taxPaid;
	return;
}/////////// calcTaxes

/*
==================== printInformation ===============
*/								
void printInformation ( double totalIncome, double income, int numDpndnts,
						double totalTax, 	double paidTax, double dueTax)
{
	// Statements
	printf("\nTotal income : %10.2f\n", totalIncome);
	printf("\nNumber of dependents : %7d\n", numDpndnts);
	printf("\nTaxable income : %10.2f\n", income);
	printf("\nTota tax : %10.2f\n", totalTax);
	printf("\nTax already paid : %10.2f\n", paidTax);
	
	if (dueTax >= 0.0)
		printf("Tax due : %10.2f\n", dueTax);
	else
		printf("Refund: %10.f\n", -dueTax);
	
	return;
} //////////// printInformation

/*

*/
