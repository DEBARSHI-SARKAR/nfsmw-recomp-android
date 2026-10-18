006c27d0  MOV EAX,[0x0090181c]
006c27d5  CMP EAX,0x5
006c27d8  JA 0x006c286c
006c27de  JMP dword ptr [EAX*0x4 + 0x6c2870]
006c27e5  MOV EAX,dword ptr [ESP + 0x4]
006c27e9  MOV ECX,dword ptr [ESP + 0x8]
006c27ed  MOV dword ptr [EAX],0x280
006c27f3  MOV dword ptr [ECX],0x1e0
006c27f9  RET 0x8
006c27fc  MOV EDX,dword ptr [ESP + 0x4]
006c2800  MOV EAX,dword ptr [ESP + 0x8]
006c2804  MOV dword ptr [EDX],0x320
006c280a  MOV dword ptr [EAX],0x258
006c2810  RET 0x8
006c2813  MOV ECX,dword ptr [ESP + 0x4]
006c2817  MOV EDX,dword ptr [ESP + 0x8]
006c281b  MOV dword ptr [ECX],0x400
006c2821  MOV dword ptr [EDX],0x300
006c2827  RET 0x8
006c282a  MOV EAX,dword ptr [ESP + 0x4]
006c282e  MOV ECX,dword ptr [ESP + 0x8]
006c2832  MOV dword ptr [EAX],0x500
006c2838  MOV dword ptr [ECX],0x3c0
006c283e  RET 0x8
006c2841  MOV EDX,dword ptr [ESP + 0x4]
006c2845  MOV EAX,dword ptr [ESP + 0x8]
006c2849  MOV dword ptr [EDX],0x500
006c284f  MOV dword ptr [EAX],0x400
006c2855  RET 0x8
006c2858  MOV ECX,dword ptr [ESP + 0x4]
006c285c  MOV EDX,dword ptr [ESP + 0x8]
006c2860  MOV dword ptr [ECX],0x640
006c2866  MOV dword ptr [EDX],0x4b0
006c286c  RET 0x8
