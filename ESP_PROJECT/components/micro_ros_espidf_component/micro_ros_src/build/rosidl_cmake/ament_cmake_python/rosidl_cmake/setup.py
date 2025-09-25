from setuptools import find_packages
from setuptools import setup

setup(
    name='rosidl_cmake',
    version='4.9.5',
    packages=find_packages(
        include=('rosidl_cmake', 'rosidl_cmake.*')),
)
