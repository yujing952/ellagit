#!/usr/bin/python3

import json

data = {
    'no': 1,
    'name': 'runoob',
    'url': 'http://www.runoob.com'
}

print('\n---python dict -> json object---')
json_str = json.dumps(data)
print('python original data:', repr(data))
print('json object:', json_str)

# transfer JSON object to Python dict
print('\n---json object -> python dict---')
data2 = json.loads(json_str)
print("data2['name']:", data2['name'])
print("data2['url']:", data2['url'])


print('\n---how to handle file?---')
with open('test.json', 'w') as f:
    json.dump(data, f)

with open('test.json', 'r') as f:
    data = json.load(f)
