#pragma once

#include "Std_Types.h"
#include "Compiler_Cfg_MemIf.h"

class class_MemIf{
   public:
      FUNC(void, MEMIF_CODE) SetMode             (void);
      FUNC(void, MEMIF_CODE) Read                (void);
      FUNC(void, MEMIF_CODE) Write               (void);
      FUNC(void, MEMIF_CODE) Cancel              (void);
      FUNC(void, MEMIF_CODE) GetStatus           (void);
      FUNC(void, MEMIF_CODE) GetJobResult        (void);
      FUNC(void, MEMIF_CODE) GetVersionInfo      (void);
      FUNC(void, MEMIF_CODE) InvalidateBlock     (void);
      FUNC(void, MEMIF_CODE) EraseImmediateBlock (void);
};

extern class_MemIf MemIf;

