#include <iostream>
#include <string>
using namespace std;

char wantColourLet;
bool wantColour;
string exactColour;
bool noColour;
string target;
string message;

//start code function
void start() {

	cout << "\n----------------- TellRaw -----------------\n\n";
	cout << "Welcome to the TellRaw Minecraft Command Compiler by Franticpudding\n";
	cout << "Github: https://github.com/Franticpudding \n";

}


//request if they require a colour
void colour() {

	cout << "\n\nDo you want coloured text? (Y or N) ";
	cin >> wantColourLet;

	switch (wantColourLet)
	{
	case 'Y': case 'y':
		wantColour = true;
		break;
	case 'N': case 'n':
		wantColour = false;
		break;
	}


	//positive colour request
	if (wantColour == true) {

		cout << "\n\n";
		cout << "Here are the colour options:\n";
		cout << "----------------------------------\n";
		cout << "black, dark_blue, dark_green, dark_aqua,\ndark_red, dark_purple, gold, gray,\ndark_green, blue, green, aqua, red,\nlight_purple, yellow, white";
		cout << "\n----------------------------------";
		cout << "\n";

		cout << "\nPlease enter your colour: ";
		cin >> exactColour;
	}

	//negative colour request
	else if (wantColour == false) {

		cout << "\n---------------------------------------------";
		cout << "\nWho do you want to TellRaw to? \n\nOptions:\n@a (All players),\n@p (Closest player),\n@a (Tell to yourself),\n(username) (Tell to a certain player)\n\n";
		cin >> target;
		cin.ignore();

		cout << "\nWhat message do you want to display? ";
		getline(cin, message);

		cout << "\n\n------------- Final output -------------\n\n";
		cout << R"###(/tellraw )###" << target << " " << R"###(")###" << message << R"###(")###" << "\n\n\n";

	}
}


//main code
int main() {

	char again = 'Y';

	while (again == 'y' || again == 'Y') {

		start();

		colour();

		if (wantColour == true) {

			char again = 'Y';

			while (again == 'y' || again == 'Y') {

				cout << "\n---------------------------------------------";
				cout << "\nWho do you want to TellRaw to? \n\nOptions:\n@a (All players),\n@p (Closest player),\n@a (Tell to yourself),\n(username) (Tell to a certain player)\n\n";
				cin >> target;
				cin.ignore();

				cout << "\nWhat message do you want to display? ";
				getline(cin, message);

				cout << "\n\n------------- Final output -------------\n\n";
				cout << R"###(/tellraw )###" << target << " " << R"###({"text":")###" << message << R"###(", "color" :")###" << exactColour << R"###("})###" << "\n\n\n";

				cout << "Would you like to repeat with the same color? (Y / N)";
				cin >> again;

			}
		}

		cout << "Would you like to repeat? (Y / N)";
		cin >> again;

		cout << "Thank you for using this code, check out my others on Github.\n\n";

	}

	return 0;
}

// Thanks for viewing this code, check out my others on my Github, any suggestions or improvements leave a pull request on said code. Franticpudding
