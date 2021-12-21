/* This whole doc tells about the pointer concepts*/

#include<stdio.h>
#include<string.h>

#include<stdlib.h>
/*
void main()
{
	int a,*ptr;

	printf("Enter any value ");
	scanf("%d",&a);

	ptr = &a;

	printf("The value of a = %d\nThe address of a is %p\n",a,&a);
	printf("The value of a through pointer is *ptr = %d\nThe address value stored in the pointer ptr = %p",*ptr,ptr);

	if(*ptr == a)
	{
		printf("\nThe value in *ptr(%d) is same as a(%d)\n",*ptr,a);
	}
	else
	{
		printf("The value in *ptr(%d) is not same as a(%d)\n",*ptr,a);
	}

	if(ptr == a)
	{
		printf("The value in ptr (%p) is same as a (%d)",ptr,a);
	}
	else
	{
		printf("The value in ptrt (%p) is not same  as a (%d)",ptr,a);
	}
}
*/
/*
 * OUTPUT:
 * Enter any value 20
The value of a = 20
The address of a is 0x7ffc241cec5c
The value of a through pointer is *ptr = 20
The address value stored in the pointer ptr = 0x7ffc241cec5c
The value in *ptr(20) is same as a(20)
The value in ptrt (0x7ffc241cec5c) is not same  as a (20)

By this we know that the pointer can holds the address of any datatype
*/

/*
void main()
{
	char a;
	char b[10];
	float f;
	double d;
	int *ptr;
	
	// Characters 
	printf("Enter any character ");
	scanf("%c",&a);

	ptr = &a;

	printf("%c is the character in a\n%p is address of a\n ",a,&a);
	printf("%c is the character in a\n%p is address of a\n ",(char)*ptr,ptr);
        
	// strings (Array of characters)
	printf("Enter any string ");
         scanf("%s",b);

	ptr = b;

        printf("%s is the character in a\n%p is address of a\n ",b,&b);
        printf("%s is the character in a\n%p is address of a\n ",(char)*ptr,ptr);
	
	// float 
	printf("Enter any float value ");
        scanf("%f",&f);

	ptr = &f;

        printf("%f is the character in a\n%p is address of a\n ",f,&f);
        printf("%f is the character in a\n%p is address of a\n ",(float)*ptr,ptr);
	
	// Double
	printf("Enter any double value ");
        scanf("%lf",&d);

        ptr = &d;

        printf("%lf is the character in a\n%p is address of a\n ",d,&d);
        printf("%lf is the character in a\n%p is address of a\n ",(double)*ptr,ptr);

}
*/
/*Write a C program to toggle case of each character of a string*/
/* toggle means A -> a, x -> X*/
/*
#include<ctype.h>
void main()
{
	char a[10],i;

	printf("Enter the string ");
	scanf("%s",a);

	printf("String after toggling is ");
	for(i  = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 65 && a[i] <= 90)
		{
			printf("%c",tolower(a[i]));
		}
		else
		{
			printf("%c",toupper(a[i]));
		}
	}
	printf("\n");


}

*/



// dereferencing a pointer
/*
void main()
{
	int a,*p;

	printf("Enter any value ");
	scanf("%d",&a);

	p = &a;

	printf("Here i am accessing the value using the variable name: %d\n",a);
	printf("Here i am accessing the value using the dereference of a pointer: %d\n",*p);
}*/



//pointer arithmetic

