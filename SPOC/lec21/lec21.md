ARG seed 0
ARG numInodes 8
ARG numData 8
ARG numRequests 10
ARG reverse False
ARG printFinal False

Initial state

inode bitmap  10000000
inodes        [d a:0 r:2] [] [] [] [] [] [] [] 
data bitmap   10000000
data          [(.,0) (..,0)] [] [] [] [] [] [] [] 

Which operation took place?

```
mkdir()
```

inode bitmap  11000000
inodes        [d a:0 r:3] [d a:1 r:2] [] [] [] [] [] [] 
data bitmap   11000000
data          [(.,0) (..,0) (g,1)] [(.,1) (..,0)] [] [] [] [] [] [] 

Which operation took place?

```
creat()
```

inode bitmap  11100000
inodes        [d a:0 r:4] [d a:1 r:2] [f a:-1 r:1] [] [] [] [] [] 
data bitmap   11000000
data          [(.,0) (..,0) (g,1) (q,2)] [(.,1) (..,0)] [] [] [] [] [] [] 

Which operation took place?

```
creat()
```

inode bitmap  11110000
inodes        [d a:0 r:5] [d a:1 r:2] [f a:-1 r:1] [f a:-1 r:1] [] [] [] [] 
data bitmap   11000000
data          [(.,0) (..,0) (g,1) (q,2) (u,3)] [(.,1) (..,0)] [] [] [] [] [] [] 

Which operation took place?

```
link()
```

inode bitmap  11110000
inodes        [d a:0 r:6] [d a:1 r:2] [f a:-1 r:1] [f a:-1 r:2] [] [] [] [] 
data bitmap   11000000
data          [(.,0) (..,0) (g,1) (q,2) (u,3) (x,3)] [(.,1) (..,0)] [] [] [] [] [] [] 

Which operation took place?

```
mkdir()
```

inode bitmap  11111000
inodes        [d a:0 r:7] [d a:1 r:2] [f a:-1 r:1] [f a:-1 r:2] [d a:2 r:2] [] [] [] 
data bitmap   11100000
data          [(.,0) (..,0) (g,1) (q,2) (u,3) (x,3) (t,4)] [(.,1) (..,0)] [(.,4) (..,0)] [] [] [] [] [] 

Which operation took place?

```
creat()
```

inode bitmap  11111100
inodes        [d a:0 r:7] [d a:1 r:3] [f a:-1 r:1] [f a:-1 r:2] [d a:2 r:2] [f a:-1 r:1] [] [] 
data bitmap   11100000
data          [(.,0) (..,0) (g,1) (q,2) (u,3) (x,3) (t,4)] [(.,1) (..,0) (c,5)] [(.,4) (..,0)] [] [] [] [] [] 

Which operation took place?

```
unlink()
```

inode bitmap  11111100
inodes        [d a:0 r:6] [d a:1 r:3] [f a:-1 r:1] [f a:-1 r:1] [d a:2 r:2] [f a:-1 r:1] [] [] 
data bitmap   11100000
data          [(.,0) (..,0) (g,1) (q,2) (u,3) (t,4)] [(.,1) (..,0) (c,5)] [(.,4) (..,0)] [] [] [] [] [] 

Which operation took place?

```
mkdir()
```

inode bitmap  11111110
inodes        [d a:0 r:6] [d a:1 r:4] [f a:-1 r:1] [f a:-1 r:1] [d a:2 r:2] [f a:-1 r:1] [d a:3 r:2] [] 
data bitmap   11110000
data          [(.,0) (..,0) (g,1) (q,2) (u,3) (t,4)] [(.,1) (..,0) (c,5) (w,6)] [(.,4) (..,0)] [(.,6) (..,1)] [] [] [] [] 

Which operation took place?

```
open(), write(), close()
```

inode bitmap  11111110
inodes        [d a:0 r:6] [d a:1 r:4] [f a:-1 r:1] [f a:-1 r:1] [d a:2 r:2] [f a:4 r:1] [d a:3 r:2] [] 
data bitmap   11111000
data          [(.,0) (..,0) (g,1) (q,2) (u,3) (t,4)] [(.,1) (..,0) (c,5) (w,6)] [(.,4) (..,0)] [(.,6) (..,1)] [o] [] [] [] 

Which operation took place?

```
open(), write(), close()
```

inode bitmap  11111111
inodes        [d a:0 r:7] [d a:1 r:4] [f a:-1 r:1] [f a:-1 r:1] [d a:2 r:2] [f a:4 r:1] [d a:3 r:2] [f a:-1 r:1] 
data bitmap   11111000
data          [(.,0) (..,0) (g,1) (q,2) (u,3) (t,4) (n,7)] [(.,1) (..,0) (c,5) (w,6)] [(.,4) (..,0)] [(.,6) (..,1)] [o] [] [] [] 
