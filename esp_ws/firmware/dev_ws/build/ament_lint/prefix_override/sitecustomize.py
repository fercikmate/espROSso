import sys
if sys.prefix == '/home/fercikmate/.espressif/python_env/idf6.0_py3.10_env':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/fercikmate/ftn/osurv/espROSso/esp_ws/firmware/dev_ws/install/ament_lint'
