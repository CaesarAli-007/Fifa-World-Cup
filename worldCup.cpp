#include<iostream>
#include<stdlib.h>
#include<ctime> //for srand function(random no)
using namespace std;

int main()
{
	
	for (int i = 0; i < 31; i++)
		cout << "*";
	cout << "\n\n WELCOME TO FOOTBALL SIMULATOR\n\n";
	
	for (int i = 0; i < 31; i++)
		cout << "*";

	//la liga teams
	int la_team1 = 0, la_team2 = 0, la_team3 = 0, la_team4 = 0;
	int l_count1 = 0, l_count2 = 0, l_count3 = 0, l_count4 = 0;
	string s_la_team1 = "atletico madrid", s_la_team2 = "real madrid", s_la_team3 = "barcelona", s_la_team4 = "sevilla";

	//premier league
	int p_team1 = 0, p_team2 = 0, p_team3 = 0, p_team4 = 0;
	int p_count1 = 0, p_count2 = 0, p_count3 = 0, p_count4 = 0;
	string s_p_team1 = "tottenham", s_p_team2 = "manchester united", s_p_team3 = "manchester city", s_p_team4 = "liverpool";



	int final1 = 0, final2 = 0;
	string s_final1, s_final2;

	srand(time(NULL));

	//random numbers to both variables for a match
	la_team1 = rand() % 6;
	la_team2 = rand() % 6;


	//la liga
	 for (int i = 0; i < 30; i++)
	cout << "*";
	cout << "\n\n\tla liga\n";
	//first match  
	cout << endl << endl << endl;
	cout << s_la_team1 << " vs " << s_la_team2 << endl<<endl;
	if (la_team1 > la_team2)
	{
		cout << s_la_team1 << " won\n\t\t"<<endl;
		cout <<la_team1 << " - " << la_team2<<endl;
		l_count1+=3;
	}
	else if(la_team1 < la_team2)
	{
		cout << s_la_team2 << " won\n\t\t" << endl;
		cout <<la_team2 << " - " << la_team1 << endl;
		l_count2+=3;
	}
	else if(la_team1==0 && la_team2==0)
	{
		cout << "Match draw\n\n"<<s_la_team1<<" "<<la_team1<<" - "<<la_team2<<" "<<s_la_team2 ;
		l_count1++;
		l_count2++;
	}
	else
	{
		cout << "Match draw\n\n" << s_la_team1 << " " << la_team1 << " - " << la_team2 << " " << s_la_team2;
	}

	//2nd match
	la_team1 = rand() % 6;
	la_team3 = rand() % 6;
	 
	cout << endl << endl << endl;
	cout << s_la_team1 << " vs " << s_la_team3 << endl << endl;
	if (la_team1 > la_team3)
	{
		cout << s_la_team1 << " won\n\t\t" << endl;
		cout << la_team1 << " - " << la_team3 << endl;
		l_count1 += 3;
	}
	else if (la_team1 < la_team3)
	{
		cout << s_la_team3 << " won\n\t\t" << endl;
		cout << la_team3 << " - " << la_team1 << endl;
		l_count3 += 3;
	}
	else if (la_team1 == 0 && la_team3 == 0)
	{
		cout << "Match draw\n\n" << s_la_team1 << " " << la_team1 << " - " << la_team3 << " " << s_la_team3;
		l_count1++;
		l_count3++;
	}
	else
	{
		cout << "Match draw\n\n" << s_la_team1 << " " << la_team1 << " - " << la_team3 << " " << s_la_team3;
	}

	//3rd match
	la_team1 = rand() % 6;
	la_team4 = rand() % 6;
	cout << endl << endl << endl;
	cout << s_la_team1 << " vs " << s_la_team4 << endl << endl;
	if (la_team1 > la_team4)
	{
		cout << s_la_team1 << " won\n\t\t" << endl;
		cout << la_team1 << " - " << la_team4 << endl;
		l_count1 += 3;
	}
	else if (la_team1 < la_team4)
	{
		cout << s_la_team4 << " won\n\t\t" << endl;
		cout << la_team4 << " - " << la_team1 << endl;
		l_count4 += 3;
	}
	else if (la_team1 == 0 && la_team4 == 0)
	{
		cout << "Match draw\n\n" << s_la_team1 << " " << la_team1 << " - " << la_team4 << " " << s_la_team4;
		l_count1++;
		l_count4++;
	}
	else
	{
		cout << "Match draw\n\n" << s_la_team1 << " " << la_team1 << " - " << la_team4 << " " << s_la_team4;
	}

	//4th match

	la_team2 = rand() % 6;
	la_team3 = rand() % 6;
	cout << endl << endl << endl;
	cout << s_la_team2 << " vs " << s_la_team3 << endl << endl;
	if (la_team2 > la_team3)
	{
		cout << s_la_team2 << " won\n\t\t" << endl;
		cout << la_team2 << " - " << la_team3 << endl;
		l_count2 += 3;
	}
	else if (la_team2 < la_team3)
	{
		cout << s_la_team3 << " won\n\t\t" << endl;
		cout << la_team3 << " - " << la_team2 << endl;
		l_count3 += 3;
	}
	else if (la_team2 == 0 && la_team3 == 0)
	{
		cout << "Match draw\n\n" << s_la_team2 << " " << la_team2 << " - " << la_team3 << " " << s_la_team3;
		l_count2++;
		l_count3++;
	}
	else
	{
		cout << "Match draw\n\n" << s_la_team2 << " " << la_team2 << " - " << la_team3 << " " << s_la_team3;
	}

	//5th match
	la_team2 = rand() % 6;
	la_team4 = rand() % 6;
	cout << endl << endl << endl;
	cout << s_la_team2 << " vs " << s_la_team4 << endl << endl;
	if (la_team2 > la_team4)
	{
		cout << s_la_team2 << " won\n\t\t" << endl;
		cout << la_team2 << " - " << la_team4 << endl;
		l_count2 += 3;
	}
	else if (la_team2 < la_team4)
	{
		cout << s_la_team4 << " won\n\t\t" << endl;
		cout << la_team4 << " - " << la_team2 << endl;
		l_count4 += 3;
	}
	else if (la_team2 == 0 && la_team4 == 0)
	{
		cout << "Match draw\n\n" << s_la_team2 << " " << la_team2 << " - " << la_team4 << " " << s_la_team4;
		l_count2++;
		l_count4++;
	}
	else
	{
		cout << "Match draw\n\n" << s_la_team2 << " " << la_team2 << " - " << la_team4 << " " << s_la_team4;
	}

	//6th match

	la_team3 = rand() % 6;
	la_team4 = rand() % 6;
	cout << endl << endl << endl;
	cout << s_la_team3 << " vs " << s_la_team4 << endl << endl;
	if (la_team3 > la_team4)
	{
		cout << s_la_team3 << " won\n\t\t" << endl;
		cout << la_team3 << " - " << la_team4 << endl;
		l_count3 += 3;
	}
	else if (la_team3 < la_team4)
	{
		cout << s_la_team4 << " won\n\t\t" << endl;
		cout << la_team4 << " - " << la_team3 << endl;
		l_count4 += 3;
	}
	else if (la_team3 == 0 && la_team4 == 0)
	{
		cout << "Match draw\n\n" << s_la_team3 << " " << la_team3 << " - " << la_team4 << " " << s_la_team4;
		l_count3++;
		l_count4++;
	}
	else
	{
		cout << "Match draw\n\n" << s_la_team3 << " " << la_team3 << " - " << la_team4 << " " << s_la_team4;
	}

	


	
		if ((l_count1 > l_count2) && (l_count1 > l_count3) && (l_count1 > l_count4))
		{

			cout << s_la_team1 << " is the la liga winner and qualifies to champions league!\n";
			s_final1 = s_la_team1;

		}
		else if ((l_count2 > l_count1) && (l_count2 > l_count3) && (l_count2 > l_count4))
		{
			cout << s_la_team2 << " is the la liga winner and qualifies to champions league!\n";
			s_final1 = s_la_team2;
		}
		else if ((l_count3 > l_count1) && (l_count3 > l_count2) && (l_count3 > l_count4))
		{
			cout << s_la_team2 << " is the la liga winner and qualifies to champions league!\n";
			s_final1 = s_la_team3;
		}
		else if ((l_count4 > l_count1) && (l_count4 > l_count2) && (l_count4 > l_count3))
		{
			cout << s_la_team2 << " is the la liga winner and qualifies to champions league!\n";
			s_final1 = s_la_team4;

		}
	

	//premier league
	

	//first match
	cout << endl << endl;
	for (int i = 0; i < 30; i++)
		cout << "*";
	cout << "\n\n\tpremier league\n";

	cout << endl << endl << endl;

	cout << s_p_team1 << " vs " << s_p_team2 << endl << endl;
	if (p_team1 > p_team2)
	{
		cout << s_p_team1 << " won\n\t\t" << endl;
		cout << p_team1 << " - " << p_team2 << endl;
		p_count1 += 3;
	}
	else if (p_team1 < p_team2)
	{
		cout << s_p_team2 << " won\n\t\t" << endl;
		cout << p_team2 << " - " << p_team1 << endl;
		p_count2 += 3;
	}
	else if (p_team1 == 0 && p_team2 == 0)
	{
		cout << "Match draw\n\n" << s_p_team1 << " " << p_team1 << " - " << p_team2 << " " << s_p_team2;
		p_count1++;
		p_count2++;
	}
	else
	{
		cout << "Match draw\n\n" << s_p_team1 << " " << p_team1 << " - " << p_team2 << " " << s_p_team2;
	}

	//2nd match
	p_team1 = rand() % 6;
	p_team3 = rand() % 6;

	cout << endl << endl << endl;
	cout << s_p_team1 << " vs " << s_p_team3 << endl << endl;
	if (p_team1 > p_team3)
	{
		cout << s_p_team1 << " won\n\t\t" << endl;
		cout << p_team1 << " - " << p_team3 << endl;
		p_count1 += 3;
	}
	else if (p_team1 < p_team3)
	{
		cout << s_p_team3 << " won\n\t\t" << endl;
		cout << p_team3 << " - " << p_team1 << endl;
		p_count3 += 3;
	}
	else if (p_team1 == 0 && p_team3 == 0)
	{
		cout << "Match draw\n\n" << s_p_team1 << " " << p_team1 << " - " << p_team3 << " " << s_p_team3;
		p_count1++;
		p_count3++;
	}
	else
	{
		cout << "Match draw\n\n" << s_p_team1 << " " << p_team1 << " - " << p_team3 << " " << s_p_team3;
	}

	//3rd match
	p_team1 = rand() % 6;
	p_team4 = rand() % 6;
	cout << endl << endl << endl;
	cout << s_p_team1 << " vs " << s_p_team4 << endl << endl;
	if (p_team1 > p_team4)
	{
		cout << s_p_team1 << " won\n\t\t" << endl;
		cout << p_team1 << " - " << p_team4 << endl;
		p_count1 += 3;
	}
	else if (p_team1 < p_team4)
	{
		cout << s_p_team4 << " won\n\t\t" << endl;
		cout << p_team4 << " - " << p_team1 << endl;
		p_count4 += 3;
	}
	else if (p_team1 == 0 && p_team4 == 0)
	{
		cout << "Match draw\n\n" << s_p_team1 << " " << p_team1 << " - " << p_team4 << " " << s_p_team4;
		p_count1++;
		p_count4++;
	}
	else
	{
		cout << "Match draw\n\n" << s_p_team1 << " " << p_team1 << " - " << p_team4 << " " << s_p_team4;
	}

	//4th match

	p_team2 = rand() % 6;
	p_team3 = rand() % 6;
	cout << endl << endl << endl;
	cout << s_p_team2 << " vs " << s_p_team3 << endl << endl;
	if (p_team2 > p_team3)
	{
		cout << s_p_team2 << " won\n\t\t" << endl;
		cout << p_team2 << " - " << p_team3 << endl;
		p_count2 += 3;
	}
	else if (p_team2 < p_team3)
	{
		cout << s_p_team3 << " won\n\t\t" << endl;
		cout << p_team3 << " - " << p_team2 << endl;
		p_count3 += 3;
	}
	else if (p_team2 == 0 && p_team3 == 0)
	{
		cout << "Match draw\n\n" << s_p_team2 << " " << p_team2 << " - " << p_team3 << " " << s_p_team3;
		p_count2++;
		p_count3++;
	}
	else
	{
		cout << "Match draw\n\n" << s_p_team2 << " " << p_team2 << " - " << p_team3 << " " << s_p_team3;
	}

	//5th match
	p_team2 = rand() % 6;
	p_team4 = rand() % 6;
	cout << endl << endl << endl;
	cout << s_p_team2 << " vs " << s_p_team4 << endl << endl;
	if (p_team2 > p_team4)
	{
		cout << s_p_team2 << " won\n\t\t" << endl;
		cout << p_team2 << " - " << p_team4 << endl;
		p_count2 += 3;
	}
	else if (p_team2 < p_team4)
	{
		cout << s_p_team4 << " won\n\t\t" << endl;
		cout << p_team4 << " - " << p_team2 << endl;
		p_count4 += 3;
	}
	else if (p_team2 == 0 && p_team4 == 0)
	{
		cout << "Match draw\n\n" << s_p_team2 << " " << p_team2 << " - " << p_team4 << " " << s_p_team4;
		p_count2++;
		p_count4++;
	}
	else
	{
		cout << "Match draw\n\n" << s_p_team2 << " " << p_team2 << " - " << p_team4 << " " << s_p_team4;
	}

	//6th match

	p_team3 = rand() % 6;
	p_team4 = rand() % 6;
	cout << endl << endl << endl;
	cout << s_p_team3 << " vs " << s_p_team4 << endl << endl;
	if (p_team3 > p_team4)
	{
		cout << s_p_team3 << " won\n\t\t" << endl;
		cout << p_team3 << " - " << p_team4 << endl;
		p_count3 += 3;
	}
	else if (p_team3 < p_team4)
	{
		cout << s_p_team4 << " won\n\t\t" << endl;
		cout << p_team4 << " - " << p_team3 << endl;
		p_count4 += 3;
	}
	else if (p_team3 == 0 && p_team4 == 0)
	{
		cout << "Match draw\n\n" << s_p_team3 << " " << p_team3 << " - " << p_team4 << " " << s_p_team4;
		p_count3++;
		p_count4++;
	}
	else
	{
		cout << "Match draw\n\n" << s_p_team3 << " " << p_team3 << " - " << p_team4 << " " << s_p_team4;
		
	}

	if ((p_count1 > p_count2) && (p_count1 > p_count3) && (p_count1 > p_count4))
	{
		cout << s_p_team1 << " is the la liga winner and qualifies to champions league!\n";
		s_final1 = s_p_team1;
	}
	else if ((p_count2 > p_count1) && (p_count2 > p_count3) && (p_count2 > p_count4))
	{
		cout << s_p_team2 << " is the la liga winner and qualifies to champions league!\n";
		s_final1 = s_p_team2;

	}
	else if ((p_count3 > p_count1) && (p_count3 > p_count2) && (p_count3 > p_count4))
	{
		cout << s_p_team2 << " is the la liga winner and qualifies to champions league!\n";
		s_final1 = s_p_team3;
	}
	else if ((p_count4 > p_count1) && (p_count4 > p_count2) && (p_count4 > p_count3))
	{
		cout << s_p_team2 << " is the la liga winner and qualifies to champions league!\n";
		s_final1 = s_p_team4;
	}

	//champions league final
	cout << endl << endl;
	final1 = rand() % 6;
	final2 = rand() % 6;
	if (final1 > final2)
		cout << s_final1 << " won the champions league\n" << s_final1 << " " << final1 << " - " << final2 << " " << s_final2 << endl << endl;
	else if (final2 > final1)
		cout << s_final2 << " won the champions league\n" << s_final2 << " " << final2 << " - " << final1 << " " << s_final1 << endl << endl;
	else
	{
		cout << "\n\n\tExtra time!!!\n";
		while (final1 == final2)
		{
			final1 = rand() % 6;
			final2 = rand() % 6;
			if (final1 > final2)
				cout << s_final1 << " won the champions league\n" << s_final1 << " " << final1 << " - " << final2 << " " << s_final2 << endl << endl;
			else if (final2 > final1)
				cout << s_final2 << " won the champions league\n" << s_final2 << " " << final2 << " - " << final1 << " " << s_final1 << endl << endl;
		}
	}

} 
