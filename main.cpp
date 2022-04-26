using namespace std;

int main(void)
{
	int count = 0;
	int* array_of_int;
	while (true)
	{
		count++;
		array_of_int = new int[1000000];	
		if (count % 100 == 0)
		{
			cout << count << endl;
		}
	
	}
	return 0;
}
