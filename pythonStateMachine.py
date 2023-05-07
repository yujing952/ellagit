#! /usr/bin/python3

from typing import List
import pytest


# Question 1:


def state_machine(inputs):
    """
    State Machine

    Write a function to implement the state machine shown in the diagram below.
    * The initial state of the state machine should be A
    * State machine inputs are expected to be a list of integers provided as an argument to the function
    * The function should output the current state of the state machine

    Grading:
        The majority of points are awarded for correct functionality. Full points will only be awarded for a
        well-designed and scalable solution of a state machine.


         Input = 1   +---------+   Input = 4
       +------------>|         |<------------+
       |             | State A |             |
       |  Input = 2  |         |  Input = 3  |
       |   +-------- +---------+ --------+   |
       |   |                             |   |
       |   V                             V   |
     +---------+      Input = 6      +---------+
     |         |<--------------------|         |
     | State C |                     | State B |
     |         |-------------------->|         |
     +---------+      Input = 5      +---------+

                                     +---------+
                  Input =            |         |
                  Unexpected Value   |  FAULT  |
                 +------------------>|         |
                                     +---------+

    See test_state_machine_example for an example of how your code will be executed.
    """
    return ""


def test_state_machine_example():
    result = state_machine([2, 1, 3, 4, 2, 5])
    assert result == "B"
    result = state_machine([4])
    assert result == "FAULT"


# TODO: Write your test cases for Question 1 here

def test_state_machine():

    # Valid input sequence
    assert state_machine([2, 1, 3, 4, 2, 5]) == "B"
    assert state_machine([2, 3, 5, 3, 6, 6, 5, 1, 2]) == "A"
    assert state_machine([1]) == "A"
    assert state_machine([2, 3, 6, 6, 5]) == "C"
    assert state_machine([4, 4, 4]) == "FAULT"
    assert state_machine([]) == "A" # Empty Input

    # Invalid input sequence
    with pytest.raises(ValueError):
        state_machine("2325")  # Input as string
    with pytest.raises(TypeError):
        state_machine(2325)  # Input as integer
    with pytest.raises(TypeError):
        state_machine(['2', '3', '6', '5'])  # Input as list of strings
    with pytest.raises(ValueError):
        state_machine([10, 11, 12, 13])  # Input outside the range 1-6
    with pytest.raises(ValueError):
        state_machine([1, 2, 6, 7])  # Input outside the range 1-6.


# Question 2:
def find_rotation(integers):
    """
    Given a list of monotonically increasing integers that has been rotated by an arbitrary
    amount X, write a function to return the arbitrary rotation amount X.

    * input is expected to be a list of integers (of arbitrary length) provided as an argument
      to the function
    * output is an integer specifying the rotation amount

    See test_find_rotation_example for an example of how your code will be executed.

    Grading:
        -Majority of points are awarded for correct functionality.
        -Full points are awarded for an efficient/scalable solution that is O(logN). Note that
        the points for efficiency are <5% of the overall test score, don't spend too much time
        on it.
    """
    return -1


def test_find_rotation_example():
    assert 6 == find_rotation([5, 6, 7, 8, 9, 10, 2, 3, 4])
    assert 3 == find_rotation([9, 12, 17, 2, 3, 5, 6, 8])


# TODO: Write your test cases for Question 2 here
def test_find_rotation():
    assert 6 == find_rotation([5, 6, 7, 8, 9, 10, 2, 3, 4])
    assert 3 == find_rotation([9, 12, 17, 2, 3, 5, 6, 8])
    assert 0 == find_rotation([1, 2, 3, 4, 5])
    assert 2 == find_rotation([6, 7, 1, 2, 3, 4, 5])
    assert 0 == find_rotation([1])
    assert 0 == find_rotation([1, 2])

    # Invalid input sequence
    with pytest.raises(TypeError):
        find_rotation("123")  # Input as string
    with pytest.raises(TypeError):
        find_rotation(123)  # Input as integer
    with pytest.raises(TypeError):
        find_rotation(['5', '9', '12'])  # Input as list of strings
    with pytest.raises(TypeError):
        find_rotation([5.4, 9.6, 12])  # Input as list of floats
    with pytest.raises(ValueError):
        find_rotation([])  # Empty Input
    with pytest.raises(ValueError):
        find_rotation([1, 2, 1, 6, 7, 8])  # Unsorted sequence
    with pytest.raises(ValueError):
        find_rotation([1, 3, 8, 10, 20, 30])   # No rotation as sequence is not rotat