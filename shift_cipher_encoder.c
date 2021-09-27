// Shift Cipher Encoder by N
// shift_cipher_encoder.c
//
// This program was written by Pollapat Timratana (z5331004)
// on 24/09/2021
//
// Shift Chiper Encoder, take up to 8 character, to shift left or right by N. both Uppercase and Lowercase.

  

#include <stdio.h>

struct character_set {
    char one;
    char two;
    char three;
    char four;
    char five;
    char six;
    char seven;
    char eight; 
};

int main(void) {

    int number_of_char;
    struct character_set characters;
    struct character_set to_int; 
    int scanf_number_of_char; 
    int scanf_return;
    int shift;
    int again = 1; 
    char input_agian;
    int scanf_again;

    while (again == 1){

        printf("Enter the number of character. 1 to 8: ");
        scanf_number_of_char = scanf("%d", &number_of_char);
        if (scanf_number_of_char != 1) {
                printf("You did not enter a number 1 to 8.\n");
                return 1;
            }
        printf("\n");
        printf("Enter %d character: ", number_of_char);

        if (number_of_char == 1) {

            scanf_return = scanf(" %c", &characters.one);
            characters.two = 0;
            characters.three = 0;
            characters.four = 0;
            characters.five = 0;
            characters.six = 0;
            characters.seven = 0;
            characters.eight = 0;
            
            if (scanf_return != 1) {
                printf("You did not enter 1 character.\n");
                
                return 1;
            }
        }
        
        else if (number_of_char == 2) {

            scanf_return = scanf(" %c %c", &characters.one, &characters.two);
            characters.three = 0;
            characters.four = 0;
            characters.five = 0;
            characters.six = 0;
            characters.seven = 0;
            characters.eight = 0;
    
            if (scanf_return != 2) {
                printf("You did not enter 2 characters.\n");
                return 1;
        }
    }
        else if (number_of_char == 3) {

            scanf_return = scanf(" %c %c %c", &characters.one, &characters.two, &characters.three);
            characters.four = 0;
            characters.five = 0;
            characters.six = 0;
            characters.seven = 0;
            characters.eight = 0;

            if (scanf_return != 3) {
                printf("You did not enter 3 character.\n");
                return 1;
        }
    }
        else if (number_of_char == 4) {

            scanf_return = scanf(" %c %c %c %c", &characters.one, &characters.two, &characters.three, &characters.four);
            characters.five = 0;
            characters.six = 0;
            characters.seven = 0;
            characters.eight = 0;
            if (scanf_return != 4) {
                printf("You did not enter 4 character.\n");
                return 1;
            }
        }
        else if (number_of_char == 5) {

            scanf_return = scanf(" %c %c %c %c %c", &characters.one, &characters.two, &characters.three, &characters.four, &characters.five);
            characters.six = 0;
            characters.seven = 0;
            characters.eight = 0;

            if (scanf_return != 5) {
                printf("You did not enter 5 character.\n");
                return 1;
            }
        }
        
        else if (number_of_char == 6) {

            scanf_return = scanf(" %c %c %c %c %c %c", &characters.one, &characters.two, &characters.three, &characters.four, &characters.five, &characters.six);
            characters.seven = 0;
            characters.eight = 0;
            if (scanf_return != 6) {
                printf("You did not enter 6 character.\n");
                return 1;
        }
    }
        
        else if (number_of_char == 7) {

            scanf_return = scanf(" %c %c %c %c %c %c %c", &characters.one, &characters.two, &characters.three, &characters.four, &characters.five, &characters.six, &characters.seven);
            characters.eight = 0;

            if (scanf_return != 7) {
                printf("You did not enter 7 character.\n");
                return 1;
                }
            }
        
        else if (number_of_char == 8) {

            scanf_return = scanf(" %c %c %c %c %c %c %c %c", &characters.one, &characters.two, &characters.three, &characters.four, &characters.five, &characters.six, &characters.seven, &characters.eight);
    
            if (scanf_return != 8) {
                printf("You did not enter 8 character.\n");
                return 1;
            }
        }
        
        else {
            printf("You did not Enter 1 - 8 character\n");
            return 1;
        }

        printf("\n");
        printf("Enter the shift integer(±): ");
        scanf("%d", &shift);
       
        // First Character
        if (characters.one >= 'a' && characters.one <= 'z'){
            if ((characters.one + shift) < 'a') {
                
                to_int.one = ('z'+ 1) - (('a' - (characters.one + shift)) % 26);
                
            }
            else if ((characters.one + shift) >= 'a'){
            to_int.one = 'a' + (((characters.one + shift) % 'a') % 26);
            }
        }
        else if (characters.one >= 'A' && characters.one <= 'Z'){
            if ((characters.one + shift) < 'A') {
                
                to_int.one = ('Z'+ 1) - (('A' - (characters.one + shift)) % 26);
                
            }
            else if ((characters.one + shift) >= 'A'){
            to_int.one = 'A' + (((characters.one + shift) % 'A') % 26);
            }  
        }  
        else {
            to_int.one = 0;
        }
        
        // Second Character
        if (characters.two >= 'a' && characters.two <= 'z') {
            if ((characters.two + shift) < 'a') {
                
                to_int.two= ('z'+ 1) - (('a' - (characters.two + shift)) % 26);
                
            }
            else if ((characters.two + shift) >= 'a'){
            to_int.two = 'a' + (((characters.two + shift) % 'a') % 26);
            }
            else {
                printf("Error at the second character.");
                return 1;
            }
        }
        else if (characters.two >= 'A' && characters.two <= 'Z'){
            if ((characters.two + shift) < 'A') {
                
                to_int.two = ('Z'+ 1) - (('A' - (characters.two + shift)) % 26);
                
            }
            else if ((characters.two + shift) >= 'A'){
            to_int.two = 'A' + (((characters.two + shift) % 'A') % 26);
            }  
        }  
        else {
            to_int.two = 0;
        }
        
        // Third Character
        if (characters.three >= 'a' && characters.three <= 'z') {
            if ((characters.three + shift) < 'a') {
                
                to_int.three = ('z'+ 1) - (('a' - (characters.three + shift)) % 26);
                
            }
            else if ((characters.three + shift) >= 'a'){
            to_int.three = 'a' + (((characters.three + shift) % 'a') % 26);
            }
            else {
                printf("Error at the third character.");
                return 1;
            }
        }
        else if (characters.three >= 'A' && characters.three <= 'Z'){
            if ((characters.three + shift) < 'A') {
                
                to_int.three = ('Z'+ 1) - (('A' - (characters.three + shift)) % 26);
                
            }
            else if ((characters.three + shift) >= 'A'){
            to_int.three = 'A' + (((characters.three + shift) % 'A') % 26);
            }  
        }  
        else {
            to_int.three = 0;
        }
       
        // Fourth Character
        if (characters.four >= 'a' && characters.four <= 'z') {
            if ((characters.four + shift) < 'a') {
                
                to_int.four = ('z'+ 1) - (('a' - (characters.four + shift)) % 26);
                
            }
            else if ((characters.four + shift) >= 'a'){
            to_int.four = 'a' + (((characters.four + shift) % 'a') % 26);
            }
            else {
                printf("Error at the fourth character.");
                return 1;
            }
        }
        else if (characters.four >= 'A' && characters.four <= 'Z'){
            if ((characters.four + shift) < 'A') {
                
                to_int.four = ('Z'+ 1) - (('A' - (characters.four + shift)) % 26);
                
            }
            else if ((characters.four + shift) >= 'A'){
            to_int.four = 'A' + (((characters.four + shift) % 'A') % 26);
            }  
        }  
        else {
            to_int.four = 0;
        }
       
        // Fifth Character
        if (characters.five >= 'a' && characters.five <= 'z') {
            if ((characters.five + shift) < 'a') {
                
                to_int.five = ('z'+ 1) - (('a' - (characters.five + shift)) % 26);
                
            }
            else if ((characters.five + shift) >= 'a'){
            to_int.five = 'a' + (((characters.five + shift) % 'a') % 26);
            }
            else {
                printf("Error at the fifth character.");
                return 1;
            }
        }
        else if (characters.five >= 'A' && characters.five <= 'Z'){
            if ((characters.five + shift) < 'A') {
                
                to_int.five = ('Z'+ 1) - (('A' - (characters.five + shift)) % 26);
                
            }
            else if ((characters.five + shift) >= 'A'){
            to_int.five = 'A' + (((characters.five + shift) % 'A') % 26);
            }  
        }  
        else {
            to_int.five = 0;
        }
       
        // Sixth Character

        if (characters.six >= 'a' && characters.six <= 'z') {
           if ((characters.six + shift) < 'a') {
                
                to_int.six = ('z'+ 1) - (('a' - (characters.six + shift)) % 26);
                
            }
            else if ((characters.six + shift) >= 'a'){
            to_int.six = 'a' + (((characters.six + shift) % 'a') % 26);
            }
            else {
                printf("Error at the sixth character.");
                return 1;
            }
        }
        else if (characters.six >= 'A' && characters.six <= 'Z'){
            if ((characters.six + shift) < 'A') {
                
                to_int.six = ('Z'+ 1) - (('A' - (characters.six + shift)) % 26);
                
            }
            else if ((characters.six + shift) >= 'A'){
            to_int.six = 'A' + (((characters.six + shift) % 'A') % 26);
            }  
        }  
        else {
            to_int.six = 0;
        }
        
        // Seventh Character
        if (characters.seven >= 'a' && characters.seven <= 'z') {
            if ((characters.seven + shift) < 'a') {
                
                to_int.seven = ('z'+ 1) - (('a' - (characters.seven + shift)) % 26);
                
            }
            else if ((characters.seven + shift) >= 'a'){
            to_int.seven = 'a' + (((characters.seven + shift) % 'a') % 26);
            }
            else {
                printf("Error at the seventh character.");
                return 1;
            }
        }
        else if (characters.seven >= 'A' && characters.seven <= 'Z'){
            if ((characters.seven + shift) < 'A') {
                
                to_int.seven = ('Z'+ 1) - (('A' - (characters.seven + shift)) % 26);
                
            }
            else if ((characters.seven + shift) >= 'A'){
            to_int.seven = 'A' + (((characters.seven + shift) % 'A') % 26);
            }  
        }  
        else {
            to_int.seven = 0;
        }
        
        // Eighth Character
        if (characters.eight >= 'a' && characters.eight <= 'z') {
             if ((characters.eight + shift) < 'a') {
                
                to_int.eight = ('z'+ 1) - (('a' - (characters.eight + shift)) % 26);
                
            }
            else if ((characters.one + shift) >= 'a'){
            to_int.eight = 'a' + (((characters.eight + shift) % 'a') % 26);
            }
            else {
                printf("Error at the eighth character.");
                return 1;
            }
        }
        else if (characters.eight >= 'A' && characters.eight <= 'Z'){
            if ((characters.eight + shift) < 'A') {
                
                to_int.eight = ('Z'+ 1) - (('A' - (characters.eight + shift)) % 26);
                
            }
            else if ((characters.eight + shift) >= 'A'){
            to_int.eight = 'A' + (((characters.eight + shift) % 'A') % 26);
            }  
        }  
        else {
            to_int.eight = 0;
        }  
       
        printf("\n");
        printf("%c %c %c %c %c %c %c %c\n", to_int.one, to_int.two, to_int.three, to_int.four, to_int.five, to_int.six, to_int.seven, to_int.eight);
        printf("\n");

        printf("To encode again type 'Y' or 'y'. \n");
        printf("Enter anything to exit: ");
       
        scanf_again = scanf(" %c", &input_agian);
        if (scanf_again != 1) {
            printf("You did not enter Y or y. The program will end.\n");
            printf("return %d\n", scanf_again);
        } 

        if (input_agian == 'y' || input_agian == 'Y') {
                again = 1;
                
        }
        else {
            again = 0;
        }
        
    }
    return 0;
}