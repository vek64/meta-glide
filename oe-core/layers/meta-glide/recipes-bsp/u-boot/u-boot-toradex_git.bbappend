DESCRIPTION="Set U-boot serial console to UARTB"

FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRC_URI_append += " \
	file://consol_to_UARTB.patch \
"