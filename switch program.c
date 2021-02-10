#include<stdio.h>
main()
{ 
	printf("enter item: \n1. pizza\n2. burger\n3. pasta\n4. french fries\n5. sandwich");
	int choice=0;
	scanf("%d" , &choice);
	
	switch(choice)
	{
		case 1:
			printf("food item: pizza\nprice Rs 239");	break;
		case 2:
			printf("food item: burger\nprice Rs 129");
			break;
		case 3:
			printf("food item: pasta\nprice Rs 179");
			break;
		case 4:
			printf("food item: french fries\nprice Rs 99");
			break;
		case 5:
			printf("food item: sandwich\nprice Rs 149");
			break;
		default : printf("invalid choice");
	}
  }
