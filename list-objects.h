#ifndef LIST_OBJECTS_H
#define LIST_OBJECTS_H

typedef void (*show_commit_fn)(struct commit *, void *);
typedef void (*show_object_fn)(struct object_array_entry *, void *);
typedef void (*show_edge_fn)(struct commit *);

void traverse_commit_list(struct rev_info *, show_commit_fn, show_object_fn, void *);

void mark_edges_uninteresting(struct commit_list *, struct rev_info *, show_edge_fn);

#endif
