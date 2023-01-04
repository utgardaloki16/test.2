--- clist.c.orig	2023-01-04 14:41:14.296370300 +0300
+++ clist.c	2023-01-04 15:53:15.887939700 +0300
@@ -1,3 +1,15 @@
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
