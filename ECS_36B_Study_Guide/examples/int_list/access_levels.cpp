struct IntegerList {
    private:
        int *data = NULL;
        int length = 0;

    public:
        void append(int value) { /* ... */ }
        int get(int index) { /* ... */ }
}

int main(void) {
    struct IntegerList array;

    array.append(5);

    // This is OK:
    array.get(0);

    // This throws an error:
    array.data[0];

    return 0;
}
