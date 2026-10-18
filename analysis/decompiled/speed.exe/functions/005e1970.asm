005e1970  MOV EAX,dword ptr [ECX]
005e1972  MOV EAX,dword ptr [EAX + 0x24]
005e1975  MOV dword ptr [ECX],EAX
005e1977  CMP EAX,dword ptr [0x0091dfe4]
005e197d  JZ 0x005e199a
005e197f  NOP
005e1980  MOV EDX,dword ptr [ECX]
005e1982  MOVZX EAX,word ptr [EDX + 0x18]
005e1986  TEST dword ptr [ECX + 0x4],EAX
005e1989  JNZ 0x005e19a0
005e198b  MOV EDX,dword ptr [ECX]
005e198d  MOV EAX,dword ptr [EDX + 0x24]
005e1990  MOV dword ptr [ECX],EAX
005e1992  CMP EAX,dword ptr [0x0091dfe4]
005e1998  JNZ 0x005e1980
005e199a  MOV dword ptr [ECX],0x0
005e19a0  RET
