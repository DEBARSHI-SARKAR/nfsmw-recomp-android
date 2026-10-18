004b2730  CMP EAX,dword ptr [ECX + 0x68]
004b2733  PUSH ESI
004b2734  JNZ 0x004b273e
004b2736  MOV EDX,dword ptr [EAX + 0xc]
004b2739  MOV dword ptr [ECX + 0x68],EDX
004b273c  JMP 0x004b2747
004b273e  MOV EDX,dword ptr [EAX + 0x8]
004b2741  MOV ESI,dword ptr [EAX + 0xc]
004b2744  MOV dword ptr [EDX + 0xc],ESI
004b2747  CMP EAX,dword ptr [ECX + 0x70]
004b274a  JNZ 0x004b2754
004b274c  MOV EDX,dword ptr [EAX + 0x8]
004b274f  MOV dword ptr [ECX + 0x70],EDX
004b2752  JMP 0x004b275d
004b2754  MOV EDX,dword ptr [EAX + 0xc]
004b2757  MOV ESI,dword ptr [EAX + 0x8]
004b275a  MOV dword ptr [EDX + 0x8],ESI
004b275d  CMP EAX,dword ptr [ECX + 0x6c]
004b2760  POP ESI
004b2761  JNZ 0x004b2770
004b2763  MOV EDX,dword ptr [EAX + 0xc]
004b2766  TEST EDX,EDX
004b2768  JNZ 0x004b276d
004b276a  MOV EDX,dword ptr [EAX + 0x8]
004b276d  MOV dword ptr [ECX + 0x6c],EDX
004b2770  MOV dword ptr [EAX + 0x4],0x0
004b2777  MOV EDX,dword ptr [ECX + 0x74]
004b277a  MOV dword ptr [EAX + 0xc],EDX
004b277d  MOV dword ptr [ECX + 0x74],EAX
004b2780  RET
