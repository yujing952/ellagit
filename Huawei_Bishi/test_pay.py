#!/usr/bin/python3

from pay import pay_status

"""
0 - success
30000 - parameters error
30001 - No sufficient funds
30002 -  get up the max limitation
201102 - the bank care  has been frozen
"""


def test_pay_success():
    result = {
            "code": 0,
            "msg": "success",
            "data": []
        }
    assert pay_status(result) == "pay success"


def test_pay_failed_30000():
    result = {
            "code": 30000,
            "msg": "parameters error",
            "data": []
        }
    assert pay_status(result) == "pay failed: parameters error"


def test_pay_failed_30001():
    result = {
            "code": 30001,
            "msg": "No sufficient funds",
            "data": []
        }
    assert pay_status(result) == "pay failed: No sufficient funds"


def test_pay_failed_30002():
    result = {
            "code": 30002,
            "msg": "get up the max limitation",
            "data": []
        }
    assert pay_status(result) == "pay failed: get up the max limitation"


def test_pay_failed_201102():
    result = {
            "code": 201102,
            "msg": "the bank care  has been frozen",
            "data": []
        }
    assert pay_status(result) == "pay failed: the bank care  has been frozen"


def test_pay_failed_unknown_error():
    result = {
            "code": 500,
            "msg": "system exception, unknown error",
            "data": []
        }
    assert pay_status(result) == "pay failed: system exception, unknown error"


test_pay_success()
test_pay_failed_30000()
test_pay_failed_30001()
test_pay_failed_30002()
test_pay_failed_201102()
test_pay_failed_unknown_error()


