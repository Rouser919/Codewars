class Kata
{
public:
    std::vector<int> sortArray(std::vector<int> array){
        int index_inner, index_outer;
        int tmp_min , tmp_min_index;
        for (index_outer = 0; index_outer < array.size(); index_outer++) {
            if (array[index_outer] % 2 == 0) continue;
            for (index_inner = index_outer + 1,tmp_min=array[index_outer],tmp_min_index=index_outer; index_inner < array.size(); index_inner++) {
                if ((array[index_inner] < tmp_min) && array[index_inner] % 2 == 1) {
                    tmp_min = array[index_inner];
                    tmp_min_index = index_inner;
                }

            }
            if (array[index_outer] % 2 == 1) {
                std::swap(array[index_outer], array[tmp_min_index]);
            }
        }
        return array;
    }
};
