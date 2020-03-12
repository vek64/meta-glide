DESCRIPTION = "Module for decorators, wrappers and monkey patching."
SECTION = "devel/python"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://PKG-LICENSE.txt;md5=e6a600fd5e1d9cbde2d983680233ad02"

PYPI_PACKAGE = "python-wrapt"
PYPI_PACKAGE_EXT = "tar.gz"
BBCLASSEXTEND = "native"

SRC_URI[md5sum] = "6d56ed0de4336462a73350341462f45e"
SRC_URI[sha256sum] = "e43cefbe88c5fd371f4cf0cf5eb3feccd07515af9fd6cf7dbf1d1793a797"

inherit pypi