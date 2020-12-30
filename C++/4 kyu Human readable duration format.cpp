#include <string>

std::string format_duration(int seconds) {
    std::string good_format;
    if (seconds == 0) return "now";
    int counter = 0;
    int tmp, tmp_seconds;
    tmp_seconds = seconds;
    const int years = 365 * 24*60*60,days=24*60*60,hours=60*60;
    tmp = tmp_seconds / (years);
    if (tmp >= 1) {
        counter++;
        tmp_seconds -= (years)*tmp;
    }
    tmp = tmp_seconds / ( days);
    if (tmp >= 1) {
        counter++;
        tmp_seconds -= ( days) * tmp;
    }

    tmp = tmp_seconds / ( hours);
    if (tmp >= 1) {
        counter++;
        tmp_seconds -= ( hours) * tmp;
    }

    tmp = tmp_seconds / ( 60);
    if (tmp >= 1) {
        counter++;
        tmp_seconds -= (60) * tmp;
    }
    if (tmp_seconds > 0) counter++;
    tmp = seconds / (years);
    tmp_seconds = seconds;
    if (tmp >= 1) {
        if (tmp == 1) {
            good_format += std::to_string(tmp) + " year";
            seconds -= tmp * years;
            counter--;
        }
        else {
            good_format += std::to_string(tmp) + " years";
            seconds -= tmp * years;
            counter--;
        }
        if (counter>1) {
            good_format+=", ";
        }
    }
    tmp = seconds / (days);
    if (tmp >= 1) {
        if (counter==1) {
            if (seconds / (tmp * days)==1);
            else {
                good_format += " and ";
                counter--;
            }
        }
        if (tmp == 1) {
            good_format += std::to_string(tmp) + " day";
            seconds -= tmp  * days;
            counter--;
        }
        else {
            good_format += std::to_string(tmp) + " days";
            seconds -= tmp * days;
            counter--;
        }
        if (counter>1) {
            good_format += ", ";
        }
    }
    tmp = seconds / (hours);
    if (tmp >= 1) {
        if (counter==1) {
            if (seconds / (tmp * hours) == 1);
            else {
                good_format += " and ";
                counter--;
            }
        }
        if (tmp == 1) {
            good_format += std::to_string(tmp) + " hour";
            seconds -= tmp * hours;
            counter--;
        }
        else {
            good_format += std::to_string(tmp) + " hours";
            seconds -= tmp  * hours;
            counter--;
        }
        if (counter>1) {
            good_format += ", ";
        }

    }
    tmp = seconds / (60);
    if (tmp >= 1) {
        if (counter==1) {
            if (seconds / (tmp * 60) == 1);
            else {
                good_format += " and ";
                counter--;
            }
        }
        if (tmp == 1) {
            good_format += std::to_string(tmp) + " minute";
            seconds -= tmp  * 60;
        }
        else {
            good_format += std::to_string(tmp) + " minutes";
            seconds -= tmp  * 60;
        }

    }
    tmp = seconds;
    if (tmp >= 1) {
        if(tmp_seconds>60) good_format += " and ";
        if (tmp == 1) {
            good_format += std::to_string(tmp) + " second";
            seconds -= tmp;
        }
        else {
            good_format += std::to_string(tmp) + " seconds";
            seconds -= tmp;
        }
    }
    return good_format;
}
    return good_format;
}
