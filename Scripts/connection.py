import requests

timeout = 3

def is_down():
    try:
        requests.head("https://www.google.com/", timeout=timeout)
        return True
    except requests.ConnectionError:
        return False

r = is_down()
if r == True:
    print(" 󰌗 ")
else:
    print(" 󰌗 ")
