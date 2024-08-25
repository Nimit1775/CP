#include <bits/stdc++.h>
using namespace std ;

void solve ()
{
	int n , H , M ;
	cin >> n >> H >> M ;
	int bed_time = H * 60 + M  ;
	int min_sleep_time = 1440  ;
	for  ( int i = 0  ; i < n ; i++)
	{
		int h , m  ;
		cin  >> h  >> m   ;
		int alarm_time = h * 60 +  m;

		int sleep_time = alarm_time - bed_time ;
		if (sleep_time < 0) {
			sleep_time += 1440;
		}

		min_sleep_time = min(sleep_time , min_sleep_time)  ;

	}
	int hours = min_sleep_time / 60  ;
	int mins =  min_sleep_time % 60  ;
	cout  << hours << " " << mins << endl ;
}
int main  ()
{
	int t ;
	cin >> t ;
	while (t--)
	{
		solve()  ;

	}
	return 0  ;
}