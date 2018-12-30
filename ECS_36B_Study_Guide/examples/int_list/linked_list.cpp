struct IntegerList {
    IntegerListNode *head = NULL;

    void append(int value) {
        // First find the end of the list
        for (IntegerListNode *node = this->head;
             node != NULL;
             node = node->next) {}
        // etc.
    }

    int get(int index) {
        IntegerListNode *node = this->head;
        while (node != NULL && index > 0) {
            node = node->next;
            index--;
        }
        if (node == NULL) {
            printf("Error: array indexed out-of-bounds.\n");
            exit(1);
        }
        return node->value;
    }
}

int main(void) {
    struct IntegerList array;
    array.append(5);
    printf("%d\n", array.get(0));

    return 0;
}
