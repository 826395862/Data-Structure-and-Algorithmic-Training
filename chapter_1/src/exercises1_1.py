'''  Write a program solve the selection problem.Let k = N / 2 . Draw a table to show 
your runing time about different N. '''
import time
import random
import exercises1_1_package
from exercises1_1_package.bubble import BubbleSort
                        
k = int( input("Please input the postion k(0<k<10001):") )
N = k * 2
kth_element_in_list = 0

int_list_bubble_origin = random.sample(range(1,20000), N)
int_list_algorithm2_origin = int_list_bubble_origin[:]

'''Choice implement in BubbleSort'''
time_cost = time.clock()

BubbleSort(int_list_bubble_origin)
kth_element_in_list = int_list_bubble_origin[k-1]

time_cost = time.clock() - time_cost

exercises1_1_package.bubble.BubblePrintResult(kth_element_in_list, time_cost)

'''Choice implement in algorithm2:Firstly,Sort the first k elements. Then compare the 
latter element with the first k element.'''
time_cost = time.clock()

exercises1_1_package.algorithm2.Algorithm2(int_list_algorithm2_origin)
kth_element_in_list_algorithm2 = int_list_algorithm2_origin[k-1]

time_cost = time.clock() - time_cost

exercises1_1_package.algorithm2.Algorithm2PrintResult(kth_element_in_list, time_cost)