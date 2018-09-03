#define Min(a, b) ((a) < (b) ? (a) : (b))
#define Max(a, b) ((a) > (b) ? (a) : (b))

int sum(int count, ...)
{
	va_list ap;
	int t = 0;
	va_start(ap, count);
	while (count--)
	{
		t += va_arg(ap, int);
	}
	return t;
}

int min(int count, ...)
{
	va_list ap;
	int t = MAX_ELEMENT;
	va_start(ap, count);
	while (count--)
	{
		int i = va_arg(ap, int);
		t = Min(t, i);
	}
	return t;
}

int max(int count, ...)
{
	va_list ap;
	int t = MIN_ELEMENT;
	va_start(ap, count);
	while (count--)
	{
		int i = va_arg(ap, int);
		t = Max(t, i);
	}
	return t;
}
