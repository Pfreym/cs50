#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string answer = get_string("What's your name? ");
    int age = get_int ("How old are you? ");
    printf("hello, %s who is %i years old\n", answer );
}
