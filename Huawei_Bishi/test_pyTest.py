#!/usr/bin/python3

import pytest


class TestFunction:
    def test_01(self):
        print('test001')
        assert 1  # 1 is true, 0 is false

    def test_02(self):
        print('test002')
        assert 1 # just to check
