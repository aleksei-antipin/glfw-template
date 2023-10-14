#include <glad/glad.h>
#include <GLFW/glfw3.h>

class Engine {

 public:
  Engine();
  ~Engine();

  void Initialize();
  void Run();
  void DeInitialize();

 private:
  GLFWwindow *window;
};
