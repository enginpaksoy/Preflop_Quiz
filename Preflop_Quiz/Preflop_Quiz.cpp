#include "Preflop_Quiz.h"

using namespace std;

int main()
{
	cout << element3 << endl << "---------------" << endl;
	cout << element1 << "_";
	cout << element2 << endl;
	cout << element4 << "_";
	cout << element5 << endl << endl;

	cout << "Fold? : F" << endl;
	cout << "Check? : C" << endl;
	cout << "Raise? : R" << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cin >> response;

	void small_blind();
	void fold();
	void finish();

	if (element1 == element4 && element2 == element5)
	{
		return 0;
		finish();
	}

	if (element3 == "Under the Gun")
	{
		if (element1 == "A" && element4 == "A" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if (element1 == "K" && element4 == "K" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if (element1 == "Q" && element4 == "Q" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if (element1 == "J" && element4 == "J" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if (element1 == "T" && element4 == "T" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if (element1 == "9" && element4 == "9" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if (element1 == "8" && element4 == "8" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if (element1 == "7" && element4 == "7" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if (element1 == "6" && element4 == "6" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if (element1 == "5" && element4 == "5" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if (element1 == "4" && element4 == "4" && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%75 RAISE" << endl << "%25 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS";
		}
		else if (element1 == "3" && element4 == "3" && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%25 RAISE" << endl << "%50 FOLD" << endl << "%25 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS";
		}
		else if ((element1 == "A" || element1 == "K") && (element4 == "K" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "A" || element1 == "Q") && (element4 == "Q" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "A" || element1 == "J") && (element4 == "J" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "A" || element1 == "T") && (element4 == "T" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "A" || element1 == "9") && (element4 == "9" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "A" || element1 == "8") && (element4 == "8" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "A" || element1 == "7") && (element4 == "7" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "A" || element1 == "6") && (element4 == "6" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "A" || element1 == "5") && (element4 == "5" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "A" || element1 == "4") && (element4 == "4" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "A" || element1 == "3") && (element4 == "3" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "A" || element1 == "2") && (element4 == "2" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "A" || element1 == "K") && (element4 == "K" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "K" || element1 == "Q") && (element4 == "Q" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "K" || element1 == "J") && (element4 == "J" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "K" || element1 == "T") && (element4 == "T" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "K" || element1 == "9") && (element4 == "9" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "K" || element1 == "8") && (element4 == "8" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS";
		}
		else if ((element1 == "A" || element1 == "Q") && (element4 == "Q" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "K" || element1 == "Q") && (element4 == "Q" || element4 == "K") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "Q" || element1 == "J") && (element4 == "J" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "Q" || element1 == "T") && (element4 == "T" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "Q" || element1 == "9") && (element4 == "9" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS";
		}
		else if ((element1 == "A" || element1 == "J") && (element4 == "J" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "K" || element1 == "J") && (element4 == "J" || element4 == "K") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "Q" || element1 == "J") && (element4 == "J" || element4 == "Q") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%50 RAISE" << endl << "%50 FOLD";
		}
		else if ((element1 == "J" || element1 == "T") && (element4 == "T" || element4 == "J") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "J" || element1 == "9") && (element4 == "9" || element4 == "J") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS";
		}
		else if ((element1 == "A" || element1 == "T") && (element4 == "T" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "K" || element1 == "T") && (element4 == "T" || element4 == "K") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%25 RAISE" << endl << "%75 FOLD";
		}
		else if ((element1 == "T" || element1 == "9") && (element4 == "9" || element4 == "T") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "9" || element1 == "8") && (element4 == "8" || element4 == "9") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%50 FOLD" << endl << "%50 RAISE ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "8" || element1 == "7") && (element4 == "7" || element4 == "8") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%25 RAISE" << endl << "%50 FOLD" << endl << "%25 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "7" || element1 == "6") && (element4 == "6" || element4 == "7") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%25 RAISE" << endl << "%50 FOLD" << endl << "%25 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "6" || element1 == "5") && (element4 == "5" || element4 == "6") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%25 RAISE" << endl << "%50 FOLD" << endl << "%25 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "5" || element1 == "4") && (element4 == "4" || element4 == "5") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%25 RAISE" << endl << "%50 FOLD" << endl << "%25 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else
		{
			fold();
		}
		finish();
	}

	else if (element3 == "Middle Position")
	{
		if (element1 == "A" && element4 == "A" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "K" && element4 == "K" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "Q" && element4 == "Q" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "J" && element4 == "J" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "T" && element4 == "T" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "9" && element4 == "9" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "8" && element4 == "8" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "7" && element4 == "7" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "6" && element4 == "6" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "5" && element4 == "5" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "4" && element4 == "4" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "3" && element4 == "3" && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%50 RAISE" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if (element1 == "2" && element4 == "2" && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%50 FOLD" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "A" || element1 == "K") && (element4 == "K" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "Q") && (element4 == "Q" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "J") && (element4 == "J" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "T") && (element4 == "T" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "9") && (element4 == "9" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "8") && (element4 == "8" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "7") && (element4 == "7" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "6") && (element4 == "6" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "5") && (element4 == "5" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "4") && (element4 == "4" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "3") && (element4 == "3" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "2") && (element4 == "2" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "K") && (element4 == "K" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "Q") && (element4 == "Q" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "J") && (element4 == "J" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "T") && (element4 == "T" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "9") && (element4 == "9" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "8") && (element4 == "8" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "7") && (element4 == "7" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "6") && (element4 == "6" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "5") && (element4 == "5" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "Q") && (element4 == "Q" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "Q") && (element4 == "Q" || element4 == "K") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "Q" || element1 == "J") && (element4 == "J" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "Q" || element1 == "T") && (element4 == "T" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "Q" || element1 == "9") && (element4 == "9" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "Q" || element1 == "8") && (element4 == "8" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%50 RAISE" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "A" || element1 == "J") && (element4 == "J" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "J") && (element4 == "J" || element4 == "K") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "Q" || element1 == "J") && (element4 == "J" || element4 == "Q") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "J" || element1 == "T") && (element4 == "T" || element4 == "J") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "J" || element1 == "9") && (element4 == "9" || element4 == "J") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "J" || element1 == "8") && (element4 == "8" || element4 == "J") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS";
		}
		else if ((element1 == "A" || element1 == "T") && (element4 == "T" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "T") && (element4 == "T" || element4 == "K") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%25 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl << "%75 RAISE";
		}
		else if ((element1 == "Q" || element1 == "T") && (element4 == "T" || element4 == "Q") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%25 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl << "%75 RAISE";
		}
		else if ((element1 == "T" || element1 == "9") && (element4 == "9" || element4 == "T") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "T" || element1 == "8") && (element4 == "8" || element4 == "T") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl << "%50 FOLD";
		}
		else if ((element1 == "A" || element1 == "9") && (element4 == "9" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%75 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl << "%25 RAISE";
		}
		else if ((element1 == "9" || element1 == "8") && (element4 == "8" || element4 == "9") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%50 RAISE" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "9" || element1 == "7") && (element4 == "7" || element4 == "9") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%50 FOLD" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "8" || element1 == "7") && (element4 == "7" || element4 == "8") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "8" || element1 == "6") && (element4 == "6" || element4 == "8") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%50 FOLD" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "7" || element1 == "6") && (element4 == "6" || element4 == "7") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%25 RAISE" << endl << "%75 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "6" || element1 == "5") && (element4 == "5" || element4 == "6") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%25 RAISE" << endl << "%75 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "5" || element1 == "4") && (element4 == "4" || element4 == "5") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%25 RAISE" << endl << "%25 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl << "%50 FOLD";
		}
		else
		{
			fold();
		}
		finish();
	}

	else if (element3 == "Cut Off")
	{
		if (element1 == "A" && element4 == "A" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "K" && element4 == "K" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "Q" && element4 == "Q" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "J" && element4 == "J" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "T" && element4 == "T" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "9" && element4 == "9" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "8" && element4 == "8" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "7" && element4 == "7" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "6" && element4 == "6" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "5" && element4 == "5" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "4" && element4 == "4" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "3" && element4 == "3" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "2" && element4 == "2" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "K") && (element4 == "K" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "Q") && (element4 == "Q" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "J") && (element4 == "J" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "T") && (element4 == "T" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "9") && (element4 == "9" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "8") && (element4 == "8" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "7") && (element4 == "7" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "6") && (element4 == "6" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "5") && (element4 == "5" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "4") && (element4 == "4" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "3") && (element4 == "3" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "2") && (element4 == "2" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "K") && (element4 == "K" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "Q") && (element4 == "Q" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "J") && (element4 == "J" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "T") && (element4 == "T" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "9") && (element4 == "9" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "8") && (element4 == "8" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "7") && (element4 == "7" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "6") && (element4 == "6" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "5") && (element4 == "5" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "4") && (element4 == "4" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "3") && (element4 == "3" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "2") && (element4 == "2" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl << "%50 FOLD" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "A" || element1 == "Q") && (element4 == "Q" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "Q") && (element4 == "Q" || element4 == "K") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "Q" || element1 == "J") && (element4 == "J" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "Q" || element1 == "T") && (element4 == "T" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "Q" || element1 == "9") && (element4 == "9" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "Q" || element1 == "8") && (element4 == "8" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "Q" || element1 == "7") && (element4 == "7" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "Q" || element1 == "6") && (element4 == "6" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "Q" || element1 == "5") && (element4 == "5" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "A" || element1 == "J") && (element4 == "J" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "K" || element1 == "J") && (element4 == "J" || element4 == "K") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "Q" || element1 == "J") && (element4 == "J" || element4 == "Q") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "J" || element1 == "T") && (element4 == "T" || element4 == "J") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "J" || element1 == "9") && (element4 == "9" || element4 == "J") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "J" || element1 == "8") && (element4 == "8" || element4 == "J") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "J" || element1 == "7") && (element4 == "7" || element4 == "J") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl << "%50 FOLD";
		}
		else if ((element1 == "A" || element1 == "T") && (element4 == "T" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "K" || element1 == "T") && (element4 == "T" || element4 == "K") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "Q" || element1 == "T") && (element4 == "T" || element4 == "Q") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "J" || element1 == "T") && (element4 == "T" || element4 == "J") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "T" || element1 == "9") && (element4 == "9" || element4 == "T") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "T" || element1 == "8") && (element4 == "8" || element4 == "T") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "T" || element1 == "7") && (element4 == "7" || element4 == "T") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl << "%50 FOLD" << endl;
		}
		else if ((element1 == "A" || element1 == "9") && (element4 == "9" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "K" || element1 == "9") && (element4 == "9" || element4 == "K") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%75 FOLD" << endl << "%25 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "9" || element1 == "8") && (element4 == "8" || element4 == "9") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "9" || element1 == "7") && (element4 == "7" || element4 == "9") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "9" || element1 == "6") && (element4 == "6" || element4 == "9") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%50 FOLD" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "A" || element1 == "8") && (element4 == "8" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%75 RAISE" << endl << "%25 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "8" || element1 == "7") && (element4 == "7" || element4 == "8") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "8" || element1 == "6") && (element4 == "6" || element4 == "8") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "8" || element1 == "5") && (element4 == "5" || element4 == "8") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%75 FOLD" << endl << "%25 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "A" || element1 == "7") && (element4 == "7" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%50 FOLD" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "7" || element1 == "6") && (element4 == "6" || element4 == "7") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "7" || element1 == "5") && (element4 == "5" || element4 == "7") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%50 FOLD" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "6" || element1 == "5") && (element4 == "5" || element4 == "6") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS";
		}
		else if ((element1 == "6" || element1 == "4") && (element4 == "4" || element4 == "6") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%50 FOLD" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "A" || element1 == "5") && (element4 == "5" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "5" || element1 == "4") && (element4 == "4" || element4 == "5") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "4") && (element4 == "4" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%50 FOLD" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "4" || element1 == "3") && (element4 == "3" || element4 == "4") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%50 FOLD" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "A" || element1 == "3") && (element4 == "3" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%50 FOLD" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "A" || element1 == "2") && (element4 == "2" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%50 FOLD" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else
		{
			fold();
			finish();
		}
	}

	else if (element3 == "Button")
	{
		if (element1 == "A" && element4 == "A" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "K" && element4 == "K" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "Q" && element4 == "Q" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "J" && element4 == "J" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "T" && element4 == "T" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "9" && element4 == "9" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "8" && element4 == "8" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "7" && element4 == "7" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "6" && element4 == "6" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "5" && element4 == "5" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "4" && element4 == "4" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "3" && element4 == "3" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if (element1 == "2" && element4 == "2" && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "K") && (element4 == "K" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "Q") && (element4 == "Q" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "J") && (element4 == "J" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "T") && (element4 == "T" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "9") && (element4 == "9" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "8") && (element4 == "8" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "7") && (element4 == "7" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "6") && (element4 == "6" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "5") && (element4 == "5" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "4") && (element4 == "4" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "3") && (element4 == "3" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "2") && (element4 == "2" || element4 == "A") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "K") && (element4 == "K" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "Q") && (element4 == "Q" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "J") && (element4 == "J" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "T") && (element4 == "T" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "9") && (element4 == "9" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "8") && (element4 == "8" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "7") && (element4 == "7" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "6") && (element4 == "6" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "5") && (element4 == "5" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "4") && (element4 == "4" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "3") && (element4 == "3" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "2") && (element4 == "2" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "Q") && (element4 == "Q" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "Q") && (element4 == "Q" || element4 == "K") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "Q" || element1 == "J") && (element4 == "J" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "Q" || element1 == "T") && (element4 == "T" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "Q" || element1 == "9") && (element4 == "9" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "Q" || element1 == "8") && (element4 == "8" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "Q" || element1 == "7") && (element4 == "7" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "Q" || element1 == "6") && (element4 == "6" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "Q" || element1 == "5") && (element4 == "5" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "Q" || element1 == "4") && (element4 == "4" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "Q" || element1 == "3") && (element4 == "3" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "Q" || element1 == "2") && (element4 == "2" || element4 == "Q") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "A" || element1 == "J") && (element4 == "J" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "J") && (element4 == "J" || element4 == "K") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "Q" || element1 == "J") && (element4 == "J" || element4 == "Q") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "J" || element1 == "T") && (element4 == "T" || element4 == "J") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "J" || element1 == "9") && (element4 == "9" || element4 == "J") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "J" || element1 == "8") && (element4 == "8" || element4 == "J") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "J" || element1 == "7") && (element4 == "7" || element4 == "J") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "J" || element1 == "6") && (element4 == "6" || element4 == "J") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "J" || element1 == "5") && (element4 == "5" || element4 == "J") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "J" || element1 == "4") && (element4 == "4" || element4 == "J") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << "%BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "J" || element1 == "3") && (element4 == "3" || element4 == "J") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl << "%50 FOLD" << endl;
		}
		else if ((element1 == "J" || element1 == "2") && (element4 == "2" || element4 == "J") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << "%25 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl << "%75 FOLD" << endl;
		}
		else if ((element1 == "A" || element1 == "T") && (element4 == "T" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "T") && (element4 == "T" || element4 == "K") && element2 != element4 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "Q" || element1 == "T") && (element4 == "T" || element4 == "Q") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "J" || element1 == "T") && (element4 == "T" || element4 == "J") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "T" || element1 == "9") && (element4 == "9" || element4 == "T") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "T" || element1 == "8") && (element4 == "8" || element4 == "T") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "T" || element1 == "7") && (element4 == "7" || element4 == "T") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "T" || element1 == "6") && (element4 == "6" || element4 == "T") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "T" || element1 == "5") && (element4 == "5" || element4 == "T") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "A" || element1 == "9") && (element4 == "9" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "9") && (element4 == "9" || element4 == "K") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "Q" || element1 == "9") && (element4 == "9" || element4 == "Q") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "J" || element1 == "9") && (element4 == "9" || element4 == "J") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "T" || element1 == "9") && (element4 == "9" || element4 == "T") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "T" || element1 == "7") && (element4 == "7" || element4 == "T") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "T" || element1 == "6") && (element4 == "6" || element4 == "T") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "T" || element1 == "5") && (element4 == "5" || element4 == "T") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "A" || element1 == "9") && (element4 == "9" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "9") && (element4 == "9" || element4 == "K") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "Q" || element1 == "9") && (element4 == "9" || element4 == "Q") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "J" || element1 == "9") && (element4 == "9" || element4 == "J") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "T" || element1 == "9") && (element4 == "9" || element4 == "T") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "9" || element1 == "8") && (element4 == "8" || element4 == "9") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "9" || element1 == "7") && (element4 == "7" || element4 == "9") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "9" || element1 == "6") && (element4 == "6" || element4 == "9") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "9" || element1 == "5") && (element4 == "5" || element4 == "9") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "A" || element1 == "8") && (element4 == "8" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "8") && (element4 == "8" || element4 == "K") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "Q" || element1 == "8") && (element4 == "8" || element4 == "Q") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "J" || element1 == "8") && (element4 == "8" || element4 == "J") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%50 FOLD" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "T" || element1 == "8") && (element4 == "8" || element4 == "T") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%50 FOLD" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "9" || element1 == "8") && (element4 == "8" || element4 == "9") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%50 FOLD" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "8" || element1 == "7") && (element4 == "7" || element4 == "8") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "8" || element1 == "6") && (element4 == "6" || element4 == "8") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "8" || element1 == "5") && (element4 == "5" || element4 == "8") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "8" || element1 == "4") && (element4 == "4" || element4 == "8") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "A" || element1 == "7") && (element4 == "7" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "7") && (element4 == "7" || element4 == "K") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "8" || element1 == "7") && (element4 == "7" || element4 == "8") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%50 FOLD" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "7" || element1 == "6") && (element4 == "6" || element4 == "7") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "7" || element1 == "5") && (element4 == "5" || element4 == "7") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "7" || element1 == "4") && (element4 == "4" || element4 == "7") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "A" || element1 == "6") && (element4 == "6" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "K" || element1 == "6") && (element4 == "6" || element4 == "K") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%50 FOLD" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "7" || element1 == "6") && (element4 == "6" || element4 == "7") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%75 FOLD" << endl << "%25 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "6" || element1 == "5") && (element4 == "5" || element4 == "6") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "6" || element1 == "4") && (element4 == "4" || element4 == "6") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "6" || element1 == "3") && (element4 == "3" || element4 == "6") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%50 FOLD" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "A" || element1 == "5") && (element4 == "5" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "5" || element1 == "4") && (element4 == "4" || element4 == "5") && element2 == element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "5" || element1 == "3") && (element4 == "3" || element4 == "5") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "A" || element1 == "4") && (element4 == "4" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R'))
		{
			cout << "CONGRATULATIONS" << endl;
		}
		else if ((element1 == "4" || element1 == "3") && (element4 == "3" || element4 == "4") && element2 == element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "A" || element1 == "3") && (element4 == "3" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "3" || element1 == "2") && (element4 == "2" || element4 == "3") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "%50 FOLD" << endl << "%50 BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else if ((element1 == "A" || element1 == "2") && (element4 == "2" || element4 == "A") && element2 != element5 && (response == 'r' || response == 'R' || response == 'f' || response == 'F'))
		{
			cout << "CONGRATULATIONS" << endl << "BORDERLINE HANDS ONLY RAISE TIGHT OR WEAKER PLAYERS" << endl;
		}
		else
		{
			fold();
		}
		finish();
	}
	else if (element3 == "Small Blind")
	{
		small_blind();
		finish();
	}
	else if (element3 == "Big Blind")
	{
		cout << "YOU'VE ALREADY WON" << endl;
		cout << "BECAUSE NO ONE WANTS TO PLAY" << endl;
		finish();
	}
}