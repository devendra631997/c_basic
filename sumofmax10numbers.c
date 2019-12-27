    // Program to calculate the sum of a maximum of 10 numbers
    // If a negative number is entered, the loop terminates
    # include <stdio.h>
    int main()
    {
        int i;
        double number, sum = 0.0;
        for(i=1; i <= 10; ++i)
        {
            printf("Enter a n%d: ",i);
            scanf("%lf",&number);
            // If the user enters a negative number, the loop ends
            if(number < 0.0)
            {
                continue;
            }
            sum += number; // sum = sum + number;
	    printf("%f",sum);
        }
        printf("Sum = %.2lf",sum);
        
        return 0;
    }
