#include <iostream>

int main()
{
	using namespace std;

	/*
	0
	1
	2
	3
	4
	5
	6
	7
	8
	9
	10 = 10^1 + 0
	11 = 10^1 + 1
	12
	...
	337 = 300 + 30 + 7 = 10^2 * 3 + 10^1 * 3 + 10^0 * 7
	0
	1
	10 = 2^1 * 1 + 2^0 * 0 = 2
	11 = 2^1 * 1 + 2^0 * 1 = 3
	
	  11
	+  1
	------
	 100
	 << 2진수 -> 10진수 >>
	 int(4바이트) => 2진수 자리수가 32개
	 편의상 1바이트 숫자로 계산함
	 7654 3210 [자리]
	 0101 1110
	   2^7 * 0 + 2^6 * 1 + 2^5 * 0 + 2^4 * 1
	  +2^3 * 1 + 2^2 * 1 + 2^1 * 1 + 2^0 * 0
	 = 128*0 + 64*1 + 32*0 + 16*1 + 8*1 + 4*1 + 2*1 + 1*0
	 = 64 + 16 + 8 + 4 + 2
	 = 94
	 << 10진수 -> 2진수 >>
	 148 (decimal to binary)
	 1.
	 148 / 2 = 74 r0 (r = remainder)
	 74  / 2 = 37 r0
	 37  / 2 = 18 r1
	 18  / 2 = 9  r0
	 9   / 2 = 4  r1
	 4   / 2 = 2  r0
	 2   / 2 = 1  r0
	 1   / 2 = 0  r1
	 1001 0100
	 2. 
	 1 2 4 8 16 32 64 128 256 512 1024 ...
	            148 >= 128 Yes -> 128=2^7, 8번째 자리가 1
	 148-128=20, 20 >= 64  No  -> 64 =2^6, 7번째 자리가 0
	             20 >= 32  No  -> 32 =2^5, 6번째 자리가 0
				 20 >= 16  Yes -> 16 =2^4, 5번째 자리가 1
	 20-16=4   ,  4 >= 8   No  -> 8  =2^3, 4번째 자리가 0
	              4 >= 4   Yes -> 4  =2^2, 3번째 자리가 1
	 4-4=0  <끝>
	 1001 0100
	 << 2진수끼리 덧셈 >>
	 11
	 0110 (6 in decimal)
	 0111 (7 in decimal)
	 ------
	 1101 = 13 in decimal
	 << 음의 정수 >>
	 -5
	 부호 생각하지 말고 2진수 변환
	 0000 0101
	 보수 complement
	 1111 1010
	 1 더하기
	 1111 1011
	 signed integer인 경우, 맨 앞 자리는 부호비트! (0: 양수, 1: 음수)
	 
	          0은 0000 0000
	 보수를 취하면 1111 1111 <= 0이 두 개 돼 버림
	 그래서 마지막에 1을 더함! 음의 정수로서 0을 구해도 똑같은 0000 0000이 나옴
	 음->양
	 signed integer
	 1001 1110
	 0110 0001 (보수)
	 0110 0010 (1을 더함) -> 98 -> -98(원래 부호)
	 signed vs unsigned
	 1001 1110(signed) -> 2^7*1 + 2^4*1 + 2^3*1 + 2^2*1 + 2^2*1
	                   = 128 + 16 + 8 + 4 + 2
	 같은 2진수라도 signed와 unsigned 차이가 크게 남!
	*/

	return 0;
}