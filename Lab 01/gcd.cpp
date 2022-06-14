int gcd(const int a, const int b)
{

	int input1 = a;
	int input2 = b;
	int result = input1 % input2;

	while (result != 0) 
	{
		result = input1 % input2;
		input1 = input2;
		input2 = result;
	}

	return input1;
}