set -e
g++ code.cpp -o code
g++ generator.cpp -o gen
g++ brute_force.cpp -o brute_force
for((i = 1; ; i++)) ; do
	 min=1
	 max=60
     number=$(expr $min + $RANDOM % $max)
   #  echo $number
	./gen $number $i > input_file
	./code < input_file > myAnswer
	#./brute_force < input_file > correctAnswer
	#diff -Z myAnswer correctAnswer > /dev/urandom || break
	
	echo "passed test : " $i
	cat input_file
	echo "Your answer is : "
	cat myAnswer
	#echo "Correct answer is : "
	#cat correctAnswer	

done

echo "WA on test : "
cat input_file
echo "Your answer is : "
cat myAnswer
echo "Correct answer is : "
cat correctAnswer	
echo " "
