echo "Poolsize, count, pmut, pxo, goal.Tools.size(), xof, fof, avg fitness, avgtime, corrects" > preliminary.csv
chmod +x ./test/testa.sh
./test/testa.sh &
chmod +x ./test/testb.sh
./test/testb.sh &
chmod +x ./test/testl.sh
./test/testl.sh &
wait
chmod +x ./test/testc.sh
./test/testc.sh &
chmod +x ./test/tests.sh
./test/tests.sh &
chmod +x ./test/teste.sh
./test/teste.sh
