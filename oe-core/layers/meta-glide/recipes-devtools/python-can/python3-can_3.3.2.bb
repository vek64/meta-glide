inherit setuptools3
require python-can.inc

# Uncomment the lines below and add runtime dependencies if any. Our example does not have any dependencies.
RDEPENDS_${PN} += "python3 python3-aenum python3-wrapt"
#RDEPENDS_${PN}_class-native = ""