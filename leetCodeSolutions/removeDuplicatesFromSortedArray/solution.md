# 26. Remove Duplicates from Sorted Array Soltion

## __Problem:__

![image](https://github.com/isleyen/leetCodeSolution/assets/136992260/1d7d36b6-d19e-457d-8a98-9bf87e68548e)

![image](https://github.com/isleyen/leetCodeSolution/assets/136992260/c8599994-6b90-4f4e-a3f0-adc12a58bd57)

## __Solution:__

![image](https://github.com/isleyen/leetCodeSolution/assets/136992260/90ca2895-f23b-48f9-a3fc-9e24dcd0bbad)

## __Coding Description:__

+ First if loop, checks if the directory is empty.
+ The variable we define as "k" stores the amount of different numbers.
+ We automatically count the first number as different because since it's the firstt number, we'll compare it with other numbers.
+ The for loop starts spinning from the part with index 1 becasue we assigned the index 0 to k value.
+ If loop compares the number in the for loop and the number before it.
+ If two numbers are different, increase k by 1.

> [!WARNING]
> We write the code according to this information.
> ![image](https://github.com/isleyen/leetCodeSolution/assets/136992260/5b4ef55b-e3fd-4792-9a46-8377a9fa7dc7)



