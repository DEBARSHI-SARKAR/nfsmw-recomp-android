005dddc0  MOV EAX,FS:[0x0]
005dddc6  MOV CL,byte ptr [0x0091e090]
005dddcc  PUSH -0x1
005dddce  PUSH 0x874ebe
005dddd3  PUSH EAX
005dddd4  MOV EAX,0x1
005dddd9  TEST AL,CL
005ddddb  MOV dword ptr FS:[0x0],ESP
005ddde2  JNZ 0x005dde1a
005ddde4  OR dword ptr [0x0091e090],EAX
005dddea  PUSH 0x8a396c
005dddef  MOV dword ptr [ESP + 0xc],0x0
005dddf7  CALL 0x005cc240
005dddfc  MOV ECX,dword ptr [ESP + 0x14]
005dde00  MOV [0x0091e08c],EAX
005dde05  MOV dword ptr [ECX],EAX
005dde07  ADD ESP,0x4
005dde0a  MOV EAX,ECX
005dde0c  MOV ECX,dword ptr [ESP]
005dde0f  MOV dword ptr FS:[0x0],ECX
005dde16  ADD ESP,0xc
005dde19  RET
005dde1a  MOV ECX,dword ptr [0x0091e08c]
005dde20  MOV EAX,dword ptr [ESP + 0x10]
005dde24  MOV dword ptr [EAX],ECX
005dde26  MOV ECX,dword ptr [ESP]
005dde29  MOV dword ptr FS:[0x0],ECX
005dde30  ADD ESP,0xc
005dde33  RET
