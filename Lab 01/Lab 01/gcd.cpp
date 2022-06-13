/*int gcd(const int a, const int b)
{
	int value(1);
	for (int i = 1; i < a || i < b; i++) {
		if (a % i == 0 && b % i == 0) {
			value = i > value ? i : value;
		}

	}
	return value;
}*/

int gcd(const int a, const int b)
{

	int value1 = a;
	int value2 = b;
	int c = a % b; 
	value1 = b;
	value2 = c;

	while (c != 0) 
	{
		c = b % c;

	}

	return c;
}