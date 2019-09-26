from exercises1_1_package.bubble import BubbleSort
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
    
def Algorithm2PrintResult(kth_element, time_cost):
    'Algorithm2 result'
    print("Algorithm2:\nThe kth element in list is ", kth_element, "Running time is ", time_cost)      