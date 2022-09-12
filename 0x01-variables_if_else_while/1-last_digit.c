#include <stdlib.h>

#include <time.h>

#include <stdio.h>



/**
 *
 *  * main - entry point
 *
 *   *
 *
 *    *
 *
 *     * Return: always return 0
 *
 *      *
 *
 *       */

int main(void)

{

	        int n;

		        int lastn;



			        srand(time(0));

				        n = rand() - RAND_MAX / 2;

					        lastn = n % 10;



						        if (lastn > 5)

								        {

										                printf("Last digit of %d is %d and is greater than 5\n", n, lastn);

												        } else if (lastn == 0)

														        {

																                printf("Last digit of %d is %d and is 0\n", n, lastn);

																		        } else

																				        {

																						                printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastn);

																								        }

																			        return (0);

}

[24:46, 9/10/2022] +234 902 377 2493: Task 2



#include <stdio.h>

/**
 *
 *  * main - entry point
 *
 *   *
 *
 *    * Return: alway returns 0
 *
 *     *
 *
 *      */

int main(void)

{

	        char a;



		        for (a = 'a'; a <= 'z' ; a++)

				                putchar(a);

			        putchar('\n');

				        return (0);


