007e9980  PUSH EBP
007e9981  MOV EBP,ESP
007e9983  MOV EAX,dword ptr [EBP + 0x8]
007e9986  MOV EDX,dword ptr [EBP + 0xc]
007e9989  MOV dword ptr [ECX + 0x10],EAX
007e998c  MOV EAX,dword ptr [EBP + 0x10]
007e998f  MOV dword ptr [ECX + 0x14],EDX
007e9992  MOV EDX,dword ptr [EBP + 0x14]
007e9995  MOV dword ptr [ECX + 0x18],EAX
007e9998  MOV dword ptr [ECX + 0x1c],EDX
007e999b  POP EBP
007e999c  RET 0x10
