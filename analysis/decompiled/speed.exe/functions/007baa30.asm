007baa30  PUSH -0x1
007baa32  PUSH 0x883613
007baa37  MOV EAX,FS:[0x0]
007baa3d  PUSH EAX
007baa3e  MOV dword ptr FS:[0x0],ESP
007baa45  SUB ESP,0x8
007baa48  PUSH ESI
007baa49  MOV ESI,ECX
007baa4b  PUSH EDI
007baa4c  MOV dword ptr [ESP + 0xc],ESI
007baa50  MOV dword ptr [ESI],0x8b7e3c
007baa56  MOV EAX,0x89b070
007baa5b  MOV dword ptr [ESI + 0x160],EAX
007baa61  MOV dword ptr [ESI + 0x11c],EAX
007baa67  MOV dword ptr [ESI + 0xd8],EAX
007baa6d  MOV dword ptr [ESI + 0x88],0x8b7244
007baa77  MOV EAX,dword ptr [ESI + 0x7c]
007baa7a  TEST EAX,EAX
007baa7c  MOV dword ptr [ESP + 0x18],0x1
007baa84  MOV dword ptr [ESI + 0x6c],0x8b72b4
007baa8b  JZ 0x007baaa7
007baa8d  MOV dword ptr [ESP + 0x8],EAX
007baa91  LEA EAX,[ESP + 0x8]
007baa95  PUSH 0x1
007baa97  PUSH EAX
007baa98  CALL 0x00503360
007baa9d  ADD ESP,0x8
007baaa0  MOV dword ptr [ESI + 0x7c],0x0
007baaa7  MOV EAX,dword ptr [ESI + 0x2c]
007baaaa  LEA EDI,[ESI + 0x2c]
007baaad  CMP EAX,EDI
007baaaf  JZ 0x007baaca
007baab1  MOV ECX,dword ptr [EAX]
007baab3  MOV EDX,dword ptr [EAX + 0x4]
007baab6  MOV dword ptr [EDX],ECX
007baab8  PUSH EAX
007baab9  MOV dword ptr [ECX + 0x4],EDX
007baabc  CALL 0x00652b00
007baac1  MOV EAX,dword ptr [EDI]
007baac3  ADD ESP,0x4
007baac6  CMP EAX,EDI
007baac8  JNZ 0x007baab1
007baaca  MOV ECX,ESI
007baacc  MOV dword ptr [ESP + 0x18],0xffffffff
007baad4  CALL 0x00572360
007baad9  MOV ECX,dword ptr [ESP + 0x10]
007baadd  POP EDI
007baade  POP ESI
007baadf  MOV dword ptr FS:[0x0],ECX
007baae6  ADD ESP,0x14
007baae9  RET
