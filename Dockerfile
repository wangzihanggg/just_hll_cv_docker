FROM ubuntu:18.04
RUN sed -i s/archive.ubuntu.com/mirrors.aliyun.com/g /etc/apt/sources.list
RUN apt update -y
RUN apt install git -y
RUN git clone https://gitee.com/wangzihang_02/HLL_CV_DOCKER.git
WORKDIR HLL_CV_DOCKER
RUN chmod +x install_opencv.sh
RUN ./install_opencv.sh
WORKDIR /HLL_CV_DOCKER/JUST_HLL_Robomaster_CV
RUN qmake JUST_HLL_Robomaster_CV.pro
RUN make clean
RUN make -j8

