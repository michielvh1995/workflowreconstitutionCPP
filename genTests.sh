rm preliminary.csv ./test/*
python3 python/generateRunScript.py > test.sh
cd ./Release
make

