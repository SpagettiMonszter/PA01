/*
Assignment: PA01
Name: Tess Mulkey
NSHE: 8000138541
Problem 4: Heavy Shipping
*/

#include <iostream>
#include <vector>

using namespace std;


int main()
{
    int n = 0;
    int m = 0;
    cin >> n >> m; // read in number of intervals for n and m

    vector<pair<int, int>> courier1(n), courier2(m);
    for (int index = 0; index < n; index++)
    {
        int l = 0;
        int r = 0;
        cin >> l >> r; // read interval start/stop days
        courier1[index] = {l, r}; // store values in vector courier1
    }

    for (int index = 0; index < m; index++)
    {
        int l = 0;
        int r = 0;
        cin >> l >> r; // read interval start/stop days
        courier2[index] = {l, r}; // store values in vector courier2
    }

    int totalDays = 0;







}
