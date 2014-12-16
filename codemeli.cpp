
#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i < 9; i++)
		for (int j = 3; j < 9; j++)
			for (int k = 6; k < 9; k++)
				for (int l = 0; l < 9; l++)
					for (int m = 0; m < 9; m++)
						for (int n = 0; n < 9; n++)
							for (int o = 0; o < 9; o++)
								for (int p = 0; p < 9; p++)
									for (int q = 0; q < 9; q++)
									{
										int r;
										r = (i*10+j*9+k*8+l*7+m*6+n*5+o*4+p*3+q*2)%11;
										if (r < 2)
											cout << i << j << k << l << m << n << o << p << q << r << endl;
										else if(r >= 2)
										{
											int s = 11 - r;
											cout << i << j << k << l << m << n << o << p << q << s << endl;
										}
									}
	return 0;
}
