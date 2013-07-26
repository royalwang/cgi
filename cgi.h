#include <stdio.h>
#include <sqlite3.h>

//#define _cgi_debug_

#ifndef _cgi_debug_
#include <fcgi_stdio.h>
#endif

#ifndef __cgi_h
#define __cgi_h
#endif

#ifndef __http_http_h
#include "http/http.h"
#endif

#ifndef __http_response_h
#include "http/response.h"
#endif

#ifndef __http_route_h
#include "http/route.h"
#endif


#define _free(point) free(point); point = NULL;
