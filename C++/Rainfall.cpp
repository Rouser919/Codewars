#include <string>
#include <cmath>
class Rainfall
{
public:
    static double mean(std::string town, const std::string &strng);
    static double variance(std::string town, const std::string &strng);
    static double summOfValues(std::string town, const std::string& data, bool isMean);
};

double Rainfall::summOfValues(std::string town, const std::string& data, bool isMean){
  auto townPos = data.find(town + ":");
  if (townPos == std::string::npos ) return -1;
  double valuesCount = 0, summ = 0, avg = 0;
  std::string number = "";
  if (!isMean) avg = summOfValues(town, data, true);
  if (avg == -1) return -1;
  for (auto i = townPos + town.length() + 1; ; i++){
    if (data[i] == '\n' || data[i] == '\0'){
      if (isMean)summ += std::stod(number);
      else summ += ((std::stod(number) - avg) * (std::stod(number) - avg));
      valuesCount++;
      break;
    }
    else if (((data[i] >= '0') && (data[i] <= '9')) || (data[i] == '.')){
      number += data[i];
    }
    else if (data[i] == ','){
      if (isMean) summ += std::stod(number); 
      else summ += ((std::stod(number) - avg) * (std::stod(number) - avg));
      valuesCount++;
      number = "";
    }
  }
  return valuesCount != 12 ?  -1 : (isMean ? summ / valuesCount : summ / valuesCount);
}

double Rainfall::mean(std::string town, const std::string& data){
  return summOfValues(town, data, true);
}

double Rainfall::variance(std::string town, const std::string& data){
  return summOfValues(town, data, false);
}
