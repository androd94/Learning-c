#include <stdio.h>
#include <conio.h>

main()
{
    int n1;
    int n2;
    int op;
    int ans;
    
    printf("Enter your numbers: ");
    
    scanf("%d", &n1);
    
    scanf("%d", &n2);
    
    printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication, or 4 for division:");
    
    scanf("%d", &op);
    
    if (op == 1){          //Checks for operator, does function
           ans = n1 + n2;
           }
           
           else if (op == 2){
           ans = n1 - n2;
           }
           
           else if (op == 3){
           ans = n1 * n2;
           }
    
           else if (op == 4){
           ans = n1 / n2;
           }
    
           else
           printf("Please enter a number 1-4");
    
    printf("The answer is %d", ans);
    
    getch();
    }
