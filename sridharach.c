/* C Programe for calculate equation by Sridhar Acharya Formula */

//header files
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>


//main
main()
{
	
	//variables
	float a,b,c,d,e,f,g,h,x,y,z;
	
	
		
	//input reciver
	calculate :
		{
		
	system("cls");
	printf("\n\nEnter the coefficient of x square (a) = ");
	scanf("%f",&a);
	
	
		if(a<=0.0)
		{
		printf("\n\n\n\n\n\n\n\n\n\nWarnning...\n\nThe equation can't solve by this formula, \n\nEither the maintion value of 'a' signifies that this is not a 2nd degree equation because there is no co efficient of x square. \n\n\nOr,The coefficient of x square is in negetive form, \nPlease take common minus sign and do the coefficient positive and try AGAIN...");
}



	else {
		c2 :
	
	printf("\n\nEnter the coefficient of x(b) = ");
	scanf("%f",&b);
	printf("\n\nEnter the constant term (after making 0 right hand side) (c) = ");
	scanf("%f",&c);
	
	printf("\n\nAs per your values the equation is : %5.0fx*x  - (%5.0f)x  +  %5.0f  =  0",a,b,c);
	
	
		{
		
		
		//calculating (b square - 4ac) to the power 1/2 
		{
		h=(b*b-4.0*a*c);
		d=sqrt(h);
	}
		//calculating b+-{(b square - 4ac) to the power 1/2}
		//for +
		{
		e=(-b)+d;
	
		//for -
		f=(-b)-d;
	}
		//calculating 2a
		{
		g=2.0*a;
	}
		//calculating [b+-{(b square - 4ac) to the power 1/2}]/2a
		//for +
		{
		x=e/g;
		
		//for -
		y=f/g;
	}	
		//output printer
		if(h<0)
		printf("\n\n\n\nSorry! Their are some complex roots, Complex number can not be calculated here");
		
		else
		printf("\n\n\nThe roots of the equation are = \n%39.19f \nand \n%39.19f ",x,y);
		
	
	}
}


	printf("\n\n\n\n\n\n\nAre you want more calcuation ? (Please type 0 for yes or any number for no) : ");
	scanf("%f",&z);
	{
		if(z==0.0)
		
		goto calculate ;
		
		else
		{
		
		system("cls");
		printf("\n\n\n\n\nTHANKYOU \n");
	}
		}	}
		
	getch();	
	
}
//by Shamanta Garai
