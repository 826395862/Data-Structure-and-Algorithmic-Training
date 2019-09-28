from exercises1_2_package.io_of_word_list_and_alphabet_list import InputWordListAndAlphabetList

word_list = []
alphabet_list = []

InputWordListAndAlphabetList(word_list, alphabet_list)   

change_x = [-1, 1, 0, 0, -1, -1, 1, 1]
change_y = [0, 0, -1, 1, -1, 1, -1, 1]

for i in range(len(alphabet_list)):
    for j in range(len(alphabet_list)):
         
        for k in range(8):
            x = i
            y = j
            str_temp = []
            
            for cycle_number in range(len(alphabet_list)):
                str_temp.append(alphabet_list[x][y])
                x = x + change_x[k]
                y = y + change_y[k]
                if( x not in range(0, len(alphabet_list)) or y not in range(0, len(alphabet_list)) ):
                    break
                
            for word in word_list:
                if(''.join(str_temp).find(word) != -1):
                    print(word+':line', i, 'column', j,'direction', k)
         
        