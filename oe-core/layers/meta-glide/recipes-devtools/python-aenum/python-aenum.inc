DESCRIPTION = "Advanced Enumerations (compatible with Python's stdlib Enum), NamedTuples, and NamedConstants"
SECTION = "devel/python"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://PKG-INFO;md5=798e5d1f0892eeada1fde204f2b6f607"

### SRC_URI = "https://files.pythonhosted.org/packages/6f/6a/8ed729e0add885d7a559ebb06133029b1f8c4bd66cbf1bdee1ec969fb310/aenum-2.2.3.tar.gz"

PYPI_PACKAGE = "aenum"
PYPI_PACKAGE_EXT = "tar.gz"
BBCLASSEXTEND = "native"

SRC_URI[md5sum] = "026786dbb37c15c2c8dc91fbf5828e97"
SRC_URI[sha256sum] = "a4334cabf47c167d44ab5a6198837b80deec5d5bad1b5cf70c966c3a330260e8"

inherit pypi