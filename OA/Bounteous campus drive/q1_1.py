class Node:
    def __init__(self):
        self.left = -1
        self.right = -1

def inorder(node):
    global counter, result
    if node == -1 or result != -1:
        return
    
    inorder(tree[node].left)
    
    counter += 1
    if counter == M:
        result = guardians[node]
        return
    
    inorder(tree[node].right)


# ---------------- MAIN ----------------
input_line = input().strip()
parts = input_line.split(';')

N = int(parts[0])

guardians = list(map(int, parts[1].split()))

pathwayCount, connectionCount = map(int, parts[2].split())

tree = [Node() for _ in range(N)]

# Building the tree
for i in range(3, 3 + pathwayCount):
    u, v = map(int, parts[i].split())
    if tree[u].left == -1:
        tree[u].left = v
    else:
        tree[u].right = v

M = int(parts[-1])

counter = 0
result = -1

inorder(0)

print(result)
