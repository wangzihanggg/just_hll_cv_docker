- # Docker打包HLL_CV记录

  ### 思路

  1. sed换清华源
  2. apt update 
  3. 安装git
  4. clone安装opencv的脚本
  5. clone cv工程
  6. clone运行脚本
  7. 运行

  

  ### 安装Qt5

  ```bash
  apt install qt5-default qtcreator
  ```

  

  ### QT Unknown module(s) in QT: serialport解决方法

  ```bash
  sudo apt-get install libqt5serialport5
  sudo apt-get install libqt5serialport5-dev
  ```

  

  ### JUST_HLL_CV_Docker X11启动命令

  ```bash
  sudo apt-get install x11-xserver-utils
  xhost +
  sudo cp -p /etc/ssh/ssh_config /etc/ssh/ssh_config.BK
  sudo vi /etc/ssh/ssh_config
  ```


  ```
  Host *
     ForwardAgent yes
     ForwardX11 yes
     ForwardX11Trusted yes
  ```

  ```bash
  docker run -it -v /tmp/.X11-unix:/tmp/.X11-unix -e DISPLAY=$DISPLAY --env="QT_X11_NO_MITSHM=1" 镜像名
  ```

  https://blog.csdn.net/level_code/article/details/125534607

  

  ### 向容器中映射相机和串口

  - 直接映射 /dev/video0 和 /dev/ttyUSB0

  ```bash
  docker run --rm --name justhllcv -it -v /tmp/.X11-unix:/tmp/.X11-unix --device /dev/ttyUSB0:/dev/ttyUSB0 --device /dev/video0:/dev/video0  -e DISPLAY=$DISPLAY --env="QT_X11_NO_MITSHM=1" 镜像名
  ```

  - 映射整个/dev文件夹

  ```bash
  docker run --name justhllcv -it -v /tmp/.X11-unix:/tmp/.X11-unix -v /dev:/dev -e DISPLAY=$DISPLAY --env="QT_X11_NO_MITSHM=1" 镜像名
  测试不成功   报错：QIODevice::write (HCVC::Serial): device not open
  ```

  