#include "Engine/Core/Application.hpp"
#include "Engine/Core/Logger.hpp"

namespace Engine {

  Application::Application() : running(true) {}

  Application::~Application() {}
  
  void Application::Run() {
    OnInit();
    while(running) {
      float dt = time.GetDeltaTime();
      OnUpdate(dt);
    }
    OnShutdown();

  }

}
