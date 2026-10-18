006bee20  MOV EAX,[0x009017e8]
006bee25  TEST EAX,EAX
006bee27  JZ 0x006bee34
006bee29  MOV EAX,dword ptr [ECX]
006bee2b  MOV ECX,dword ptr [ESP + 0x4]
006bee2f  MOV EDX,dword ptr [ECX]
006bee31  MOV dword ptr [EAX + 0x18],EDX
006bee34  RET 0x4
