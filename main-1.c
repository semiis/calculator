#include <stdio.h>
 
int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);
 
int main(int argc, char* argv[])
{
	int lhs, rhs, res;
	char operator;
	
	printf("Please enter a expression");
	scanf("%d %c %d", &lhs, &operator, &rhs);
	
	switch (operator)
	{
		case '+':
			res = add(lhs, rhs);
			break;
		case '-':
			res = sub(lhs, rhs);
			break;
		case '*':
			res = multi(lhs, rhs);
			break;
		case '/':
			res = div(lhs, rhs);
			break;
	}
	
	printf("result is %d.\n", res);
	
	return 0;
}
 
int add(int lhs, int rhs)
{
	//TODO implementation
	return 0;
}
 
int sub(int lhs, int rhs)
{
	//TODO implementation
	return 0;
}
 
int multi(int lhs, int rhs)
{
	//TODO implementation
	return 0;
}
 
int div(int lhs, int rhs)
{
	if(rhs == 0) {
    return 0;
  }

	return lhs / rhs;
}