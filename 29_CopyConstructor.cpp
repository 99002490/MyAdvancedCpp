class Rectangle{
private:
  int width;
  int height;
public:
  Rectangle(int w, int h):{
  width(w), height(h) }
  Rectangle(Rectangle &rect){
  width=rect.width;
  height=rect.height;
  }
};
int main(){
Rectangle r1(5,10);
Rectangle r2(r1);
}
