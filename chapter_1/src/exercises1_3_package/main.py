def PrintDigit(N):
    print(int(N), end = '')
    
def PrintOut(N):
    if(N < 10):
        PrintDigit(N)
    else:
        PrintOut(N//10)
        PrintOut(N%10)
        
def PrintOutFloat (N, decimal_point_number):
    if(N < 0):
        print('-', end = '')
        N = -N
    
    PrintOut(N//1)
    
    print('.', end = '')
    PrintOut(N%1*10**decimal_point_number//1)

if __name__ == '__main__':
    PrintOut(1231)
    PrintOutFloat(-100.32, 2)