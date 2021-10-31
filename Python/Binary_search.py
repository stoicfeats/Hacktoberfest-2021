# Python3 implementation of tree using array

tree = [None] * 10
 
 
def root(key):
    if tree[0] != None:
        print("Tree already had root")
    else:
        tree[0] = key
 
 
def set_left(key, parent):
    if tree[parent] == None:
        print("Can't set child at", (parent * 2) + 1, ", no parent found")
    else:
        tree[(parent * 2) + 1] = key
 
 
def set_right(key, parent):
    if tree[parent] == None:
        print("Can't set child at", (parent * 2) + 2, ", no parent found")
    else:
        tree[(parent * 2) + 2] = key
 
 
def print_tree():
    for i in range(10):
        if tree[i] != None:
            print(tree[i], end="")
        else:
            print("-", end="")
    print()
 
 
# Driver Code
root('A')
set_right('C', 0)
set_left('D', 1)
set_right('E', 1)
set_right('F', 2)
print_tree()