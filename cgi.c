#include "cgi.h"

static void init(){
    serverInit();    
}

static void test(){
    pstruct scream = explode(SERVER.scream,'&');
}

int main (){

    //init();

    while (FCGI_Accept() >= 0) {
        printf("Content-type: text/html\r\n""\r\n""<title>FastCGI</title>");
        init();
        test();
    } /* while */

    return 0;
}
