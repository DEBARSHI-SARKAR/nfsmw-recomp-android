005bcac0  PUSH -0x1
005bcac2  PUSH 0x87421b
005bcac7  MOV EAX,FS:[0x0]
005bcacd  PUSH EAX
005bcace  MOV dword ptr FS:[0x0],ESP
005bcad5  PUSH ECX
005bcad6  PUSH ESI
005bcad7  MOV ESI,ECX
005bcad9  MOV dword ptr [ESP + 0x4],ESI
005bcadd  MOV AL,byte ptr [ESI + 0x2c]
005bcae0  TEST AL,AL
005bcae2  LEA ECX,[ESI + 0x28]
005bcae5  MOV dword ptr [ESP + 0x10],0x0
005bcaed  MOV dword ptr [ECX],0x8a2c20
005bcaf3  JNZ 0x005bcafa
005bcaf5  CALL 0x005b3cd0
005bcafa  MOV ECX,dword ptr [ESP + 0x8]
005bcafe  MOV dword ptr [ESI + 0x8],0x8a2c14
005bcb05  POP ESI
005bcb06  MOV dword ptr FS:[0x0],ECX
005bcb0d  ADD ESP,0x10
005bcb10  RET
