'''
Created on 2019年9月26日
define Bubble sort function and PrintResult function
@author: gaoyan
'''
def BubbleSort(list_input):
    'BubbleSort'
    length = len(list_input)
    for i in range(length-1, 0,-1):
        for j in range(i):
            if( list_input[j] < list_input[j+1] ):
                list_input[j], list_input[j+1] = list_input[j+1], list_input[j]

def Algorithm2(list_input):
    'Algorithm2'
    length = len(list_input)
    k = int(length/2)
    
    list_in_part = list_input[0 : k]
    BubbleSort(list_in_part)

    for i in range(k, length - 1):
        if(list_input[i] > list_in_part[k-1]):
            
            for j in range(k):
                if(list_input[i] > list_in_part[j]):
                    list_in_part.insert(j, list_input[i])
                    break
                
    list_input = list_in_part
                
                
def BubblePrintResult(kth_element, time_cost):
    'Print result'
    print("Bubble Sort:\nThe kth element in list is ", kth_element, "Running time is ", time_cost)  
    
def Algorithm2PrintResult(kth_element, time_cost):
    'Algorithm2 result'
    print("Algorithm2:\nThe kth element in list is ", kth_element, "Running time is ", time_cost)      
    
    
    
    
       