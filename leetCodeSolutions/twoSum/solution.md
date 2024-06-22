# Two Sum Solution
Request:

![image](https://github.com/isleyen/leetCodeSolution/assets/136992260/70ff8444-749f-4f89-ad34-2e380e0ae045)

Examples:

![image](https://github.com/isleyen/leetCodeSolution/assets/136992260/148e6aab-ed11-4395-9214-f02c1cc93d75)

## Solution:

![image](https://github.com/isleyen/leetCodeSolution/assets/136992260/4391af46-5cc1-4b55-9fb0-ffb94ae5b79a)


We used two for loops in this problem.

+ The first loop loops through each element of the array.

+ The second loop loops through all elements after the element in the first loop.

> [!IMPORTANT]
> Second loop prevents the same item from being used twice.

Later, We used if loop and checked the target. If the sum of these two values ​​equals the target, the index of these two values ​​is returned. If no solution is found, an empty index is returned.

