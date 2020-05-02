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


	 << 2���� -> 10���� >>
	 int(4����Ʈ) => 2���� �ڸ����� 32��
	 ���ǻ� 1����Ʈ ���ڷ� �����

	 7654 3210 [�ڸ�]
	 0101 1110

	   2^7 * 0 + 2^6 * 1 + 2^5 * 0 + 2^4 * 1
	  +2^3 * 1 + 2^2 * 1 + 2^1 * 1 + 2^0 * 0
	 = 128*0 + 64*1 + 32*0 + 16*1 + 8*1 + 4*1 + 2*1 + 1*0
	 = 64 + 16 + 8 + 4 + 2
	 = 94


	 << 10���� -> 2���� >>
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
	            148 >= 128 Yes -> 128=2^7, 8��° �ڸ��� 1
	 148-128=20, 20 >= 64  No  -> 64 =2^6, 7���� �ڸ��� 0
	             20 >= 32  No  -> 32 =2^5, 6��° �ڸ��� 0
				 20 >= 16  Yes -> 16 =2^4, 5��° �ڸ��� 1
	 20-16=4   ,  4 >= 8   No  -> 8  =2^3, 4��° �ڸ��� 0
	              4 >= 4   Yes -> 4  =2^2, 3��° �ڸ��� 1
	 4-4=0  <��>

	 1001 0100



	 << 2�������� ���� >>

	 11
	 0110 (6 in decimal)
	 0111 (7 in decimal)
	 ------
	 1101 = 13 in decimal



	 << ���� ���� >>

	 -5

	 ��ȣ �������� ���� 2���� ��ȯ
	 0000 0101

	 ���� complement
	 1111 1010

	 1 ���ϱ�
	 1111 1011

	 signed integer�� ���, �� �� �ڸ��� ��ȣ��Ʈ! (0: ���, 1: ����)
	 

	          0�� 0000 0000
	 ������ ���ϸ� 1111 1111 <= 0�� �� �� �� ����
	 �׷��� �������� 1�� ����! ���� �����μ� 0�� ���ص� �Ȱ��� 0000 0000�� ����


	 ��->��
	 signed integer
	 1001 1110
	 0110 0001 (����)
	 0110 0010 (1�� ����) -> 98 -> -98(���� ��ȣ)


	 signed vs unsigned
	 1001 1110(signed) -> 2^7*1 + 2^4*1 + 2^3*1 + 2^2*1 + 2^2*1
	                   = 128 + 16 + 8 + 4 + 2
	 ���� 2������ signed�� unsigned ���̰� ũ�� ��!
	*/

	return 0;
}