class IntegerList {
    private:
        int *data = NULL;
        int length = 0;

    public:
        void append(int value) {
            // ...
        }

        int get(int index) {
            // ...
        }
}

int main(void) {
    IntegerList array;

    array.append(5);
    printf("%d\n", array.get(0));

    return 0;
}
