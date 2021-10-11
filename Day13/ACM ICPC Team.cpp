int bitWiseOr(string a, string b)
{
    int count = 0;
    for(int i = 0; i<a.length(); i++)
        if(a[i] == '1' || b[i] == '1')count++;
    
    return count;
}

vector<int> acmTeam(vector<string> topic) {
    int teams = 0;
    int maxTopics = 0;
    for (int i =0; i<topic.size()-1; i++) {
        for (int j = i+1; j<topic.size(); j++) {
            int cnt = bitWiseOr(topic[i], topic[j]);
            if(cnt>maxTopics){
                maxTopics = cnt;
                teams = 1;
            }
            else if(cnt == maxTopics){
                teams++;
            }
        }
    }
    
    vector<int> v;
    v.push_back(maxTopics);
    v.push_back(teams);
    return v;

}