#include <stdio.h>

// Binary Search (input : 10 1 9 2 8 3 7 4 6 5)

//1 day 8:15 start, end at 9:08( 알고리즘만 짬, 문법적으로만 오류가 없고 코드를 잘못 짜서 런타임 오류다. 목적에 맞게 전부 수정해야함.)
//2 day 11:35 start, end at 11:59 (입력된 자연수 출력하는 개수 오류 수정함.)
//3 day 8:10 start,  end at 9:00 (입력된 자연수를 출력하는 알고리즘과 binary_search 알고리즘에 문제가 있어서 이를 수정함.)(새로 추가된 문제: 중간에 쓰레기 값이 나타난다.)
//3 day 9:01 start, end at 9:05 (main 안)함수를 호출하는 반복문의 조건식에서 '='를 빼고, (main 안)값을 하나씩 입력받는 반목문의 조건식에 '='를 더했더니 문제를 완전히 해결하였다.

//Totally, It takes 2 hours and 31 minutes to solve 'Binary Search' problem.

/*	Error Reference

	(1 day) To solve the error : I visited a website. https://blog.naver.com/tipsware/220993190781
*/




void binary_search(int *,int);

int main(void) {

	//숫자 배열들을 사용자로부터 입력 받고
	//숫자 배열들을 저장하고
	//함수를 사용해서 배열들을 탐색하고
	//함수 수행이 끝난이후에는 숫자 배열들이 순서대로 정렬된다.

	int number[10];
	int* pnumber = number;
	//int change_number[10];
	
	
	printf("Write 10 natural numbers  and please push Enter key.\n");
	printf("Input: ");


	for (int i = 0; i<=9; )
	{
		scanf_s("%d", &number[i]);
		if (number[i] == 0)
		{
			break;
		}
		else if (number[i] < 0)
		{
			continue;
		}
			
		i++;
	}
	printf("\n");



	for (int j= 0; j<9; j++)
	{
	
	  binary_search(pnumber,j);
	}
	
	printf("Output: ");
	for (int z = 0; z <= 9; z++) //조건식 문제 없음
	{

		printf("%d ", number[z]);
	}
	return 0;
}



void binary_search(int* fpnumber, int j)
{
	int big = 0;
	int small = 0;
	int temp = 0;
	// int y = 0; 이게 꼭 필요한가?
	//int** ppnumber;
	//ppnumber = &fpnumber;
	
	for (int k=j; k < 9; k++)
	{
		big = fpnumber[k];
		small = fpnumber[k + 1];

		if (big > small)
		{
			temp = big;
			fpnumber[k] = small;
			fpnumber[k+1] = temp;

		}
		
	}
	
		//return **ppnumber;

	
}