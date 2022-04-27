//
//  main.c
//  program 2
//
//  Created by Marvens Luc on 4/25/22.
//

#include <stdio.h>
char again(void);
void clear_keyboard_buffer (void);
void green_crud(int size, int day);
int main(int argc, const char * argv[]) {
   do{
       int size;
       do{
       printf("enter the intial size of the green crude");
       scanf("%d",&size);
       clear_keyboard_buffer();
       }while(size < 0);
       
       int day;
       printf("please enter the number of days");
       scanf("%d",&day);
       clear_keyboard_buffer();
       
       
        green_crud(size, day);
    
    
    
    }while(again());
    return 0;
}




char again(void)
{
    char again;
    do{
        printf("do you wish to continue y/n");
        scanf(" %c",&again);
        clear_keyboard_buffer();
    }while(again != 'y'&& again != 'Y' && again != 'n'&& again != 'N');
    
    
    return again =='y' || again == 'Y';
}



void clear_keyboard_buffer(void)
{
    
    char c;
    scanf("%c",&c);
    while (c != '\n') {
        scanf("%c",&c);
    }
}


void green_crud(int size, int day)
{
    int i;
    int current;
    int prev1 = size;
    int prev2 = 0;
    int sum = prev1 + prev2;
    
    
  for(i = 0; i <= day/5; i++){
        
          sum = prev1 + prev2; // 1
        //printf("%d\n",sum);
        current = sum; // current 1
        prev1 = prev2; // prev1 is 0
        prev2 = current; // prev12 is 1
    }
    printf("With the intial population of %d pounds of crud growing for %d days\n", size, day);
    printf("The final population would be %d pounds\n",sum);
    
}
