from setuptools import find_packages
from setuptools import setup

setup(
    name='rosidl_typesupport_c',
    version='3.3.3',
    packages=find_packages(
        include=('rosidl_typesupport_c', 'rosidl_typesupport_c.*')),
)
