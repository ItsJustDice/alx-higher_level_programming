#!/bin/bash
#forwards a GET request to the URL using curl, and display the body of response
curl -sH "X-School-User-Id: 98" "$1"
