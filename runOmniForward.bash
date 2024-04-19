rm -rf result.txt
rm -rf main
g++ -o main *.cpp *.h
cat inputs/testOmniForward.txt | ./main

if [ -f "result.txt" ]; then
  HORZ_CHECK=$(diff -b -B result.txt golden/solOmniForward.txt)
  if [ "$HORZ_CHECK" !=  "" ]; then
    echo "Omni: Forward - FAIL"
  else
    echo "Omni: Forward - PASS"
  fi 
else
  echo "Omni: Forward - FAIL (MISSING FILE)"
fi
