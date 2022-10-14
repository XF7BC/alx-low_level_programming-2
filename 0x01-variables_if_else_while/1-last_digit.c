#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - function to check last digit of a random number
 * 
 * Return: string explaining checks. Returns 0 on success.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
  int l_digit = n % 10;

  if (l_digit > 5)
  {
    printf(
      "Last digit of %d is %d and is greater than 5\n",
      n, l_digit);
  } else if (l_digit == 0)
  {
    printf("Last digit of %d is 0 and is 0\n", n);
  } else if ((l_digit < 6) & (l_digit != 0))
  {
    printf(
      "Last digit of %d is %d and is less than 6 and not 0\n",
    n, l_digit);
  }
	return (0);
}