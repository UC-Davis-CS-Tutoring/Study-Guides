struct IntegerList {
    int *data = NULL;
    int length = 0;
}

void append_to_integer_array(struct IntegerList *array,
                             int value) {
    array->length += 1;
    array->data = (int *)realloc(data,
                                 array->length * sizeof(int));
    array->data[array->length - 1] = value;
}

int get_item_integer_array(struct IntegerList *array,
                            int index) {
    if (index < 0 || index >= array->length) {
        printf("Error: array indexed out-of-bounds.\n");
        exit(1);
    }
    return array->data[index];
}

int main(void) {
    struct IntegerList array;

    append_to_integer_array(&array, 5);
    printf("%d\n", get_item_integer_array(&array, 0));

    return 0;
}
