FILESEXTRAPATHS_prepend := "${THISDIR}/linux-toradex:"

SRC_URI += " \
    	file://CAN.cfg \
	"

doconfigure_prepend () {
    echo "CONFIG_CAN=y" >> ${WORKDIR}/defconfig
    echo "CONFIG_CAN_RAW=y" >> ${WORKDIR}/defconfig
    echo "CONFIG_CAN_BCM=y"  >> ${WORKDIR}/defconfig
    echo "CONFIG_CAN_DEV=y" >> ${WORKDIR}/defconfig
    echo "CONFIG_CAN_MCP251X=y"  >> ${WORKDIR}/defconfig
}
