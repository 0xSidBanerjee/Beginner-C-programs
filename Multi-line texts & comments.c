#include <stdio.h>
int main()
{
    printf("This is a single line text.");       //And this is a single line comment.

            /*And this is a MultiLine Comment. 
            Comments never get printed when the program is executed so it never really matters whatever you type inside them.
            But its really a good practice to use use comments in your code so that when you or someone else reviews your code its easy to understand.
            But also don't overdo it.*/
   
    printf("\nWe switch to next line using(Also known as the escape sequence.) \n and leave an blank space using \t like this.");
    
            /*\b - (backspace) this is used for back space purpose

            \t - (horizontal line) this is used for representing the line in the horizontal form

            \v - (vertical line) this is used for representing the line in vertical form*/
   
    return 0;
}
