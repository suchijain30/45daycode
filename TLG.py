n = int(input())
player1 =0 
player2 =0 
lead=0 
for i in range(n):
    score1 , score2 = map(int , input().split())
    player1 = player1 + score1 
    player2 = player2 + score2 
    diff = player1 - player2 
    if diff>0 and diff> lead:
        lead=diff
        leader =1 
    elif diff<0 and abs(diff)> lead:
print(leader , lead)



