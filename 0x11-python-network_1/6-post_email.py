#!/usr/bin/python3
"""A  script that:
- consumes an URL inculding the email address
- forwards POST request to correct URL with email as the parameter
- shows body of response.
"""
import sys
import requests


if __name__ == "__main__":
    url = sys.argv[1]
    value = {"email": sys.argv[2]}

    r = requests.post(url, data=value)
    print(r.text)
