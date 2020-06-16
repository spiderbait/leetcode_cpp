from Queue import Queue, LifoQueue, PriorityQueue

q = Queue(maxsize=5)
lq = LifoQueue(maxsize=6)
pq = PriorityQueue(maxsize=5)

for i in range(5):
    q.put(i)
    lq.put(i)
    pq.put(i)

print "FIFO queue: %s, is empty: %s, size: %s, is full: %s" %(q.queue,q.empty(),q.qsize(),q.full())
print "LIFO queue: %s, is empty: %s, size: %s, is full: %s" %(lq.queue,lq.empty(),lq.qsize(),lq.full())
print "Priority queue: %s, is empty: %s, size: %s, is full: %s" %(pq.queue,pq.empty(),pq.qsize(),pq.full())

print q.get(), lq.get(), pq.get()

print "FIFO queue: %s, is empty: %s, size: %s, is full: %s" %(q.queue,q.empty(),q.qsize(),q.full())
print "LIFO queue: %s, is empty: %s, size: %s, is full: %s" %(lq.queue,lq.empty(),lq.qsize(),lq.full())
print "Priority queue: %s, is empty: %s, size: %s, is full: %s" %(pq.queue,pq.empty(),pq.qsize(),pq.full())