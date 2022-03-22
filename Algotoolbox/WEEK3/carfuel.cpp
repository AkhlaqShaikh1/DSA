#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::max;
using std::vector;

int compute_min_refills(int dist, int tank, vector<int> &stops)
{
    // write your code here
    /* int minrefilss=0;
    while(tank!=0){
        for(int i=0;i< stops.size();i++){
            if(dist >=stops[i] && tank <= dist && tank > stops[i]){
                minrefilss++;
                dist -= stops[i];
            }
        }
        return minrefilss;
    } */
    /* int numRefills = 0, currentRefills = 0, limit = tank;
    // while (currentRefills <= stops.size()){
    //     int lastRefills = currentRefills;
    //     while(currentRefills<=stops.size() &&(stops[currentRefills+1]-stops[lastRefills] <=tank)){
    //         currentRefills++;
    //     }
    //     if(currentRefills >= stops.size() ) return -1;
    //     if(currentRefills <= stops.size()){
    //         numRefills++;
    //     }
    // }
    // return numRefills;
    while (limit <=dist)
    {
        if (currentRefills >= stops.size() || stops[currentRefills] > limit)
        {
            return -1;
        }

        while (currentRefills < stops.size() - 1 && (stops[currentRefills] <= limit))
        {
            currentRefills++;
        }
        numRefills++;
        limit = stops[currentRefills] + tank;
        currentRefills++;
    }
    return numRefills; */
    vector<int> x = stops;
    int n = stops.size();
    int numRefills = 0;
    int currentPosition = 0;
    int lastPosition;
    int currentFuel = tank;
    while(currentPosition <= n){
    lastPosition = currentPosition;

    while(currentPosition <= n  &&  (x[currentPosition + 1] - x[lastPosition]) <= tank) {
    currentPosition++;
    }

    if (currentPosition == lastPosition) return -1; 
    if (currentPosition <= n) numRefills ++;
}

return numRefills;
}

int main()
{
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}
