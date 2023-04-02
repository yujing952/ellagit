#! /usr/bin/python3
import pytest

a, b = 1, 2


class TestDemo:
    def test_01(self):
        print("test001")
        assert 1

    @pytest.mark.run_these
    def test_02(self):
        print('test002')
        assert b == b

    def test_03(self):
        print('test003')
        assert 1

    @pytest.mark.run_these
    def test_04(self):
        print('test004')
        assert a == a

    if __name__ == '__main__':
        pytest.main(["TestDemo"])
