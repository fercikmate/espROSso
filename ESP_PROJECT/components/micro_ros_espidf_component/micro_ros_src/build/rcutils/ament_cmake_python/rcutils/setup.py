from setuptools import find_packages
from setuptools import setup

setup(
    name='rcutils',
    version='6.9.8',
    packages=find_packages(
        include=('rcutils', 'rcutils.*')),
)
