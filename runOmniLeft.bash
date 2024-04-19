rm -rf result.txt
rm -rf main
g++ -o main *.cpp *.h
cat inputs/testOmniLeft.txt | ./main

if [ -f "result.txt" ]; then
  HORZ_CHECK=$(diff -b -B result.txt golden/solOmniLeft.txt)
  if [ "$HORZ_CHECK" !=  "" ]; then
    echo "Omni: Left - FAIL"
  else
    echo "Omni: Left - PASS"
  fi 
else
  echo "Omni: Left - FAIL (MISSING FILE)"
fi
