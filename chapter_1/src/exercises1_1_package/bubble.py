def BubbleSort(list_input):
    'BubbleSort'
    length = len(list_input)
    for i in range(length-1, 0,-1):
        for j in range(i):
            if( list_input[j] < list_input[j+1] ):
                list_input[j], list_input[j+1] = list_input[j+1], list_input[j]
                
def BubblePrintResult(kth_element, time_cost):
    'Print result'
    print("Bubble Sort:\nThe kth element in list is ", kth_element, "Running time is ", time_cost)  