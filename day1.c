P1:
#include<stdio.h>
int main () {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    if (x>0){
        printf("Entered number is positive.");
    }
    else {
        printf("Entered number is negative.");
    }
    return 0;
}
P2:
#include<stdio.h>
int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    if (x%2 == 0){
        printf("%d is even", x);
    }
}
P3:
#include<stdio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a%2 == 0){
        printf("%d is even", a);
    }
    else if (a%2 != 0){
        printf("%d is odd", a);
    }
    else
    printf("Invalid number");
}
P4:
#include<stdio.h>
int main() {
    char a;
    printf("Enter the character(Either Uppercase or Lowercase): ");
    scanf("%s", &a);
    if (a>='A' && a<= 'Z'){
        printf("Given character is uppercase");
    }
}
P5:
#include <stdio.h>
#include <math.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (sqrt(num) * sqrt(num) == num) {
        printf("Given number is a perfect square.", num);
    }
    return 0;
}
P6:
#include<stdio.h>
int main(){
    int age;
    printf("Age based voting eligibity.\n");
    printf("Enter the age of the person: ");
    scanf("%d", &age);

    if (age>=18)
    printf("The person is eligible for voitng.", &age);
    else
    printf("The person is not yet eligible for voting.");
}
P7:
#include<stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1< num2 && num1 < num3){
        printf("%d is smaller than the other two numbers.", num1);
    }
    else if (num2<num1 && num2<num3){
        printf("%d is smaller than the other two numbers.", num2);
    }
    else
    printf("%d is smaller than other two numbers.", num3);
}
P8:
    #include<stdio.h>
    int main() {
        char let;
        printf("Enter the alphabet: ");
        scanf("%s", &let);
        if (let == 'a' || let == 'e' || let == 'i' || let == 'o' || let == 'u' )
        printf("The alphabet is a vowel.");
        else
            printf("It is a consonant");
    }
P9:
#include<stdio.h>
#include<ctype.h>
int main() {
    char let;
    printf("Enter the character: ");
    scanf("%s" ,&let);

    if (isdigit(let)){
        printf("The character is a digit.");
    }
    else if (isalpha(let)){
        printf("The character is an alphabet.");
    }
    else
    printf("The character is a symbol.");
}
P10:
#include<stdio.h>
#include<ctype.h>
int main() {
    char let;
    printf("Enter the character: ");
    scanf("%s" ,&let);

    if (isdigit(let)){
        printf("The character is a digit.");
    }
    else if (isalpha(let)){
        printf("The character is an alphabet.");
    }
    else
    printf("The character is a symbol.");
}
P11:
#include<stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >=10 && num <=99){
        printf("The given number is 2 digit number.");
    }
}
P12:
#include<stdio.h>
int main() {
    int num1;
    int num2;
    printf("Enter the two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1<num2){
        printf("%d is smaller than %d", num1, num2);
    }
    else
    printf("%d is smaller than %d", num2, num1);
}
P13:
#include<stdio.h>
int main() {
    int num1;
    int num2;
    printf("Enter the two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1>num2){
        printf("%d is larger than %d", num1, num2);
    }
    else
    printf("%d is larger than %d", num2, num1);
}
P14:
#include<stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1< num2 && num1 < num3){
        printf("%d is smaller than the other two numbers.", num1);
    }
    else if (num2<num1 && num2<num3){
        printf("%d is smaller than the other two numbers.", num2);
    }
    else
    printf("%d is smaller than other two numbers.", num3);
}