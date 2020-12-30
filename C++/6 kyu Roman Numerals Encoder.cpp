std::string solution(int number) {
    std::unordered_map<std::string, int> unorderedmap;
    unorderedmap["I"] = 1;
    unorderedmap["IV"] = 4;
    unorderedmap["V"] = 5;
    unorderedmap["IX"] = 9;
    unorderedmap["X"] = 10;
    unorderedmap["XL"] = 40;
    unorderedmap["L"] = 50;
    unorderedmap["XC"] = 90;
    unorderedmap["C"] = 100;
    unorderedmap["CD"] = 400;
    unorderedmap["D"] = 500;
    unorderedmap["CM"] = 900;
    unorderedmap["M"] = 1000;
    std::string value;
    auto p1 = std::pair<std::string,int>("I", 1);
    while (number > 0) {
        for (auto& elemenent : unorderedmap) {
            if ((elemenent.second > p1.second)&& elemenent.second<=number) {
                p1.first = elemenent.first;
                p1.second = elemenent.second;
            }
        }
        value += p1.first;
        number -= p1.second;
        p1.first = "I";
        p1.second = 1;

    }
    unorderedmap.erase(unorderedmap.begin(), unorderedmap.end());
    return value;
}
