#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int start;
    do
    {
      start = get_int("Positive Integer: ");
    }
     while (start < 9);

    int end;
    do
    {
      end = get_int("Positive Integer: ");
    }
     while (end < 9);

    // TODO: Calculate number of years until we reach threshold

        int x = start/3;
        int y = start/4;

        int count = 1;
        while (start <= end) {

        count++;

        if(start < end) {
        start = start + x - y;

        }

  }
printf("The number is %i\n", count);

}




    // TODO: Print number of years

