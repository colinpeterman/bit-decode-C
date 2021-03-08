/* Colin Peterman */
/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY WITH RESPECT TO THIS ASSIGNMENT. */
#include<stdio.h>      /* this tells the preprocessor to copy the IO library prototypes and other in                       -formation from the file/usr/incluce/stdio.h     */

/* This takes a 4-bit key and creates a 8-bit key and then takes encoded text and decodes it using the 8-bit key. */

int main(void)
{       
        /* Initializing two variables */
        int key; 
	int binary_key = 0;
#ifdef PROMPT
	printf("Enter 4-bit Key: ");
#endif
	/* Taking this input and creating a 8-bit binary key */
	key = getchar();
	/* getting first number for the binary key */
	binary_key = binary_key | (key-48);
	key = getchar();
	/* getting the second number for the binary key */
	binary_key = (binary_key << 1) | (key-48);
	key = getchar();	
	/* getting the third number for the binary key */
        binary_key = (binary_key << 1)| (key-48);
	key = getchar();
	/* getting the fourth number for the binary key */
        binary_key = (binary_key << 1)| (key-48);
	/* taking the 4-bit key and turning it into a 8-bit key */
	binary_key = (binary_key << 4) | binary_key;
#ifdef PROMPT
	printf("\nEnter encoded messae: ");
#endif
	/* Do While loop to read in the encoded text and then put out the decoded text */
	do {
		scanf("%x", &key);
		putchar(binary_key^key);
	} while(getchar() != '\n');	
	return(0);
}

