#include<bits/stdc++.h>
using namespace std   ;
int  main  ()
{
	string s   ;
	cin  >> s  ;
	int upchk , lowchk =  0  ;

	for ( char c : s)
	{

		if (isupper(c)) upchk ++ ;
		else lowchk++   ;

	}
	if (lowchk >= upchk)  transform(s.begin(), s.end(), s.begin(), ::tolower);
	else transform(s.begin(), s.end(), s.begin(), ::toupper);
	cout  << s << endl  ;
	return 0 ;
}
