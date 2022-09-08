docker pull wangzihanggg/justhllcv:v3
docker run --name justhllcv -it -v /tmp/.X11-unix:/tmp/.X11-unix --device /dev/ttyUSB0:/dev/ttyUSB0 --device /dev/video0:/dev/video0  -e DISPLAY=$DISPLAY --env="QT_X11_NO_MITSHM=1" wangzihanggg/justhllcv:v3
