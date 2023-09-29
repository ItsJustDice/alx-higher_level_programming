#!/usr/bin/python3
"""A script that:
- consumes an URL,
- send request to URL and shows value
- the X-Request-Id variable found in header response.
"""
import sys
import urllib.request

if __name__ == "__main__":
    url = sys.argv[1]

    request = urllib.request.Request(url)
    with urllib.request.urlopen(request) as response:
        print(dict(response.headers).get("X-Request-Id"))
