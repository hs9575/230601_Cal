class Cal
{
public:
	int getDivide(int a, int b)
	{
		if (b == 0)
			return 0;
		return  a / b;
  }
	int getGop(int a, int b)
	{
		return a * b;
  }
  
	int getMinus(int a, int b)
	{
		return a - b;

	int getSum(int a, int b)
	{
		return a + b;
	}

	int getSumSum(int a, int b, int c)
	{
		return a + b + c;
	}

	int getZegop(int a)
	{
		return a * a;
	}
};