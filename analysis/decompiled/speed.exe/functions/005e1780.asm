005e1780  MOV EAX,dword ptr [ECX]
005e1782  MOV EAX,dword ptr [EAX + 0x24]
005e1785  MOV dword ptr [ECX],EAX
005e1787  CMP EAX,dword ptr [0x0091dff8]
005e178d  JZ 0x005e17aa
005e178f  NOP
005e1790  MOV EDX,dword ptr [ECX]
005e1792  MOVZX EAX,word ptr [EDX + 0x18]
005e1796  TEST dword ptr [ECX + 0x4],EAX
005e1799  JNZ 0x005e17b0
005e179b  MOV EDX,dword ptr [ECX]
005e179d  MOV EAX,dword ptr [EDX + 0x24]
005e17a0  MOV dword ptr [ECX],EAX
005e17a2  CMP EAX,dword ptr [0x0091dff8]
005e17a8  JNZ 0x005e1790
005e17aa  MOV dword ptr [ECX],0x0
005e17b0  RET
