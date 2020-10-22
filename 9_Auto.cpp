auto d{ 5.0 }; // 5.0 is a double literal, so d will be type double
auto i{ 1 + 2 }; // 1 + 2 evaluates to an int, so i will be type int

auto add(int x, int y) -> int
{
  return (x + y);
}
