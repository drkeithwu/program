main()
{
	int input, result;
	scanf("%d", &input);
	if (input > 1 && input < 100)
	{
		for (result = input; result < 500; result += input)
		{
			printf("%d ", result);
		}
	}
	else
	{
		system("%WINDIR%//System32//mspaint.exe 1.png");
	}
}
