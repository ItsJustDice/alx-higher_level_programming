#!/bin/bash
#Get the byte size of HTTP response header for the given URL.
curl -s "$1" | wc -c
