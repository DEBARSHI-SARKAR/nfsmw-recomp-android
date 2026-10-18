004fc530  PUSH EBP
004fc531  MOV EBP,ESP
004fc533  AND ESP,0xfffffff0
004fc536  SUB ESP,0x54
004fc539  PUSH EBX
004fc53a  MOV EBX,dword ptr [EBP + 0xc]
004fc53d  PUSH ESI
004fc53e  PUSH EDI
004fc53f  LEA EAX,[ESP + 0x20]
004fc543  PUSH EBX
004fc544  PUSH EAX
004fc545  CALL 0x006be140
004fc54a  MOV ESI,dword ptr [EBP + 0x14]
004fc54d  MOV EDI,dword ptr [EBP + 0x8]
004fc550  ADD ESP,0x8
004fc553  TEST ESI,ESI
004fc555  JZ 0x004fc653
004fc55b  FLD float ptr [ESI]
004fc55d  LEA ECX,[ESP + 0x10]
004fc561  FSUB float ptr [EBX + 0x30]
004fc564  PUSH ECX
004fc565  LEA EDX,[ESP + 0x24]
004fc569  PUSH EDX
004fc56a  FSTP float ptr [ESP + 0x18]
004fc56e  MOV EAX,ECX
004fc570  FLD float ptr [ESI + 0x4]
004fc573  PUSH EAX
004fc574  FSUB float ptr [EBX + 0x34]
004fc577  MOV dword ptr [ESP + 0x28],0x3f800000
004fc57f  FSTP float ptr [ESP + 0x20]
004fc583  FLD float ptr [ESI + 0x8]
004fc586  FSUB float ptr [EBX + 0x38]
004fc589  FSTP float ptr [ESP + 0x24]
004fc58d  CALL 0x006bd920
004fc592  MOV EDX,dword ptr [0x00925e90]
004fc598  ADD ESP,0xc
004fc59b  CMP EDX,0x3
004fc59e  SETZ CL
004fc5a1  MOVZX EAX,CL
004fc5a4  TEST EAX,EAX
004fc5a6  JZ 0x004fc5b0
004fc5a8  FLD float ptr [0x00899c5c]
004fc5ae  JMP 0x004fc5b6
004fc5b0  FLD float ptr [0x00899c58]
004fc5b6  FLD float ptr [ESP + 0x1c]
004fc5ba  FMUL float ptr [ESP + 0x1c]
004fc5be  FLD float ptr [ESP + 0x18]
004fc5c2  FMUL float ptr [ESP + 0x18]
004fc5c6  FADDP
004fc5c8  FLD float ptr [ESP + 0x14]
004fc5cc  FMUL float ptr [ESP + 0x14]
004fc5d0  FADDP
004fc5d2  FLD float ptr [ESP + 0x10]
004fc5d6  FMUL float ptr [ESP + 0x10]
004fc5da  FADDP
004fc5dc  FSQRT
004fc5de  FST float ptr [ESP + 0xc]
004fc5e2  FCOMP float ptr [0x00899c58]
004fc5e8  FNSTSW AX
004fc5ea  TEST AH,0x5
004fc5ed  JP 0x004fc6a4
004fc5f3  MOV dword ptr [ESP + 0xc],0x4031eb85
004fc5fb  FSTP ST0
004fc5fd  LEA EDX,[ESP + 0x10]
004fc601  PUSH EDX
004fc602  MOV EAX,EDX
004fc604  PUSH EAX
004fc605  MOV dword ptr [ESP + 0x24],0x0
004fc60d  CALL 0x0045f590
004fc612  FLD float ptr [ESP + 0x14]
004fc616  FMUL float ptr [ESP + 0x18]
004fc61a  ADD ESP,0x8
004fc61d  FLD float ptr [ESP + 0xc]
004fc621  MOV dword ptr [EDI + 0xdc],0x3f800000
004fc62b  FMUL float ptr [ESP + 0x14]
004fc62f  FLD float ptr [ESP + 0xc]
004fc633  FMUL float ptr [ESP + 0x18]
004fc637  FSTP float ptr [ESP + 0x18]
004fc63b  MOV ECX,dword ptr [ESP + 0x18]
004fc63f  FXCH
004fc641  MOV dword ptr [EDI + 0xd8],ECX
004fc647  FSTP float ptr [EDI + 0xd0]
004fc64d  FSTP float ptr [EDI + 0xd4]
004fc653  MOV EAX,dword ptr [EBP + 0x10]
004fc656  TEST EAX,EAX
004fc658  JZ 0x004fc698
004fc65a  TEST ESI,ESI
004fc65c  JZ 0x004fc698
004fc65e  PUSH EAX
004fc65f  LEA ESI,[EDI + 0xf0]
004fc665  PUSH EBX
004fc666  PUSH ESI
004fc667  CALL 0x006bd900
004fc66c  ADD ESP,0xc
004fc66f  XOR EAX,EAX
004fc671  MOV dword ptr [ESI + 0xc],EAX
004fc674  MOV dword ptr [ESI + 0x1c],EAX
004fc677  MOV dword ptr [ESI + 0x2c],EAX
004fc67a  MOV EDX,dword ptr [EDI + 0xd0]
004fc680  MOV dword ptr [ESI + 0x30],EDX
004fc683  MOV ECX,dword ptr [EDI + 0xd4]
004fc689  MOV dword ptr [ESI + 0x34],ECX
004fc68c  MOV EDX,dword ptr [EDI + 0xd8]
004fc692  MOV dword ptr [ESI + 0x38],EDX
004fc695  MOV dword ptr [ESI + 0x3c],EAX
004fc698  POP EDI
004fc699  POP ESI
004fc69a  MOV EAX,0x1
004fc69f  POP EBX
004fc6a0  MOV ESP,EBP
004fc6a2  POP EBP
004fc6a3  RET
004fc6a4  FLD float ptr [ESP + 0xc]
004fc6a8  FCOMP
004fc6aa  FNSTSW AX
004fc6ac  TEST AH,0x41
004fc6af  JNZ 0x004fc5fb
004fc6b5  FSTP float ptr [ESP + 0xc]
004fc6b9  JMP 0x004fc5fd
