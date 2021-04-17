#include <stdio.h>
void main()
{
	printf("1.Pizza, Rs 239\n2.Burger, Rs 129\n3.Pasta, Rs 179\n4.French Fries, Rs 99\n5.Sandwich, Rs 149\n");
	int choice = 0;
	scanf("%d", &choice);
	switch(choice){
		case 1:
			printf("Food Item - Pizza\n Price - Rs 239");
			break;
		case 2:
			printf("Food Item - Burger\n Price - Rs 129");
			break;
		case 3:
			printf("Food Item - Pasta\n Price - Rs 179");
			break;
		case 4:
			printf("Food Item - French Fries\n Price - Rs 99");
			break;
		case 5:
			printf("Food Item - Sandwich\n Price - Rs 149");
			break;
		default:
			printf("Invalid Choice");
	}
}
