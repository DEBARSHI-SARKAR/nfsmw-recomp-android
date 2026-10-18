007eecdb  PUSH EBP
007eecdc  MOV EBP,ESP
007eecde  MOV EAX,dword ptr [EBP + 0x8]
007eece1  PUSH ESI
007eece2  MOV ESI,ECX
007eece4  PUSH 0x30001
007eece9  PUSH dword ptr [ESI + 0x30]
007eecec  CALL 0x007edd78
007eecf1  CMP EAX,-0x1
007eecf4  POP ECX
007eecf5  POP ECX
007eecf6  JZ 0x007eecfd
007eecf8  XOR EAX,EAX
007eecfa  INC EAX
007eecfb  JMP 0x007eecff
007eecfd  XOR EAX,EAX
007eecff  XOR ECX,ECX
007eed01  MOV dword ptr [ESI + 0x20],EAX
007eed04  MOV dword ptr [ESI + 0x24],ECX
007eed07  MOV byte ptr [ESI + 0x11],0x1
007eed0b  POP ESI
007eed0c  POP EBP
007eed0d  RET 0x4
