#include "bonus.h"

int main(void)
{
	char one = "\0", two = "\0", three = "\0", four = "\0", five = "\0", six = "\0", seven = "\0";

	int earnings = 0;
	one = award_input("All-Star Game appearance");
	two = award_input("Regular season MVP");
	three = award_input("World Series MVP");
	four = award_input("Golden Glove Award");
	five = award_input("Silver Slugger Award");
	six = award_input("Home Run Champ");
	seven = award_input("Batting Average Champ");

	if (one == 'y')
	{
		earnings = earnings + 25000;
	}
	if (two == 'y')
	{
		earnings = earnings + 75000;
	}
	if (three == 'y')
	{
		earnings = earnings + 100000;
	}
	if (four == 'y')
	{
		earnings = earnings + 50000;
	}
	if (five == 'y')
	{
		earnings = earnings + 35000;
	}
	if (six == 'y')
	{
		earnings = earnings + 25000;
	}
	if (seven == 'y')
	{
		earnings = earnings + 25000;
	}
	printf("Earnings: %d", earnings);
}
