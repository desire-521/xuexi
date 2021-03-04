#include<stdio.h>
#include<assert.h>
void* my_mevove(void* dest, const void* src, size_t count)
{
	assert(dest && src);
	if (dest < src)
	{
		while (count--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
}
void test()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_mevove(arr + 2, arr, 16);
}
int main()
{
	test();
	return 0;
}


