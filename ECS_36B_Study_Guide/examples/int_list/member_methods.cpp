struct IntegerList {
    int *data = NULL;
    int length = 0;

    void append(int value) {
        this->length += 1;
        this->data = (int *)realloc(data,
                                     this->length * sizeof(int));
        this->data[this->length - 1] = value;
    }

    int get(int index) {
        if (index < 0 || index >= this->length) {
            printf("Error: array indexed out-of-bounds.\n");
            exit(1);
        }
        return this->data[index];
    }
}

int main(void) {
    struct IntegerList array;

    IntegerList::append(&array, 5);
    printf("%d\n", IntegerList::get(&array, 0));

    return 0;
}
