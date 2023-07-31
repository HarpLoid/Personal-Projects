#!/usr/bin/python3

import json

with open('MOCK_DATA.json', "r") as f:
    data = f.read()

f.close()

print(data)