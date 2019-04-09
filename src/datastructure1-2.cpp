//============================================================================
// Name        : datastructure1-2.cpp
// Author      : Hyunju Kim
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int);//부울함수 원형정의

int main(void)
{
	int  num, i, num_3_4;//num3_4은 3을 빼거나 6을 뺀 값을 저장하는 변수
	cin>>num;
	isPrime(num);//num이 소수인지 확인하기 위해 함수에 입력
	num_3_4=num-4;//num에 4를 뺌, 첫 번째가 2, 두 번째가 2, 세번째 자리가 홀수인 소수 이렇게 되기 때문에

	if(isPrime(num_3_4)==true)//num_3_4의 값이 소수이면
	{
		cout<<2<<" "<<2<<" "<<num_3_4;//출력
	}

	else//아니면, 첫 번째 값이 반드시 3이다
	{
		num_3_4=num-6;// 첫 번째가 3, 두 번째 자리가 3임을 가정해서 더한 값을 빼서저장
		if(isPrime(num_3_4)==true)//num_3_4의 값이 소수이면
		{
			cout<<3<<" "<<3<<" "<<num_3_4;//첫 번째 값 3, 두 번째 값 3, 마지막 값 출력
		}

		else//아니면 첫 번째 값이 3이고 두 번째 값은 소수인 홀수, 세번 째 값도 소수인 홀수
		{
			cout<<3<<" ";//3을 먼저 출력
			for(i=5; i<num; i++)//첫번째 3, 두번째 3이 아니므로 초기값 5부터 시작
			{
				num_3_4=num-3-i;//입력값에서 위에서 3을 먼저 출력했으니 3을 빼고 i값도 뺌

				if((isPrime(i)==true))//i의 값이 소수이면
				{
					if(isPrime(num_3_4)==true)//num_3_4의 값이 참이면
					{
						break;//반복 탈출
					}

					else
					{
						continue;//두 번째 값이 5가 아니므로 다시 반복
					}
				}
			}
			cout<<i<<" "<<num_3_4;
		}
	}

	return 0;

}

bool isPrime(int n)
{
	if (n==1)//1이 소수가 아니므로
	{
		return false;
	}
	int sqrtn=int(sqrt(double(n)));//헤더파일 cmath를 사용해서 루트를 사용

	for(int i=2; i<=sqrtn; i++)//소수는 2부터 시작하므로 초기값 2, i의 값은 루트의 값보다 작거나 같을때까지
	{
		if(n%i==0)//나머지가 0이면 소수가 아님
		{
			return false;
		}
	}

	return true;//소수가 맞음
}
