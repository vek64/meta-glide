DESCRIPTION = "Controller Area Network interface module for Python"
SECTION = "devel/python"
LICENSE = "LGPLv2.1+ & LGPLv3"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=e6a600fd5e1d9cbde2d983680233ad02"

PYPI_PACKAGE = "python-can"
PYPI_PACKAGE_EXT = "tar.gz"
BBCLASSEXTEND = "native"

SRC_URI[md5sum] = "b724553a330478270267380b4888a18e"
SRC_URI[sha256sum] = "5fefb5c1e7e7f07faefc02c6eac79f9b58376f007048a04d8e7f325d48ec6b2e"

inherit pypi