std::string bingo(std::vector<std::pair<std::string, int>> ticket, int win){
    int score = 0,index = 0,tmp_index,global_score=0;
    while (ticket.size() > index) {
        tmp_index = 0;
        score = 0;
        while (tmp_index < ticket[index].first.size()) {
            if (((int)(ticket[index].first[tmp_index])) == ticket[index].second)
                score++;
            tmp_index++;
            
        }
        if (score > 0) global_score++;

        index++;
    }
    if (global_score >= win) return  "Winner!";
    else {
        return "Loser!";
    }
}
