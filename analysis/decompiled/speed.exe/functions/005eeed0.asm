005eeed0  PUSH ESI
005eeed1  MOV ESI,ECX
005eeed3  CALL 0x005e6990
005eeed8  MOV EAX,dword ptr [ESI + 0x4]
005eeedb  TEST EAX,EAX
005eeedd  JZ 0x005eeeee
005eeedf  PUSH 0x0
005eeee1  PUSH 0xc
005eeee3  PUSH EAX
005eeee4  MOV ECX,0x925b30
005eeee9  CALL 0x005d0370
005eeeee  MOV dword ptr [ESI + 0x4],0x0
005eeef5  POP ESI
005eeef6  RET
