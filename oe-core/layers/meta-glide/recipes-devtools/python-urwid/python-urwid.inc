DESCRIPTION = "Urwid is a console user interface library for Python"
SECTION = "devel/python"
LICENSE = "LGPLv2.1+ & GPLv2+"
LIC_FILES_CHKSUM = "file://COPYING;md5=243b725d71bb5df4a1e5920b344b86ad"

PYPI_PACKAGE = "urwid"
PYPI_PACKAGE_EXT = "tar.gz"
BBCLASSEXTEND = "native"

SRC_URI[md5sum] = "41010a5951f084f0f4a1112e602d419a"
SRC_URI[sha256sum] = "0896f36060beb6bf3801cb554303fef336a79661401797551ba106d23ab4cd86"

inherit pypi