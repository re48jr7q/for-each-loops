#include <iostream>

int main()
{
    constexpr int scores[]{ 84, 92, 76, 81, 56 };
    int maxScore{ 0 };
    for (auto score : scores)
    {
        if (score > maxScore)
        {
            maxScore = score;
        }
    }
    std::cout << "The highest score is: " << maxScore << '\n';

    return 0;
}
