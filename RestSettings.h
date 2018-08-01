#ifndef restsettings_h
#define restsettings_h

#ifndef ROUTES_TOTAL
#define ROUTES_TOTAL 3
#endif

#ifndef ROUTES_LENGHT
#define ROUTES_LENGHT 30
#endif

#ifndef QUERY_LENGTH
#define QUERY_LENGTH 50
#endif

#ifndef BODY_LENGTH
#define BODY_LENGTH 250
#endif

#ifndef HTTP_COMMON_HEADER
//#define HTTP_COMMON_HEADER "HTTP/1.1 200 OK\r\nAccess-Control-Allow-Origin: *\r\nAccess-Control-Allow-Methods: POST, GET, PUT, OPTIONS\r\nContent-Type: text/plain\r\nConnection: close\r\n"
#define HTTP_COMMON_HEADER "HTTP/1.1 200 OK\r\nAccess-Control-Allow-Origin: *\r\nAccess-Control-Allow-Methods: POST, GET, PUT, OPTIONS\r\nContent-Type: application/json\r\nConnection: close\r\n"
#endif

#ifndef OUTPUT_BUFFER_SIZE
#define OUTPUT_BUFFER_SIZE 50
#endif

#define METHODS_LENGTH 7
#define ANY "*"
#define GET "GET"
#define PUT "PUT"
#define HEAD "HEAD"
#define POST "POST"
#define TRACE "TRACE"
#define DELETE "DELETE"
#define OPTIONS "OPTIONS"

#endif
