# Sophus Submodule
## Install Sophus Submodule
```
git submodule add https://github.com/strasdat/Sophus.git 3rdparty/Sophus
```
## Install Pangolin Submodule
```
git submodule add https://github.com/stevenlovegrove/Pangolin.git  3rdparty/Pangolin
```


## Update Submodule
```
git submodule update --init
```
# Compile And Install
## compile and install Sophus
```
cd [path-to-Sophus]
mkdir build
cd build
cmake ..
make 
sudo make install 
ldconfig // linux
```

## compile and install pangolin
```
cd [path-to-pangolin]
mkdir build
cd build
cmake ..
make 
sudo make install 
ldconfig // linux
```