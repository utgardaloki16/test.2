--- clist.c.orig	2023-01-04 14:41:14.296370300 +0300
+++ clist.c	2023-01-04 16:00:02.146883200 +0300
@@ -1,3 +1,23 @@
 #include <stdio.c>
 
 #define MAX_LISTS 255
+
+typedef struct Node Node {
+    int	    key;
+    void    data; 
+    Node *prev, *next;
+}
+
+typedef struct List List {
+    Node    *head;
+    Node    *tail;
+    int     *count;
+}
+
+List *newList(int number) {
+    List *lst = (List *)malloc(sizeof(struct List));
+    lst->head = lst;
+    lst->tail = lst;
+    lst->count = 1;
+    return lst;
+}
