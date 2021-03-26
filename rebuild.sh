python3 python/generators/imageMagickGenerator.py > src/datagenerators/imagemagickGenerator.cpp
rm -rf ./build/
mkdir ./build/
cd ./build/
cmake -DCMAKE_BUILD_TYPE=Debug ..
make
