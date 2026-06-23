#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int adjacent_find_main() {
    vector<string> ways_to_remove_ads = {"paying", "ad_blocker", "ad_blocker", "diy_no_ads_solution"};
    auto it = adjacent_find(ways_to_remove_ads.begin(), ways_to_remove_ads.end());

    return 0;
}
