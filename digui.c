 #define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void c(int n)
{
	int x = 1;
	int y = 1;
	for (x = 1; x <= n; x++)
	{
		for (y = 1; y <= x; y++)
		{
			int n = x * y;
			printf("%d*%d=%-2d ", x, y, n);
		}
		printf("\n");
	}
}
int main()
{
	int i = 0;
	scanf("%d", &i);
	c(i);	
	return 0;
}

//int swap(int* x, int* y)
//{
//	int t = 0;
//	t = *x;
//	*x = *y;
//	*y = t;
//	
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d %d\n", a, b);
//	
//	swap(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}

//int is_leap_year(int n)
//{
//	for(n=1000;n<=2000;n++)
//	{ 
//		if ((n % 4 == 0 && n % 100 == 0) || (n % 400 == 0))
//		{
//			return 1;
//		}
//		else
//		{
//			return 0;
//		}
//	}
//	
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if(is_leap_year(year)==1)
//		printf("%d是闰年\n ", year);
//	else
//	{
//		printf("%d不是\n", year);
//	}
//	return 0;
//}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tep = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tep;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//	return 0;
//}
//
//int main()
//{
// 	char arr[] = "abcdef";//[a][b][c][d][e][f][\0]
// 	printf("%c\n", arr[3]);
// 	int i = 0;
// 	int len = strlen(arr);
// 	for(i=0; i<len; i++)
// 	{
// 		printf("%c ", arr[i]);
// 	}
//	int arr[] = {1,2,3,4,5,6,7,8,9,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int Fib(int n)
//{
//	if(n<=2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}



//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//
//	return 0;
//}

//int fac1(int x)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= x; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}

//int fac2(int x)
//{
//	if (x <= 1)
//		return 1;
//	else
//	{
//		return x * fac2(x - 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}



//#include"add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	scanf("%d%d", &a, &b);
//	int sum = add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}