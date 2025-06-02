#include "curl/curl.h"

#include <iostream>

int main() {
    // testing
    std::cout << "Hello world!" << std::endl;

    curl_global_init(CURL_GLOBAL_DEFAULT);

    return 0;
}