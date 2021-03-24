
#include <iostream>
#include <cmath>

int main()
{
	double a, b, c, x1, x2, x0, delta;

	std::cin>>a>>b>>c;

	delta = b*b - 4*a*c;

	if(delta>0)
	{
		delta = sqrt(delta);
		x1 = (-b - delta)/(2*a);
		x2 = (-b + delta)/(2*a);
		std::cout<<x1<<x2;
	}
	else if(delta==0)
		{
			x0 = -b/(2*a);
			std::cout<<x0;
		}
		else
			std::cout<<"No solution";
	return 0;
}
