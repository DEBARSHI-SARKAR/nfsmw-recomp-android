004fdae0  MOV EAX,dword ptr [ESP + 0x4]
004fdae4  TEST EAX,EAX
004fdae6  JZ 0x004fdafa
004fdae8  MOV ECX,dword ptr [ESP + 0x8]
004fdaec  PUSH 0x0
004fdaee  PUSH ECX
004fdaef  PUSH EAX
004fdaf0  MOV ECX,0x925b30
004fdaf5  CALL 0x005d0370
004fdafa  RET
