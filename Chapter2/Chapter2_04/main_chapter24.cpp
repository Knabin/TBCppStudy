void my_funtion(void)
{

}

int main()
{
	//void my_void;	error! void는 메모리를 차지하지 않는다.
	int i = 123;
	float f = 123.456f;

	void *my_void;	// 주소
	
	// 데이터 타입이 다르더라도 주소의 데이터 타입은 동일하다.
	my_void = (void*)&i;
	my_void = (void*)&f;

	return 0;
}