/*
void main()
{
	int a,b,c,*p1,*p2,*p3;

	printf("Enter any two value ");
	scanf("%d%d",&a,&b);

	p1 = &a;
	p2 = &b;

	c = a+b;

	*p3 = *p1+*p2;

	printf("Normal addition : %d\n",c);
	printf("pointer addition : %d\n",*p3);

	if(c == *p3)
	{
		printf(" The pointer addition is correct\n ");
	}	
}
*/
/*
int fun(int,int);//Normal function
int fun1(int*,int*);
void main()
{
	int a,b,c,*p1,*p2,*p3;

	printf("Enter any two values ");
	scanf("%d%d",&a,&b);

	p1 = &a;
	p2 = &b;


	c = fun(a,b);

	printf("The result is %d\n",c);

	*p3 = fun1(&a,&b);

	printf("The result is in pointer addition %d\n",*p3);

}

int fun(int a, int b)
{
	int c,s;

	printf("Enter the option you want to perform :\n");
	printf("1 -> Additon\n2 -> Subtraction\n3 -> Multiplication\n");
	printf("4 -> Division ");
	scanf("%d",&s);

	switch(s)
	{
		case 1: 
			return c = a+b;
		case 2:
			return c = a-b;
		case 3:
			return c = a*b;
		case 4:
			return c = a/b;
		default :
			printf("you choose wrong option, so result is unexpected\n");

	}
}

int fun1(int *a, int *b)
{
        int c,s;

        printf("Enter the option you want to perform :\n");
        printf("1 -> Additon\n2 -> Subtraction\n3 -> Multiplication\n");
        printf("4 -> Division  ");
        scanf("%d",&s);

        switch(s)
        {
                case 1:
                        return c = *a + *b;
                case 2:
                        return c = *a - *b;
                case 3:
                        return c = *a * (*b);
                case 4:
                        return c = *a / *b;
                default :
                        printf("you choose wrong option, so result is unexpected\n");
	}
}
*/

/*
void main()
{
	int *p,a;

	printf("Enter any valu ");
	scanf("%d",&a);

	p = &a;

	printf("address of a is %p -> value of a  is %d\naddress %p -> value %d\n",&a,a,p,*p);
	
	printf("displaying the value after pointer is incremented \n");
	printf("address %p ",++p);
	printf("-> value %d\n",*p);
}
*/


// understanding the pointer increments and decrements
/*
void main()
{
	int a,*ptr;

	printf("Enter any value ");
	scanf("%d",&a);

	ptr = &a; 

	printf("*ptr = %d\n ",*ptr);
	
	a = 5;
	ptr = &a;
	*ptr++;

	printf("*ptr++ = %d\n",*ptr);
	
	a = 5;
	ptr = &a;
	++*ptr;

	printf("++*ptr = %d\n",*ptr);
	
	a = 5;
	ptr = &a;
	(*ptr)++;

	printf("(*ptr)++ = %d\n",*ptr);
	
	a = 5;
	ptr = &a;
	++(*ptr);

	printf("++(*ptr) = %d\n",*ptr);
	
	a = 5;
	ptr = &a;
        *++ptr;

	printf("*++ptr = %d\n",*ptr);

}

*/

/*
 * OUTPUT:
 * Enter any value 5
   *ptr = 5
   *ptr++ = 1122775168
   ++*ptr = 6
   (*ptr)++ = 6
   ++(*ptr) = 6
   *++ptr = 1122775168

 */


// understanging arrays

/*
void main()
{
	int a[5] = {1,2,3,4,5};

	int *ptr;

	ptr = a;

	for(int i = 0; i < 5; i++)
	{
		printf("%d ",*ptr++);
	}	
}
*/

// understanding pointer to pointer'

/*
void main()
{
	int **pptr,*ptr,a;

	a = 5;

	printf("The value of a = %d\n",a);

	ptr = &a;

	printf("The value of a through pointer is %d at %p\n",*ptr,ptr);

	pptr = &ptr;

	printf("The value of a through pointer to pointer is %d\n ",**pptr);

}
*/

/* OUTPUT:
 * The value of a = 5
   The value of a through pointer is 5 at 0x7ffd445e88b4
   The value of a through pointer to pointer is 0x7ffd445e88b4

   here the output tell us that the address of a pointer is holds by the another pointer (**pptr)
   */

/*
 * OUTPUT:
 *The value of a = 5
  The value of a through pointer is 5 at 0x7ffd42f49534
  The value of a through pointer to pointer is 5


  here we knew that the value of a can be accessed to **pptr*/
/*

void main()
{
	int arr[4] = {1,2,3,4};

	// these prints the addresses
	printf("%d ",arr);
	printf("%d ",arr+1);
	printf("%d ",arr+2);
	printf("%d ",arr+3 );
	
	printf("\n");
	// these prints the addresses
        printf("%d ",*arr);
        printf("%d ",*arr+1);
        printf("%d ",*arr+2);
        printf("%d ",*arr+3 );

	printf("\n");

}*/

/*
 * OUTPUT:
 * 581199824 581199828 581199832 581199836
   1 2 3 4
   */
/*
void main()
{
	int *p;
	int a[4] = {1,2,3,4};

	p = a;

	for(int i = 0; i < 4; i++)
	{
		printf("%d ",i[p]);
	}

	printf("\n");
}
*/


