

move_x = [2, 1, -1, -2, -2, -1, 1, 2]
move_y = [1, 2, 2, 1, -1, -2, -2, -1]

def validateMove(bo, row, col):
    if row < 8 and row >= 0 and col < 8 and col >= 0 and bo[row][col] == 0:
        return True

def solve (bo, row, col, n, counter):
    
    for i in range(8):
        if counter > 64:
            return True
        new_x = row + move_x[i]
        new_y = col + move_y[i]
        if validateMove(bo, new_x, new_y):
            bo[new_x][new_y] = counter
            if solve(bo,new_x, new_y, n, counter+1):
                return True
            bo[new_x][new_y] = 0
    return False
n = 8
board = [[0 for i in range(n)]for i in range(n)]
startx = 3
starty = 2
counter = 1
board[startx][starty] = counter
counter = counter + 1
if(solve(board,startx,starty,n,counter)):
    for i in range(n):
        for j in range(n):
            print(board[i][j], end=' ')
        print()    
else:
        print("Not valid")