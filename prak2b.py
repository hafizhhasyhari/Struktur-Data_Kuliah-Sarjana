Q=[]
f=None
r=None

def isEmpty(Que):
    if(Que==[]):
        return True
    else:
        return False
    
def enqueue(Que,item):
    Que.append(item)
    if (len(Que)==1):
        f=r=0
    else:
        r=len(Que)-1

def dequeued(Que):
    if(isEmpty(Que)):
        return('UnderFlow!')
    else:
        i=Que.pop(0)

    if(len(Que)==0):
        f=r=None
        return i
    
def peek(Que):
    if (isEmpty(Que)):
        return('UnderFlow!')
    else:
        f=0
        return Que[f]
    
    def Display(Que):
        if(len(Que)==0):
            print('Que is Empty!')
        elif(len(Que)==1):
            print(Que[0],'<-- Front:')
            print(Que[f],'<--Front')
            for x in range(1,r):
                print(Que[x])
                print(Que[r],'<--Rear')

                while True:
                    print('--THIS IS QUEUE IMPLEMANTATION!--')
                    print('1.ENQUEUE')
                    print('2.DEQUEUE')
                    print('3.Peek')
                    print('4.Display')
                    print('5.Exit')
                    ch = int(input('Enter the choice(1-5)-'))
                    if(ch==1):
                        item = int(input('enter the element u want to insert :'))
                        enqueue(0, item)
                        input('Press any key to continue...')
                    if(ch==2):
                        item=duqueue(Q)
                        if(item=='Queue is Empty!, UNDERFLOW!'):
                            else:
                            print('%d is dequeued!'%item)
                            input('Press any key to continue...')
                    if(ch==3):
                        item=peel(0)
                        if(item=='UnderFlow!'):
                            print('Front is %d'%item)
                        else:
                            print('%d id dequeue'%item)
                            input('Press any key to continue...')
                            if(ch==4):
                                Display(0)
                                input('Press any key to continue...')
                            if(ch==5):
                                break
                            else:
                                print('it does not exist, do u mean 1-5?')                

                        




    