/*
// swaping of two numbers 

void main1(int*,int*);
void main()
{
	int a,b;
	
	printf("Enter any two values ");
	scanf("%d%d",&a,&b);

	printf("a = %d  b = %d\n",a,b);
	
	main1(&a,&b);
	
	printf("a = %d  b = %d\n",a,b);
}

void main1(int *m, int *n)
{
	*m = *m + *n;
	*n = *m - *n;
	*m = *m - *n;
}
*/


// pointer to an array
// int (*ptr)[];
/*
void main()
{
	int *p;
	int (*ptr)[5];
	int arr[5] = {5,4,3,2,1};

	p = arr;

	ptr = &arr;

	for(int  i = 0; i < 5; i++)
	{
		printf("%p -> %d ",&arr[i],arr[i]);
	}
	printf("\n");

	for(int i = 0; i < 5; i++)
	{
		printf("%p -> %d ",&((ptr)[i]),(*ptr)[i]);
	}

	printf("\n");

}
*/
/*
void main()
{
	char i;
	int a[5],*ptr;

	printf("Enter 5 elements ");

	for(i = 0; i < 5; i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Entered elements are \n");
	for(i = 0; i < 5; i++)
	{
		printf("%p -> %d\n",&a[i],a[i]);
	}
	
	printf("\n%p\n",a);

	ptr = a;
	
	for(i = 0; i < 5; i++)
	{	
		printf("%d\n",ptr[i]);
	}
}
*/

/*
void main()
{
//	int a = 5;
	int *p;
	
//	 p = &a;
	
//	printf("%p -> %d\n",&a,a);
	printf("%p\n",&p);
}
*/


/*
void main()
{
	int a = 0x25;

	int *p,**p1,***p2;

	p = &a;

	p1 = &p;

	p2 = &p1;
	
	printf("Displaying the address of the each variable\n");
	printf("***p2 -> %p\n**p1 -> %p\n*p -> %p\na -> %p\n",&p2,&p1,&p,&a);
	printf("Displaying the values in the each variable\n");
	printf("p2 -> %p\np1 -> %p\np -> %p\na -> %x\n",p2,p1,p,a);
	printf("p2 -> %p\np1 -> %p\np -> %p\na -> %x\n",***p2,**p1,*p,a);
	printf("p2 -> %p\np1 -> %p\np -> %p\na -> %x\n",**p2,*p1,p,a);
	printf("p2 -> %p\np1 -> %p\np -> %p\na -> %x\n",*p2,p1,p,a);
	printf("p2 -> %p\np1 -> %p\np -> %p\na -> %x\n",p2,p1,p,a);

	printf("\nChanging the value in a using the pointer \n");

	*p = 0x52;
	printf("Changing the value of a using p\n");
	
	 printf("p2 -> %p\np1 -> %p\np -> %p\na -> %x\n",***p2,**p1,*p,a);


        **p1 = 0x55;
        printf("Changing the value of a using p1\n");

        printf("p2 -> %p\np1 -> %p\np -> %p\na -> %x\n",***p2,**p1,*p,a);

	***p2 = 0x57;
        printf("Changing the value of a using p2\n");

        printf("p2 -> %p\np1 -> %p\np -> %p\na -> %x\n",***p2,**p1,*p,a);

}
*/


/*
void main()
{
	int a;
	&a = 10;
}
*/
/*OUTPUT
 * error: lvalue required as left operand of assignment
  576 |  &a = 10;
      |     ^
*/


/*
void main()
{
	int *p;

	printf("%d\n",*p);
}
*/
/*
 * OUTPUT:
 * Segmentation fault (core dumped
 * */

// UNderstanging the constant pointer
// Constant pointer is defined as a pointer that cannot change the address it's holding
// The compiler defines the array name as a constant pointer to the first element

void main()
{
	int *ptr,a=10;

	ptr = &a;


	printf("ptr   --> %p\n",ptr);
	printf("ptr+1 --> %p\n",ptr+1);
	printf("ptr-1 --> %p\n",ptr-1);
	printf("ptr[-1]-> %p\n",ptr[-1]);
	printf("%p\n",ptr);
	printf("%p\n",ptr);
	printf("%p\n",ptr);
	printf("%p\n",ptr);

}


