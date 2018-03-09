#include <stdio.h>
#include <iostream>
#include <time.h>
using namespace std;
void FillIn(int *p, int row, int col);
void PrintMatrix(int(*pt)[2])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("z[%d][%d]=%5d(%p)\t", i, j, pt[i][j], &pt[i][j]);

		}
		printf("\n");
	}
}
void PrintMatrix(int *p, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d\t", *(p+i*col+j));

		}
		printf("\n");
	}
}
int Min(int*p, int row, int col);
int (Sum)(int *pt, int end);

void main()
{
	/*srand(time(NULL));

	int mas[5][7];
	int *p = &mas[0][0];
	FillIn(p, 5, 7);
	PrintMatrix(p, 5, 7);
	printf("%d", RandomNumber(p, 5, 7));
*/
	/*char mas[] = "Print the number of the task";
	char mas1[] = "Select winter season";
	ConsistOf(mas, mas1);*/

	/*int mas[5][8];
	int *p = &mas[0][0];
	FillIn(p, 5, 8);
	PrintMatrix(p, 5, 8);
	int min = Min(p, 5, 8);
	printf("%d\n", min);
	int sum = Sum((p + (min * 8)), 8);
	printf("%d\n", sum);*/
	
	

	//int z[4][2] = { {2,4},{8,10},{12,3},{89,5} };
	//PrintMatrix(z);
	//printf("\n\n\n");
	//printf("p-%p-%p\n", &z, &z[0], &z[0][0]);

	//printf("**z=%d, equals to *&z[0] [0]=%d\n", **z, *&z[0][0]);

	//int(*ptC)[2];
	//ptC = z;
	//int *pt = &z[0][0];
	//pt + 1;// 1 str 2 stolb
	//pt + 2;// 2 str 1 stolb
	//pt + 3;
}

void FillIn(int *p, int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			*(p+i*col + j) = 1 + rand() % 100;
		}
	}
}

int RandomNumber(int *p, int row, int col)
{
	return *(p + (0 + rand() % (row*col)+1));
}

//int *ConsistOf(char *p, char *pt)
//{
//	char result = -1;
//	int i = 0;
//	int j = 0;
//	while (*p != '\0')
//	{
//		j = 0;
//		while (*pt != '\0')
//		{
//			if (*p[i] == *pt[j])
//				return &p[j];
//			j++;
//		}
//		i++;		
//	}
//	return &result;
//}

int Min(int*p, int row, int col)
{
	int min = *(p+0*col+0);
	int x = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (min > *(p + i*col + j))
			{
				min = *(p + i*col + j);
				x = i;
			}
		}
	}
	return x;
}

int (Sum)(int *pt, int end)
{
	int sum = 0;
	for (int i = 0; i < end; i++)
	{
		sum += *(pt + i);
	}
	return sum;
}

int *Max(int *p, int col)
{
	int *max = p;
	for (int i = 0; i < col; i++)
	{
		if (*max < *(p + i))
			max = (p + i);
	}
	return max;
}