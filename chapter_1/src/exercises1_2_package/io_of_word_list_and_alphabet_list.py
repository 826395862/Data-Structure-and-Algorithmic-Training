def InputWordListAndAlphabetList(word_list, alphabet_list):
    word_number = int(input("Please input word number:"))
    alphabet_list_dimension = int(input("Please input alphabet list dimension:"))
    for i in range(word_number):
        print("Please input", i + 1, "th word:")
        word_list.append(input())
    
    for line in range(alphabet_list_dimension):
        alphabet_list.append([])
        for column in range(alphabet_list_dimension):
            print("Enter the char in line", line + 1, ",column", column + 1)
            alphabet_list[line].append(input())
    
    print(word_list)
    for element_in_list in alphabet_list:
        print(element_in_list)