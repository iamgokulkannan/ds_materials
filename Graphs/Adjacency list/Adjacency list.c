#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct list
{
    struct node *head;
};
struct graph
{
    int v;
    struct list *array;
};
struct node *newNode(int data)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}
struct graph *newGraph(int v)
{
    struct graph *graph = (struct graph *)malloc(sizeof(struct graph));
    graph->v = v;
    graph->array = (struct list *)malloc(v * sizeof(struct list));
    for (int i = 0; i < v; i++)
        graph->array[i].head = NULL;
    return graph;
}
void addEdge(struct graph *graph, int src, int dest)
{
    struct node *node = newNode(dest);
    node->next = graph->array[src].head;
    graph->array[src].head = node;
    node = newNode(src);
    node->next = graph->array[dest].head;
    graph->array[dest].head = node;
}
void printGraph(struct graph *graph){
    for(int v=0;v<graph->v;v++){
        printf("List of vertex %d : ",v);
        struct node *pc=graph->array[v].head;
        while(pc){
            printf("%d -> ",pc->data);
            pc=pc->next;
        }
        printf("\n");
    }
}
int main(){
    struct graph *graph=newGraph(6);
    addEdge(graph, 0, 1);
	addEdge(graph, 0, 2);
	addEdge(graph, 1, 3);
	addEdge(graph, 1, 4);
	addEdge(graph, 2, 5);
    printGraph(graph);
}