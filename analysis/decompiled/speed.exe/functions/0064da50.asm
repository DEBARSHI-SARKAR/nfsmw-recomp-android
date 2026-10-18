0064da50  PUSH ESI
0064da51  PUSH EDI
0064da52  MOV EDI,dword ptr [ESP + 0x10]
0064da56  MOV EAX,EDI
0064da58  CDQ
0064da59  IDIV dword ptr [ECX + 0x8]
0064da5c  MOV ESI,dword ptr [ECX]
0064da5e  SHL EDX,0x4
0064da61  MOV EAX,dword ptr [EDX + ESI*0x1 + 0x4]
0064da65  ADD EDX,ESI
0064da67  TEST EAX,EAX
0064da69  JZ 0x0064dab9
0064da6b  MOV EAX,dword ptr [EDX + 0xc]
0064da6e  TEST EAX,EAX
0064da70  JZ 0x0064da78
0064da72  MOV ESI,dword ptr [EDX + 0x8]
0064da75  MOV dword ptr [EAX + 0x8],ESI
0064da78  MOV EAX,dword ptr [EDX + 0x8]
0064da7b  TEST EAX,EAX
0064da7d  JZ 0x0064da85
0064da7f  MOV ESI,dword ptr [EDX + 0xc]
0064da82  MOV dword ptr [EAX + 0xc],ESI
0064da85  MOV ESI,dword ptr [EDX + 0x4]
0064da88  MOVZX EAX,byte ptr [ESI + 0x2]
0064da8c  SHL EAX,0x4
0064da8f  PUSH EBX
0064da90  MOVZX EBX,byte ptr [ESI + 0x1]
0064da94  MOVZX ESI,byte ptr [ESI]
0064da97  XOR EAX,EBX
0064da99  SHL EAX,0x4
0064da9c  XOR EAX,ESI
0064da9e  MOV ESI,dword ptr [ECX + 0x4]
0064daa1  IMUL EAX,EAX,-0x1a1
0064daa7  AND EAX,0x1fff
0064daac  LEA EAX,[ESI + EAX*0x4]
0064daaf  CMP dword ptr [EAX],EDX
0064dab1  POP EBX
0064dab2  JNZ 0x0064dab9
0064dab4  MOV ESI,dword ptr [EDX + 0xc]
0064dab7  MOV dword ptr [EAX],ESI
0064dab9  MOV ESI,dword ptr [ESP + 0xc]
0064dabd  MOV dword ptr [EDX + 0x4],ESI
0064dac0  MOV dword ptr [EDX],EDI
0064dac2  MOVZX EAX,byte ptr [ESI + 0x2]
0064dac6  MOVZX EDI,byte ptr [ESI + 0x1]
0064daca  MOVZX ESI,byte ptr [ESI]
0064dacd  SHL EAX,0x4
0064dad0  XOR EAX,EDI
0064dad2  SHL EAX,0x4
0064dad5  XOR EAX,ESI
0064dad7  IMUL EAX,EAX,-0x1a1
0064dadd  MOV dword ptr [EDX + 0x8],0x0
0064dae4  MOV ESI,dword ptr [ECX + 0x4]
0064dae7  AND EAX,0x1fff
0064daec  MOV ESI,dword ptr [ESI + EAX*0x4]
0064daef  MOV dword ptr [EDX + 0xc],ESI
0064daf2  MOV ECX,dword ptr [ECX + 0x4]
0064daf5  MOV dword ptr [ECX + EAX*0x4],EDX
0064daf8  MOV EAX,dword ptr [EDX + 0xc]
0064dafb  TEST EAX,EAX
0064dafd  POP EDI
0064dafe  POP ESI
0064daff  JZ 0x0064db04
0064db01  MOV dword ptr [EAX + 0x8],EDX
0064db04  RET 0x8
