# include <iostream>
# include <string>


int main()
{

	int variable1;
	int variable1_1;
	std::string svariable1_1;
	int variable1_2;
	std::string svariable1_2;
	int variable2;
	int variable2_1;
	std::string svariable2_1;
	int variable2_2;
	std::string svariable2_2;


	std::cout << "Enter number bigger than zero but less than one hunder \n";
	std::cout << "Number one - ";
	std::cin >> variable1;
	std::cout << "\n";
	std::cout << "Number two - ";
	std::cin >> variable2;
	std::cout << "\n";

	enum Check { Error, Not_Error };
	Check result_1{ (variable1 <= 1) || (variable1 >= 99) ? Error : Not_Error };

	if (result_1 != Error)
	{
		variable1_1 = variable1 / 10;
		variable1_2 = variable1 % 10;
		variable2_1 = variable2 / 10;
		variable2_2 = variable2 % 10;

		switch (variable1_1) {
		case 0: svariable1_1 = "";
			break;
		case 1:
			switch (variable1) {
			case 11: svariable1_1 = "eleven";
				variable1_2 = 0;
				break;
			case 12: svariable1_1 = "twelve";
				variable1_2 = 0;
				break;
			case 13: svariable1_1 = "thirteen";
				variable1_2 = 0;
				break;
			case 14: svariable1_1 = "fourteen";
				variable1_2 = 0;
				break;
			case 15: svariable1_1 = "fifteen";
				variable1_2 = 0;
				break;
			case 16: svariable1_1 = "sixteen";
				variable1_2 = 0;
				break;
			case 17: svariable1_1 = "seventeen";
				variable1_2 = 0;
				break;
			case 18: svariable1_1 = "eighteen";
				variable1_2 = 0;
				break;
			case 19: svariable1_1 = "nineteen";
				variable1_2 = 0;
			}
				break;
			case 2: svariable1_1 = "twenty";
				break;
			case 3: svariable1_1 = "thirty";
				break;
			case 4: svariable1_1 = "fourty";
				break;
			case 5: svariable1_1 = "fifty";
				break;
			case 6: svariable1_1 = "sixty";
				break;
			case 7: svariable1_1 = "seventy";
				break;
			case 8: svariable1_1 = "eighty";
				break;
			case 9: svariable1_1 = "ninety";
				break;
		
		}
		switch (variable1_2) {
		case 0: svariable1_2 = "";
			break;
		case 1: svariable1_2 = "one";
			break;
		case 2: svariable1_2 = "two";
			break;
		case 3: svariable1_2 = "three";
			break;
		case 4: svariable1_2 = "four";
			break;
		case 5: svariable1_2 = "five";
			break;
		case 6: svariable1_2 = "six";
			break;
		case 7: svariable1_2 = "seven";
			break;
		case 8: svariable1_2 = "eight";
			break;
		case 9: svariable1_2 = "nine";
			break;
		};


		switch (variable2_1) {
		case 0: svariable2_1 = " ";
			break;
		case 1:
			switch (variable2) {
			case 11: svariable2_1 = "eleven";
				variable2_2 = 0;
				break;
			case 12: svariable2_1 = "twelve";
				variable2_2 = 0;
				break;
			case 13: svariable2_1 = "thirteen";
				variable2_2 = 0;
				break;
			case 14: svariable2_1 = "fourteen";
				variable2_2 = 0;
				break;
			case 15: svariable2_1 = "fifteen";
				variable2_2 = 0;
				break;
			case 16: svariable2_1 = "sixteen";
				variable2_2 = 0;
				break;
			case 17: svariable2_1 = "seventeen";
				variable2_2 = 0;
				break;
			case 18: svariable2_1 = "eighteen";
				variable2_2 = 0;
				break;
			case 19: svariable2_1 = "nineteen";
				variable2_2 = 0;
			}
			break;
		case 2: svariable2_1 = "twenty";
			break;
		case 3: svariable2_1 = "thirty";
			break;
		case 4: svariable2_1 = "fourty";
			break;
		case 5: svariable2_1 = "fifty";
			break;
		case 6: svariable2_1 = "sixty";
			break;
		case 7: svariable2_1 = "seventy";
			break;
		case 8: svariable2_1 = "eighty";
			break;
		case 9: svariable2_1 = "ninety";
			break;
		}
		switch (variable2_2) {
		case 0: svariable2_2 = "";
			break;
		case 1: svariable2_2 = "one";
			break;
		case 2: svariable2_2 = "two";
			break;
		case 3: svariable2_2 = "three";
			break;
		case 4: svariable2_2 = "four";
			break;
		case 5: svariable2_2 = "five";
			break;
		case 6: svariable2_2 = "six";
			break;
		case 7: svariable2_2 = "seven";
			break;
		case 8: svariable2_2 = "eight";
			break;
		case 9: svariable2_2 = "nine";
			break;
		};

		std::string result{ (variable1 == variable2 ? "equal" :
					variable1 > variable2 ? "biger than " : "less than") };

		std::cout << svariable1_1 << "\t" << svariable1_2 << "\t" << result << "\t" << svariable2_1 << "\t" << svariable2_2;
	}
	else {
		std::cout << "Error";
	}
		return EXIT_SUCCESS;

}