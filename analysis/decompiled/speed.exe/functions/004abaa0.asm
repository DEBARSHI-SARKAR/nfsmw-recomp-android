004abaa0  MOV EDX,dword ptr [ECX + 0xcc]
004abaa6  XOR EAX,EAX
004abaa8  TEST EDX,EDX
004abaaa  JZ 0x004abab1
004abaac  MOV EAX,0x1
004abab1  MOV EDX,dword ptr [ECX + 0x110]
004abab7  TEST EDX,EDX
004abab9  JZ 0x004ababc
004ababb  INC EAX
004ababc  MOV EDX,dword ptr [ECX + 0x154]
004abac2  TEST EDX,EDX
004abac4  JZ 0x004abac7
004abac6  INC EAX
004abac7  MOV EDX,dword ptr [ECX + 0x198]
004abacd  TEST EDX,EDX
004abacf  JZ 0x004abad2
004abad1  INC EAX
004abad2  RET
