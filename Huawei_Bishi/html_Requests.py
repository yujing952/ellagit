#!/usr/bin/python
# -*- coding: utf-8 -*-
from urllib import response

import requests

x = requests.get('https://www.runoob.com/')

# print(x.text)

# return http status code
print(x.status_code)

print(x.reason)

print(x.apparent_encoding)

