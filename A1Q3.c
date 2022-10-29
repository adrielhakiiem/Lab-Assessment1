#include <stdio.h>

int main ()
{
    float salary1, salary2, salary3, salary4, salary5;
    // float per_week = salary / 4; // 4 weeks in a month
    // float per_day = per_week / 5; // 5 working days in a week
    // float per_hour = per_day / 8; // Assume working hours is set to standard (9-5)
    float total_sales;
    int code, overtime_day, overtime_hour;
    int answer;
     
    printf("\nThis is the information for the following job roles:\n\n");
    printf("\t1. Manager\t2. Daily Worker\t3. Hourly Worker\t4. Commision Worker\t5. Labour at Product Packing\n\n");
    
    // stage 1: choosing jobs through code
    printf("Which job are you looking for?\n");
    scanf("%d", &code);
    
    switch (code) {
        case 1:
            // manager
            
            printf("\nWhat is your expected salary for this job?\n"); // 4 and 5 have fixed salary
            scanf("%f", &salary1);
            
            printf("Your salary is: %.2f\n", salary1);
            break;
        case 2:
            // daily worker
            
            printf("\nWhat is your expected salary for this job?\n");
            scanf("%f", &salary2);
            
            printf("Did you have to do any overtime work? (Type 1 for YES and 2 for NO)\n");
            scanf("%d", &answer);
            
            if (answer == 1) {
                printf("How many days did you have to work overtime?\n");
                scanf("%d", &overtime_day);
                
                salary2 += (((float)2/3) * (salary2/4) / 6 * overtime_day);
                
                printf("Your salary is: %.2f\n", salary2);
            } else {
                printf("Your salary is: %.2f\n", salary2);
            }
          break;
        case 3:
          //hourly worker
            
            printf("\nWhat is your expected salary for this job?\n");
            scanf("%f", &salary3);
            
            printf("Did you have to do any overtime work? (Type 1 for YES and 2 for NO)\n");
            scanf("%d", &answer);
            
            if (answer == 1) {
                printf("How many hours did you have to work overtime?\n");
                scanf("%d", &overtime_hour);
                
                salary3 = (salary3 / 4) * 4;
                salary3 += ((((float)1/2) * (((salary3 / 4) / 5) / 8)) * overtime_hour);
                //per_hour = salary / 4 / 5 / 8
                printf("Your salary is: %.2f\n", salary3);
                
            } else {
                printf("Your salary is: %.2f\n", salary3);
            }
          break;
        case 4:
            //commision worker
            
            salary4 = 230 * 4;
            printf("What is the total sale you made in a month?\n");
            scanf("%f", &total_sales);
            
            salary4 += (0.059 * total_sales);
            printf("Your salary is: %.2f\n", salary4);
          break;
        case 5:
            // labour at product packing 
            printf("What is the total sum of total items you packed in a month?\n");
            scanf("%f", &total_sales);
            salary5 += (0.0005 * total_sales);
            
            printf("Your salary is: %.2f\n", salary5);
         break;
        default:
            printf("Please choose a code that is in the range.\n");
      }
}
