void my_funtion(void)
{

}

int main()
{
	//void my_void;	error! void�� �޸𸮸� �������� �ʴ´�.
	int i = 123;
	float f = 123.456f;

	void *my_void;	// �ּ�
	
	// ������ Ÿ���� �ٸ����� �ּ��� ������ Ÿ���� �����ϴ�.
	my_void = (void*)&i;
	my_void = (void*)&f;

	return 0;
}