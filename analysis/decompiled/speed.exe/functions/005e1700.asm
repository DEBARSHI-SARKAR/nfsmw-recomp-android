005e1700  MOV EAX,dword ptr [ECX]
005e1702  MOV EAX,dword ptr [EAX + 0x24]
005e1705  MOV dword ptr [ECX],EAX
005e1707  CMP EAX,dword ptr [0x0091dfec]
005e170d  JZ 0x005e172a
005e170f  NOP
005e1710  MOV EDX,dword ptr [ECX]
005e1712  MOVZX EAX,word ptr [EDX + 0x18]
005e1716  TEST dword ptr [ECX + 0x4],EAX
005e1719  JNZ 0x005e1730
005e171b  MOV EDX,dword ptr [ECX]
005e171d  MOV EAX,dword ptr [EDX + 0x24]
005e1720  MOV dword ptr [ECX],EAX
005e1722  CMP EAX,dword ptr [0x0091dfec]
005e1728  JNZ 0x005e1710
005e172a  MOV dword ptr [ECX],0x0
005e1730  RET
