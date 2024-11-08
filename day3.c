#include <stdio.h>
#include <ctype.h>

int main()
{
    char foodType = '\0';
    int choice = 0;
    
    puts("Welcome to Madurai Cafe");

    do
    {
        puts("V:Veg N:Nonveg, Your choice please: ");
        foodType = getc(stdin);
        getchar();
        foodType = tolower(foodType);

        switch (foodType)
        {
        case 'v':
            puts("1:Banne-Dosa 2:Upma 3:Rava-idli\nYour choice? ");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                puts("Your tasty dosa, Sir!");
                break;
            case 2:
                puts("Your yummy upma, Ma'am!");
                break;
            case 3:
                puts("Your delicious idli, Sir!");
                break;
            default:
                puts("We don't serve grass, Sir!");
            }
            break;

        case 'n':
            puts("1:Mutton-pulav 2:Chicken-chilly 3:Fish-fry. Your choice please: ");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                puts("Your tasty Mutton Pulav, Sir!");
                break;
            case 2:
                puts("Guntur delicious Chicken, Ma'am!");
                break;
            case 3:
                puts("Your spicy fish fry, Ma'am!");
                break;
            default:
                puts("We don't serve lizards, Ma'am!");
            }
            break;

        default:
            puts("Invalid option. Please choose V for Veg or N for Nonveg.");
        }

        puts("Do you wish to have more? 1:Yes 2:No");
        scanf("%d", &choice);
    } while (choice == 1);

    puts("Thank you! Visit again.");
    return 0;
}





#include<stdio.h>
#include<ctype.h>
int main(){
    char inputCharacter='\0', tempChar='\0';
    printf("Enter a single character (either to change it to UpperCase if it is lower or vice versa.\n");
    scanf("%c", &inputCharacter);
    if (inputCharacter >= 65 && inputCharacter <= 90)
        inputCharacter = tolower(inputCharacter);
    else
        inputCharacter = toupper(inputCharacter);
    printf("The changed character is %c", inputCharacter);
    return 0;
}


#include<stdio.h>
void main(){
    float inputNumber = 0.0;
    int tempNumber = 0;
    puts("Enter a floating point number to typecast it to integer");
    scanf("%f", &inputNumber);
    if (inputNumber >= -1000.0 && inputNumber <= 1000.0){
        tempNumber = inputNumber;
        printf("The floating point number is %0.2f and the number after type casting it is %d", inputNumber, tempNumber);
    }
    else
        puts("Enter a value between -1000.0 and 1000.0");
}


#include<stdio.h>
void main() {
    int inputNumber;
    puts("Enter the number to check if it falls between 10 and 20 and it is an Even number");
    scanf("%d", &inputNumber);
    if (inputNumber >= 10 && inputNumber <= 20 && inputNumber % 2 == 0)
        printf("The given number %d is valid", inputNumber);
    else
        printf("The given number %d is Invalid", inputNumber);
}


#include<stdio.h>
void main(){
    char hexValue[10];
    int decimalValue = 0;
    puts("Enter a hexadecimal value");
    scanf("%s", hexValue);
    sscanf(hexValue, "%x", &decimalValue);
    printf("Decimal number is %5d\n", decimalValue);
    printf("Octal number is %5o\n", decimalValue);
    printf("Uppercase Hexadecimal is %5X\n", decimalValue);
}