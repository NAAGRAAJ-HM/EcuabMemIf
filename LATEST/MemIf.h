#pragma once

#include "Std_Types.h"

class class_MemIf{
   public:
      void SetMode             (void);
      void Read                (void);
      void Write               (void);
      void Cancel              (void);
      void GetStatus           (void);
      void GetJobResult        (void);
      void GetVersionInfo      (void);
      void InvalidateBlock     (void);
      void EraseImmediateBlock (void);
};

extern class_MemIf MemIf;

