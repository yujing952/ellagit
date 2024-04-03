#!/usr/bin/python3

import time
from selenium import webdriver
from selenium.common import NoSuchElementException
from selenium.webdriver.common.by import By
from selenium.webdriver import ActionChains

browser = webdriver.Edge()

browser.get("http:www.baidu.com")
logo = browser.find_element(By.ID, 'result_logo')
print(logo.get_attribute('id'))

print(browser.get_cookies())
browser.add_cookie({'name': 'name', 'domain': 'www.baidu.com', 'value': 'germey'})
print("-------1------")
print(browser.get_cookies())

browser.delete_all_cookies()
print("-------2------")
print(browser.get_cookies())

# -------------------------------
"""
browser.implicitly_wait(10)
browser.get("https://www.baidu.com")
inputting = browser.find_element(By.CLASS_NAME, 's_ipt')
print(inputting)
print(inputting.get_attribute('name'))
print(inputting.get_attribute('type'))
print(inputting.get_attribute('id'))
"""

# -------------------------------
"""
# case-3
url = 'http://www.runoob.com/try/try.php?filename=jqueryui-api-droppable'
browser.get(url)

source = browser.find_element(By.CSS_SELECTOR, '#draggable')
target = browser.find_element(By.CSS_SELECTOR, '#droppable')

actions = ActionChains(browser)
actions.drag_and_drop(source,target)
actions.perform()
"""

# -------------------------------
"""
# case-2
url = 'http://www.runoob.com/try/try.php?filename=jqueryui-api-droppable'
browser.get(url)
browser.switch_to.frame('iframeResult')

source = browser.find_element(By.CSS_SELECTOR, '#draggable')
print(source)
try:
    logo = browser.find_element(By.CLASS_NAME, 'logo')
except NoSuchElementException:
    print('NO LOGO')
browser.switch_to.parent_frame()
logo = browser.find_element(By.CLASS_NAME, 'logo')
print(logo)
"""

# -------------------------------
"""
# case-1
browser.execute_script("window.scrollTo(0, document.body.scrollHeight)")
browser.execute_script('alert("To Bottom")')
time.sleep(5)

browser.set_window_size(500, 500)
print(browser.title)
print(browser.current_url)
print(browser.name)
time.sleep(5)

element = browser.find_element(by=By.ID, value="toolbar-search-input")
print("element: ", element)
"""


time.sleep(5)
browser.close()
