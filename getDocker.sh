sed -i "s/security.ubuntu.com/mirrors.aliyun.com/" /etc/apt/sources.list 
sed -i "s/archive.ubuntu.com/mirrors.aliyun.com/" /etc/apt/sources.list 
sed -i "s/security-cdn.ubuntu.com/mirrors.aliyun.com/" /etc/apt/sources.list
apt update -y
apt install curl
curl -fsSL https://get.docker.com -o get-docker.sh
sh get-docker.sh
usermod -aG docker your-user