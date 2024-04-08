// todo: 本节是一个简单得不能再简单的 STL 应用
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Judge
{
    string name;
    float score;
    bool compare(const Judge &a, const Judge &b)
    {
        if (a.score == b.score)
        {
            return a.name < b.name;
        }
        return a.score > b.score;
    }
};

struct Contestant
{
    string name;
    vector<Judge> scores;
    float avg;
};

bool compare(const Contestant &a, const Contestant &b)
{
    if (a.avg == b.avg)
    {
        return a.name < b.name;
    }
    return a.avg > b.avg;
}

vector<Contestant> contestants;

int main()
{
    // 假装我们完成了输入
    for (auto contestant : contestants) // 这里我们没有引用，因为我们不希望修改原始数据
    {
        contestant.scores.erase(max_element(contestant.scores.begin(), contestant.scores.end(), Judge::compare));
        float sum = 0;
        for (auto score : contestant.scores)
        {
            sum += score.score;
        }
        contestant.avg = sum / contestant.scores.size();
    }
    sort(contestants.begin(), contestants.end(), compare);
    for (auto contestant : contestants)
    {
        cout << contestant.name << " " << contestant.avg << endl;
    }
    return 0;
}