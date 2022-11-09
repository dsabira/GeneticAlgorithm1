class genome {
public:
    genome();
    ~genome();
    void allocate(int nGenes);
    void deallocate();
    void randomize();
    void set_red(int index, int value);
    int get_red(int index);
    void set_blue(int index, int value);
    int get_blue(int index);
    void set_green(int index, int value);
    int get_green(int index);
    void print();

private:
    struct Pixel {
        int red;
        int blue;
        int green;
    };
    Pixel* genes;
    int nGenes;
};

