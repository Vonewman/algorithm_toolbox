import unittest
import computing_fibonacci3


class TestFib(unittest.TestCase):
    """Unittest test methods for fib"""

    def test_fib_1(self):
        """Test fib with 5"""
        actual   = computing_fibonacci3.fib(5)
        expected = 5
        self.assertEqual(expected, actual)

    def test_fib_2(self):
        """Test fib with 10"""
        actual   = computing_fibonacci3.fib(10)
        expected = 55
        self.assertEqual(expected, actual)


if __name__ == '__main__':
    unittest.main(exit=True)
