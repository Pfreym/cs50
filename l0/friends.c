#include <stdio.h>
#include <cs50.h>

int main(void)
    {
        // Name
        string name = get_string ("What is your name?");
        // Age
        int age = get_int ("How old are you?");
        // Hometown
        string hometown = get_string ("Where do you live?");
        // Phone Number
        string number = get_string ("What is your phone number? ");
            printf("My new friends name is %s, %i, they are from %s,\n and their phone number is %s\n", name, age, hometown, number);
    }   