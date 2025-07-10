# import sys
# sys.path.append('build')

import hello_world
print(hello_world.say_hello())

my_list = [1,2,3,4,5]
sum_result = hello_world.sum_array(my_list)
print(f"The sum of {my_list} is {sum_result}")