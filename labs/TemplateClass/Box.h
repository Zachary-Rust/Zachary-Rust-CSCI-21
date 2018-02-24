template <typename T>
class Box {
    private:
    T contents;
    
    public:
    Box();
    Box(newContents);
    
    T SetContents(T contents);
    T GetContents();
    
    friend Box operator << ();
}