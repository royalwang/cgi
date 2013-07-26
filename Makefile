#!/bin/bash
gcccommand=/usr/bin/gcc
cginame=cgi
mainScript='cgi.c'
httpScript='http/http.c http/request.c http/response.c http/server.c http/route.c'
utilScript='util/tools.c util/dlist.c util/hash.c'
adminScript='admin/test.c'

# all lib
# fastcig
lfcgi_uri=/usr/lib/local/
sqlite=/usr/lib/local/

gcc -o $cginame $mainScript $httpScript $utilScript $adminScript -L$lfcgi_uri -lfcgi -lsqlite3




