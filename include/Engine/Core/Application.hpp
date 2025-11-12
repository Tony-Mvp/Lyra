#pragma once
#include <memory>
#include "Engine/Core/Time.hpp"
#include "Engine/Scene/SceneManager.hpp"

namespace Engine {
  
  class Application {
    public:
      Application();
      virtual ~Application();

      void Run();

    protected:
      virtual void OnInit() = 0;
      virtual void OnUpdate(float deltaTime) = 0;
      virtual void OnShutdown() = 0;

    private:
      bool running;
      SceneManager scenemanager; 
      Time time;
  };

}
