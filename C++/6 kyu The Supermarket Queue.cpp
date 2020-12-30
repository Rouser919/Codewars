long queueTime(std::vector<int> customers, int n) {
    if (customers.empty() == 1) {
        return 0;
    }
    long time = 0;
    int i = 0;// index of customers
    int i_new = 0;// index of tab array;
    bool t = 1;
    if (customers.size() < n) n = customers.size();
    std::vector<int> tab;
    while (i < n) {
        tab.push_back(customers[i]);
        i++;
    }
    while (t == 1) {
        i_new = 0;
        while ((i_new < n)  && i<customers.size()) {
            if (tab[i_new] == 0) {
                tab[i_new] = customers[i];
                i++;
            }
            i_new++;
        }
        i_new = 0;
        while (i_new < n) {
            if (tab[i_new] == 0) {
                i_new++;
                continue;
            }
            tab[i_new]--;
            i_new++;
        }
        time++;
        if (((std::count(tab.begin(), tab.end(), 0))==n)&& i==customers.size()) t=0;
    }
    return time;
}
