# Homework 8 Preprocessing and multiple files for large program

[TOC]

**Homework 8-1 requirnments**

For the Homework 8-1, you have to make the program to work like the following example. 

**input:**
Inputs containes `t` commands, where `0 < t < 20`

The browser will start with a blank page. (i.e. the stack is empty, and the current page is null)

The total number of pages will not exceed 1000.
The length of the `title` and `url` of each page will not exceed 100.

The command will be one of the following:
```bash
new <url> <title>   # create a new page with the given url and title
current             # print the current page data
back                # navigate back to the previous page
forward             # navigate forward to the next page
```

sample input 1:
```
current
new https://www.google.com google
current
new https://www.facebook.com facebook
current
forward
back
current
back
```

sample output 1:
```
---
Empty
---
---
Title: google
URL: https://www.google.com
---
---
Title: facebook
URL: https://www.facebook.com
---
Cannot navigate forward
---
Title: google
URL: https://www.google.com
---
Cannot navigate back
```

sample input 2:
```
new https://www.google.com google
new https://www.facebook.com facebook
new https://www.youtube.com youtube
new https://www.instagram.com instagram
current
back
back
new https://www.nycu.edu.tw nycu
current
forward
back
current
```

sample output 2:
```
---
Title: instagram
URL: https://www.instagram.com
---
---
Title: nycu
URL: https://www.nycu.edu.tw
---
Cannot navigate forward
---
Title: facebook
URL: https://www.facebook.com
---
```
# ICP-hw8-template
