005aae30  PUSH ECX
005aae31  PUSH EBP
005aae32  MOV EBP,dword ptr [ESP + 0x10]
005aae36  PUSH ESI
005aae37  PUSH EDI
005aae38  MOV EDI,ECX
005aae3a  MOV ESI,dword ptr [EDI + 0x4]
005aae3d  MOV EAX,dword ptr [ESI + 0x4]
005aae40  MOV DL,byte ptr [EAX + 0x15]
005aae43  TEST DL,DL
005aae45  MOV CL,0x1
005aae47  MOV byte ptr [ESP + 0xc],CL
005aae4b  JNZ 0x005aae6d
005aae4d  MOV EDX,dword ptr [EBP]
005aae50  CMP EDX,dword ptr [EAX + 0xc]
005aae53  SETC CL
005aae56  TEST CL,CL
005aae58  MOV ESI,EAX
005aae5a  MOV byte ptr [ESP + 0xc],CL
005aae5e  JZ 0x005aae64
005aae60  MOV EAX,dword ptr [EAX]
005aae62  JMP 0x005aae67
005aae64  MOV EAX,dword ptr [EAX + 0x8]
005aae67  CMP byte ptr [EAX + 0x15],0x0
005aae6b  JZ 0x005aae50
005aae6d  TEST CL,CL
005aae6f  MOV EDX,ESI
005aae71  MOV dword ptr [ESP + 0x18],EDX
005aae75  JZ 0x005aaeaa
005aae77  MOV EAX,dword ptr [EDI + 0x4]
005aae7a  CMP ESI,dword ptr [EAX]
005aae7c  LEA ECX,[ESP + 0x18]
005aae80  JNZ 0x005aaea1
005aae82  PUSH EBP
005aae83  PUSH ESI
005aae84  PUSH 0x1
005aae86  PUSH ECX
005aae87  MOV ECX,EDI
005aae89  CALL 0x005aa4e0
005aae8e  MOV EDX,dword ptr [EAX]
005aae90  MOV EAX,dword ptr [ESP + 0x14]
005aae94  POP EDI
005aae95  POP ESI
005aae96  MOV byte ptr [EAX + 0x4],0x1
005aae9a  MOV dword ptr [EAX],EDX
005aae9c  POP EBP
005aae9d  POP ECX
005aae9e  RET 0x8
005aaea1  CALL 0x0058b680
005aaea6  MOV EDX,dword ptr [ESP + 0x18]
005aaeaa  MOV EAX,dword ptr [EDX + 0xc]
005aaead  CMP EAX,dword ptr [EBP]
005aaeb0  JNC 0x005aaed8
005aaeb2  MOV ECX,dword ptr [ESP + 0xc]
005aaeb6  PUSH EBP
005aaeb7  PUSH ESI
005aaeb8  PUSH ECX
005aaeb9  LEA EDX,[ESP + 0x24]
005aaebd  PUSH EDX
005aaebe  MOV ECX,EDI
005aaec0  CALL 0x005aa4e0
005aaec5  MOV ECX,dword ptr [EAX]
005aaec7  MOV EAX,dword ptr [ESP + 0x14]
005aaecb  POP EDI
005aaecc  POP ESI
005aaecd  MOV dword ptr [EAX],ECX
005aaecf  MOV byte ptr [EAX + 0x4],0x1
005aaed3  POP EBP
005aaed4  POP ECX
005aaed5  RET 0x8
005aaed8  MOV EAX,dword ptr [ESP + 0x14]
005aaedc  POP EDI
005aaedd  POP ESI
005aaede  MOV byte ptr [EAX + 0x4],0x0
005aaee2  MOV dword ptr [EAX],EDX
005aaee4  POP EBP
005aaee5  POP ECX
005aaee6  RET 0x8
