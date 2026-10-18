005aafb0  PUSH ECX
005aafb1  PUSH EBP
005aafb2  MOV EBP,dword ptr [ESP + 0x10]
005aafb6  PUSH ESI
005aafb7  PUSH EDI
005aafb8  MOV EDI,ECX
005aafba  MOV ESI,dword ptr [EDI + 0x4]
005aafbd  MOV EAX,dword ptr [ESI + 0x4]
005aafc0  MOV DL,byte ptr [EAX + 0x11]
005aafc3  TEST DL,DL
005aafc5  MOV CL,0x1
005aafc7  MOV byte ptr [ESP + 0xc],CL
005aafcb  JNZ 0x005aafed
005aafcd  MOV EDX,dword ptr [EBP]
005aafd0  CMP EDX,dword ptr [EAX + 0xc]
005aafd3  SETC CL
005aafd6  TEST CL,CL
005aafd8  MOV ESI,EAX
005aafda  MOV byte ptr [ESP + 0xc],CL
005aafde  JZ 0x005aafe4
005aafe0  MOV EAX,dword ptr [EAX]
005aafe2  JMP 0x005aafe7
005aafe4  MOV EAX,dword ptr [EAX + 0x8]
005aafe7  CMP byte ptr [EAX + 0x11],0x0
005aafeb  JZ 0x005aafd0
005aafed  TEST CL,CL
005aafef  MOV EDX,ESI
005aaff1  MOV dword ptr [ESP + 0x18],EDX
005aaff5  JZ 0x005ab02a
005aaff7  MOV EAX,dword ptr [EDI + 0x4]
005aaffa  CMP ESI,dword ptr [EAX]
005aaffc  LEA ECX,[ESP + 0x18]
005ab000  JNZ 0x005ab021
005ab002  PUSH EBP
005ab003  PUSH ESI
005ab004  PUSH 0x1
005ab006  PUSH ECX
005ab007  MOV ECX,EDI
005ab009  CALL 0x005aa840
005ab00e  MOV EDX,dword ptr [EAX]
005ab010  MOV EAX,dword ptr [ESP + 0x14]
005ab014  POP EDI
005ab015  POP ESI
005ab016  MOV byte ptr [EAX + 0x4],0x1
005ab01a  MOV dword ptr [EAX],EDX
005ab01c  POP EBP
005ab01d  POP ECX
005ab01e  RET 0x8
005ab021  CALL 0x0058b620
005ab026  MOV EDX,dword ptr [ESP + 0x18]
005ab02a  MOV EAX,dword ptr [EDX + 0xc]
005ab02d  CMP EAX,dword ptr [EBP]
005ab030  JNC 0x005ab058
005ab032  MOV ECX,dword ptr [ESP + 0xc]
005ab036  PUSH EBP
005ab037  PUSH ESI
005ab038  PUSH ECX
005ab039  LEA EDX,[ESP + 0x24]
005ab03d  PUSH EDX
005ab03e  MOV ECX,EDI
005ab040  CALL 0x005aa840
005ab045  MOV ECX,dword ptr [EAX]
005ab047  MOV EAX,dword ptr [ESP + 0x14]
005ab04b  POP EDI
005ab04c  POP ESI
005ab04d  MOV dword ptr [EAX],ECX
005ab04f  MOV byte ptr [EAX + 0x4],0x1
005ab053  POP EBP
005ab054  POP ECX
005ab055  RET 0x8
005ab058  MOV EAX,dword ptr [ESP + 0x14]
005ab05c  POP EDI
005ab05d  POP ESI
005ab05e  MOV byte ptr [EAX + 0x4],0x0
005ab062  MOV dword ptr [EAX],EDX
005ab064  POP EBP
005ab065  POP ECX
005ab066  RET 0x8
