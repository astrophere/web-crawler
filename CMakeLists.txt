cmake_minimum_required(VERSION 3.15)
project(WebCrawler)

set(CMAKE_CXX_STANDARD 17)

# Set CURL paths
set(CURL_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/curl/include")
set(CURL_LIBRARY "${CMAKE_CURRENT_SOURCE_DIR}/curl/lib/libcurl.dll")

set(CMAKE_PREFIX_PATH "C:/Coding/web crawler/curl")
include_directories(${CURL_INCLUDE_DIR})
#find_package(CURL REQUIRED)

set(SOURCES main.cpp)
add_executable(WebCrawler ${SOURCES})

if (CURL_FOUND)
    target_link_libraries(WebCrawler libcurl)
else()
    message("ERROR culr library not found")
endif()

target_link_libraries(WebCrawler libcurl)
