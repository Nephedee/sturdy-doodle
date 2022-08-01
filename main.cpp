#include <iostream>
#include <cpr/cpr.h>
#include <string>

int main() {
    cpr::Response r =  cpr::Get(cpr::Url("http://httpbin.org/html"), cpr::Header({{"text", "html"}}));
    int pos1 = r.text.find("<h1>") + 4;
    int pos2 = r.text.find("</h1>");
    for(int i = pos1; i < r.text.length() && i < pos2; i++){
        std::cout << r.text[i];
    }
    return 0;
}
