//OPTIMISED SOLUTION WHICH USES BINARY SEARCH WHILE TEST CASE 6 FAILS
//NEED ANOTHER WAY TO SOLVE IT
int binarySearch(vector<int> ranked, int elem)
{
    int low = 0;
    int high = ranked.size() - 1;
    while (true)
    {
        int mid = low + (high - low) / 2;

        if (ranked[mid] == elem)
            return mid;

        else if (elem > ranked[mid] && elem < ranked[mid - 1])
            return mid;

        else if (elem < ranked[mid] && elem >= ranked[mid + 1])
            return mid + 1;

        else if (elem > ranked[mid]) //we need to shift right wards
            high = mid - 1;

        else if (elem < ranked[mid])
            low = mid + 1;
    }

    return -1;
}

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player)
{
    //note we don't need to arrange the array
    //again after fixing a rank since the
    //scores of alice is in ascending order
    //and the ranked array is in descending order

    vector<int> v;
    vector<int> rnklist(ranked.size());
    rnklist[0] = 1;
    for (long unsigned int i = 1; i < ranked.size(); i++)
    {
        if (ranked[i] == ranked[i - 1])
            rnklist[i] = rnklist[i - 1];
        else
            rnklist[i] = rnklist[i - 1] + 1;
    }

    for (auto p : player)
    {
        if (p < ranked.back())
            v.emplace_back(rnklist.back() + 1);

        else if (p == ranked.back())
            v.emplace_back(rnklist.back());

        else if (p >= ranked.front())
            v.emplace_back(rnklist.front());

        else
        {
            int index = binarySearch(ranked, p);
            int rnk = rnklist[index];
            v.emplace_back(rnk);
        }
    }

    return v;
}

//********PARTICAL CORRECT COLUTION WITH 4 TEST CASES SHOWING TLE********

// vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player)
// {
// set<int> rnklist;
// for(auto r:ranked)
//     rnklist.emplace(r);

// for(auto p:player)
// {

//     if(p >= *rnklist.begin())
//     {
//         v.push_back(1);
//         rnklist.emplace(p);
//     }

//     else if(p == *rnklist.end()
//     {
//         int rnk = distance(rnklist.begin(), rnklist.end())
//     }
//     if(rnklist.find(p) == rnklist.end())
//     {
//         rnklist.emplace(p);
//         int rnk = distance(rnklist.find(p), rnklist.end());
//         v.emplace_back(rnk);
//     }

//     else {
//         int rnk = distance(rnklist.find(p), rnklist.end());
//         v.emplace_back(rnk);
//     }

// }

//return v;
// }
