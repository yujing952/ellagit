#!/usr/bin/python3

def pay_status(result):
    if result.get("code") == 0:
        return "pay success"
    elif result.get("code") == 30000:
        return "pay failed: %s" % result.get("msg")
    elif result.get("code") == 30001:
        return "pay failed: %s" % result.get("msg")
    elif result.get("code") == 30002:
        return "pay failed: %s" % result.get("msg")
    elif result.get("code") == 201102:
        return "pay failed: %s" % result.get("msg")
    else:
        return "pay failed: system exception, unknown error"
