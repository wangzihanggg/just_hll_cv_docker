FROM ubuntu:18.04
RUN sed -i "s/security.ubuntu.com/mirrors.aliyun.com/" /etc/apt/sources.list && \
    sed -i "s/archive.ubuntu.com/mirrors.aliyun.com/" /etc/apt/sources.list && \
    sed -i "s/security-cdn.ubuntu.com/mirrors.aliyun.com/" /etc/apt/sources.list
RUN apt clean -y
RUN apt update -y
RUN apt install git -y
RUN git clone https://gitee.com/wangzihang_02/HLL_CV_DOCKER.git
WORKDIR HLL_CV_DOCKER
RUN chmod +x install_opencv.sh
RUN ./install_opencv.sh
WORKDIR /HLL_CV_DOCKER/JUST_HLL_Robomaster_CV
RUN apt install nano qt5-default qtcreator libqt5serialport5 libqt5serialport5-dev -y
RUN qmake JUST_HLL_Robomaster_CV.pro
RUN make clean
RUN make -j8
RUN apt clean -y

