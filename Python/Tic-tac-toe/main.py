import os #for clear screen

def printBoard(board):
    '''
    args: 
        board (dict)
    return: 
        tic-tac-toe board game
    '''
    os.system('cls' if os.name == 'nt' else 'clear')
    print(board['7'] + '|' + board['8'] + '|' +board['9'])
    print('-+-+-')
    print(board['4'] + '|' + board['5'] + '|' +board['6'])
    print('-+-+-')
    print(board['1'] + '|' + board['2'] + '|' +board['3'])

def game(board):
    turn = 'X'
    count = 0
    gameOver = False

    while not gameOver:
        printBoard(board)
        move = input("it's your turn, " + turn + ": ")

        if board[move] == ' ':
            board[move] = turn
            count += 1
            printBoard(board)
        else:
            print('That place is already filled')
            input('press enter...')
            continue

        if count >= 5:
            if board['7'] == board['8'] == board['9'] != ' ': 
                gameOver = True #top horizontal
            elif board['4'] == board['5'] == board['6'] != ' ': 
                gameOver = True #middle horizontal
            elif board['1'] == board['2'] == board['3'] != ' ': 
                gameOver = True #bottom horizontal
            elif board['7'] == board['4'] == board['1'] != ' ': 
                gameOver = True #left vertical
            elif board['8'] == board['5'] == board['2'] != ' ': 
                gameOver = True #middle vertical
            elif board['9'] == board['6'] == board['3'] != ' ': 
                gameOver = True #right vertical
            elif board['9'] == board['5'] == board['1'] != ' ': 
                gameOver = True  #diagonal right to left
            elif board['7'] == board['5'] == board['3'] != ' ': 
                gameOver = True  #diagonal left to right
            
            if gameOver:
                print('=== ' + turn + ' WON!!! ===')

            elif count == 9:
                gameOver = True
                print('\nTIE')
                print('Game Over')
        
        if turn == 'X':
            turn = 'O'
        else:
            turn = 'X'

#main program
board = {
    '7': '7', '8': '8', '9': '9',
    '4': '4', '5': '5', '6': '6',
    '1': '1', '2': '2', '3': '3'
}

boardKey = [ x for x in board ] #get key in dict

start = True
printBoard(board)
print('Intructions: \n \
    This is TWO PLAYER GAMES\n \
    Fill blank field and win the game \n \
    Each field has an index which you can see above')
input('are you READY? press enter...')
while start:
    for x in boardKey:
        board[x] = ' '
    game(board)
    start = False if input('Restart the game? (y/n)') in ('n', 'N') else True

print("=====THANK'S FOR PLAYING=====")