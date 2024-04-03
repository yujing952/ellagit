#!/usr/bin/python3

import time
from selenium import webdriver
from selenium.webdriver.common.by import By


browser = webdriver.Edge()

browser.get("https://www.taobao.com")
time.sleep(5)

print(browser.title)
print(browser.current_url)
print(browser.name)

input_element = browser.find_element(By.ID, "q")
# print('input_1st_element:', input_element)

"""
input_2nd_element = browser.find_element(By.CSS_SELECTOR, '#q')
input_3rd_element = browser.find_element(By.XPATH, '//*[@id="q"]')
print('input_2nd_element:', input_2nd_element)
print('input_2nd_element:', input_3rd_element)
"""

input_element.send_keys("iPhone")
time.sleep(5)
input_element.clear()

input_element.send_keys("男士内裤")
button = browser.find_element(By.CLASS_NAME, "btn-search")

button.click()

time.sleep(5)
browser.close()
