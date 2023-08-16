#include <stdio.h>
#include <stdlib.h>

struct node
  {
  int value;
  struct node *next;
  };

struct list
  {
  struct node *start;
  int size;
  };

struct list *create_list()
  {
  struct list *list = malloc(sizeof(struct list));

  list->start = NULL;
  list->size = 0;

  return(list);
  }

struct node *create_node(int value)
  {
  struct node *node = malloc(sizeof(struct node));

  node->value = value;
  node->next = NULL;

  return(node);
  }

void insert(struct list *list, int value)
  {
  if(list == NULL)
    {
    list = create_list();
    }

  if(list->start == NULL)
    {
    list->start = create_node(value);
    list->size++;
    return;
    }

  struct node *aux = list->start;
  
  while(aux->next != NULL)
    {
    aux = aux->next;
    }
  
  aux->next = create_node(value);
  list->size++;
  
  return;
  }

void insert_begin(struct list *list, int value)
  {
  if(list == NULL)
    {
    list = create_list();
    }

  if(list->start == NULL)
    {
    list->start = create_node(value);
    list->size++;
    return;
    }

  struct node *aux = list->start;
 
  list->start = create_node(value);
  list->start->next = aux;
  list->size++;
  
  return;
  }

void delete_begin(struct list *list)
  {
  if(list == NULL)
    {
    return;
    }
  if(list->start == NULL)
    {
    return;
    }
  
  struct node *aux = list->start;
  list->start = aux->next;
  free(aux);
  list->size--;
  }

void delete_end(struct list *list)
  {
  if(list == NULL)
    {
    return;
    }
  if(list->start == NULL)
    {
    return;
    }

  struct node *aux = list->start;
  
  while(aux->next != NULL)
    {
    aux = aux->next;
    }
  aux
  free(aux);

  }

void show_list(struct list *list)
  {
  if(list == NULL)
    {
    return;
    }

  if(list->start == NULL)
    {
    return;
    }

  struct node *aux = list->start;

  while(aux != NULL)
    {
    printf("%d\n", aux->value);
    aux = aux->next;
    }

  return;
  }

int
main()
  {
  struct list *list = create_list();
  insert_begin(list, 1);
  insert(list, 60);
  show_list(list);
  delete_begin(list);
  show_list(list);
  return(0);
  }
