
1. Build the docker image & run it:
 $ docker build -f Dockerfile . -t toradex-yotco
 $ ./run_dock.sh
2. Get the toradex configurations (in the docker image at /home/yocto/oe-core, this is the mounted folder if you run with ./run_dock.sh):
 $ repo init -u http://git.toradex.com/toradex-bsp-platform.git -b LinuxImageV2.8
3. update/fetch the repos:
 $ repo sync
4. setup the bitbake environemnt:
 $ . export
5.1 Now one can build the toradex colibri t30 image:
 $ bitbake angstrom-lxde-image

or 5.2 build only xcsoar:
 $ bitbake xcsoar-7.0
 
 This is all heavily inspired / copy and pasted from:
  1. https://developer.toradex.com/knowledge-base/board-support-package/openembedded-(core)
  2. the webinars found within the above page
  3 https://github.com/Openvario/meta-openvario


Then you can populate the sdk, so one can cross-compile by hand (I think),
  $ bitbake angstrom-lxde-image -c populate_sdk

You can now also generate the SD Card to deploy onto the board:
 1. unpack the generated image found here (as sudo to maintain the folder structure)
  $BASEDIR/oe-core/deploy/images/colibri-t30/
 2. go to the directory you unpacked it and run the update script:
  $ ./update.sh
