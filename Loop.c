//Loop

int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int sum = 0;
int i;

for (i = 0; i < 10; i++)
{
    sum += array[i];
}

/* sum now contains a[0] + a[1] + ... + a[9] */
printf("Sum of the array is %d\n", sum);

//While Loop


int n = 0;
while (n < 10)
{
    n++;
}
/*************/
//Break
int n = 0;
while (1) // While true
{
    n++;
    if (n == 10)
    {
        break; // stop loop
    }
}


/***************/
//Continue

int n = 0;
while (n < 10)
{
    n++;

    /* check that n is odd */
    if (n % 2 == 1)
    {
        /* go back to the start of the while block */
        continue; // Skip
    }

    /* we reach this code only if n is even */
    printf("The number %d is even.\n", n);
}