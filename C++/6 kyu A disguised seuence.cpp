bool chessBoardCellColor(std::string cell1, std::string cell2) {
    bool color_cell1= 1;// 1==dark
    char x,tmp_x;
    bool color_cell2 = 1;// 1 == dark;
    x = 'A';
    while(cell1[0]!=x){
        if (color_cell1 == 1) color_cell1 = 0;
        else {
            color_cell1 = 1;
        }
        x++;
    }
    tmp_x =  '1';
    while (cell1[1] != tmp_x) {
        if (color_cell1 == 1) color_cell1 = 0;
        else {
            color_cell1 = 1;
        }
        tmp_x++;
    }
    x = 'A';
    tmp_x = '1';
    while (cell2[0] != x) {
        if (color_cell2 == 1) color_cell2 = 0;
        else {
            color_cell2 = 1;
        }
        x++;
    }
    tmp_x = '1';
    while (cell2[1] != tmp_x) {
        if (color_cell2 == 1) color_cell2 = 0;
        else {
            color_cell2 = 1;
        }
        tmp_x++;

    }
    if (color_cell2 == color_cell1) return true;
    return false;
    //your code here
}
