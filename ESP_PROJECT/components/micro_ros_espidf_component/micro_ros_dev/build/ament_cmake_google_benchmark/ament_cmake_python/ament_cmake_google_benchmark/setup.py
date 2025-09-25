from setuptools import find_packages
from setuptools import setup

setup(
    name='ament_cmake_google_benchmark',
    version='2.7.3',
    packages=find_packages(
        include=('ament_cmake_google_benchmark', 'ament_cmake_google_benchmark.*')),
)
