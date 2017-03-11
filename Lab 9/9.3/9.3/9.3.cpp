// This program demonstrates the use of dynamic arrays

// John Schmid

#include <iostream>
#include <iomanip>
using namespace std;


int main()

{
    
    float  *monthSales;		// a pointer used to point to an array holding monthly sales
    float  total = 0;		// total of all sales
    float  average;			// average of monthly sales
    int    numOfSales;		// number of sales to be processed
    int    count;			// loop counter
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "How many monthly sales will be processed?" << endl;
    cin >> numOfSales;
    
    monthSales = new float(numOfSales);
    
    cout << "Enter the sales below\n";
    
    for ( count = 0; count < numOfSales;  count++)
    {
        cout << "Sales for Month number " << count + 1 << ":" << endl;
        cin  >> monthSales[count];
    }
    
    for ( count = 0; count < numOfSales; count++)
    {
        total = total + monthSales[count];
    }
    
    average = (total / numOfSales);
    cout << "Average Monthly sale  is $" << average << endl;
    
    delete [] monthSales;
    
    return 0;
    
}