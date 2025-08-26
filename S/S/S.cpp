#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
#include<vector>

using namespace std;


class Ship {

public:
	string Name;
	int HP;
	int Damage;
	int Speed;
	Ship(string name, int HP, int dmg, int sp) : Name(name), HP(HP), Damage(dmg), Speed(sp) {}
	void dispal() {
		cout << Name << " was register" << endl;
		cout << "HP: " << HP << " damage: " << Damage << " speed: " << Speed << endl;
	}

};


int draw(int Speed1, int Speed2)
{
	int b = 2;
	int c;
	int FirstAttack = (Speed1 > Speed2) ? 1 :
		(Speed1 == Speed2) ? rand() % (b)+1 : 2;
	cout << "The "<<FirstAttack<<" player moves first" << endl;
	return FirstAttack;
}

void game(Ship gamer1, Ship gamer2)
{
	
	int RemainsHP1;
	int RemainsHP2;
	int winner;
	RemainsHP1 = gamer1.HP;
	RemainsHP2 = gamer2.HP;
	while (RemainsHP1 > 0 and RemainsHP2 > 0)
	{
		RemainsHP2 = RemainsHP2 - gamer1.Damage;
		RemainsHP1 = RemainsHP1 - gamer2.Damage;
	}
	if (draw(gamer1.Speed, gamer2.Speed) == 1)
	{
		winner = (RemainsHP2 <= 0) ? 1 : 2;
	}
	else
	{
		winner = (RemainsHP2 <= 0) ? 2 : 1;
	}
	cout << "The " << winner << " Player Win!" << endl;
	
}

int main()
{
	string Restart;
	Restart = "Yes";
	do
	{


		srand(time(0));
		cout << "The first characteristic - HP, the second - damage, the third - speed." << endl;
		cout << "The first player chooses:" << endl;


		string Name;
		int HP, Damage, Speed;
		cout << "Enter the ship`s name:" << endl;
		cin >> Name;
		cout << "Enter the ship`s characteristics:" << endl;
		cin >> HP >> Damage >> Speed;


		if (HP <= 0 or Damage < 0 or Speed <= 0)
		{
			while (HP <= 0 or Damage < 0 or Speed <= 0)
			{
				cout << "Error. Enter positive values" << endl;
				cin >> HP >> Damage >> Speed;
			}
		}


		Ship ship1(Name, HP, Damage, Speed);
		ship1.dispal();



		cout << "The second player chooses:" << endl;


		string Name2;
		int HP2, Damage2, Speed2;
		cout << "Enter the ship`s name:" << endl;
		cin >> Name2;
		cout << "Enter the ship`s characteristics:" << endl;
		cin >> HP2 >> Damage2 >> Speed2;


		if (HP2 <= 0 or Damage2 < 0 or Speed2 <= 0)
		{
			while (HP2 <= 0 or Damage2 < 0 or Speed2 <= 0)
			{
				cout << "Error. Enter positive values" << endl;;
				cin >> HP2 >> Damage2 >> Speed2;
			}
		}

		Ship ship2(Name2, HP2, Damage2, Speed2);
		ship2.dispal();



		game(ship1, ship2);
		cout << "Do you want to play again?" << endl;
		cout << "Write 'Yes' if you want to continue, or something else to finish the game" << endl;
		cin >> Restart;
	} while (Restart == "Yes");

}