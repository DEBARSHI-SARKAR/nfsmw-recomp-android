005b3da0  MOV EAX,dword ptr [ESP + 0x4]
005b3da4  TEST EAX,EAX
005b3da6  PUSH ESI
005b3da7  MOV ESI,dword ptr [ECX + 0x60]
005b3daa  JZ 0x005b3de7
005b3dac  TEST ESI,ESI
005b3dae  JZ 0x005b3dc5
005b3db0  MOV EDX,dword ptr [ESI + 0x4]
005b3db3  TEST EDX,EDX
005b3db5  MOV dword ptr [EAX + 0x4],EDX
005b3db8  JZ 0x005b3dbd
005b3dba  MOV dword ptr [EDX + 0x8],EAX
005b3dbd  MOV dword ptr [EAX + 0x8],ESI
005b3dc0  MOV dword ptr [ESI + 0x4],EAX
005b3dc3  JMP 0x005b3ddc
005b3dc5  MOV EDX,dword ptr [ECX + 0x5c]
005b3dc8  TEST EDX,EDX
005b3dca  MOV dword ptr [EAX + 0x4],EDX
005b3dcd  JZ 0x005b3dd2
005b3dcf  MOV dword ptr [EDX + 0x8],EAX
005b3dd2  MOV dword ptr [EAX + 0x8],0x0
005b3dd9  MOV dword ptr [ECX + 0x5c],EAX
005b3ddc  CMP dword ptr [ECX + 0x60],ESI
005b3ddf  JNZ 0x005b3de4
005b3de1  MOV dword ptr [ECX + 0x60],EAX
005b3de4  INC dword ptr [ECX + 0x58]
005b3de7  POP ESI
005b3de8  RET 0x4
