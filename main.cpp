#include "curl/curl.h"
#include <iostream>

int main() {
    // testing
    curl_version_info_data* data = curl_version_info(CURLVERSION_NOW);
    std::cout << "libcurl version: " << data->version << std::endl;
    
    CURL* curl = curl_easy_init();

    if (curl) {
        curl_easy_setopt(curl, CURLOPT_URL, "https://example.com");
        curl_easy_perform(curl);
        curl_easy_cleanup(curl);
    }

    return 0;
}