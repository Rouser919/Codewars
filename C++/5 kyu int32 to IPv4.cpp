#include <cmath>
std::string uint32_to_ip(uint32_t ip) {
    std::string x;
    int tmp = ip / pow(256, 3);
    if (tmp >= 1) {
        x += (std::to_string(tmp));
        ip = ip - tmp * pow(256, 3);
        x.push_back('.');
    }
    else {
        x+="0.";
    }
    tmp = ip / pow(256, 2);
    if (tmp >= 1) {
        x += (std::to_string(tmp));
        ip = ip - tmp * pow(256, 2);
        x.push_back('.');
    }
    else {
        x+="0.";
    }
    tmp = ip / pow(256, 1);
    if (tmp >= 1) {
        x += (std::to_string(tmp));
        ip = ip - tmp * pow(256, 1);
        x.push_back('.');
    }
    else {
        x+="0.";
    }
    tmp = ip / pow(256, 0);
    if (tmp >= 1) {
        x += (std::to_string(tmp));
        ip = ip - tmp * pow(256, 0);
    }
    else {
        x.push_back('0');
    }
    return x;
}
