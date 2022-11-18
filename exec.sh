 #!bin/bash

 
 test=$(head  -n1 $1)

echo $test
 python3 visualizer.py $test