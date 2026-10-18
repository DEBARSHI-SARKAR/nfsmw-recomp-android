004fe7a0  PUSH EBP
004fe7a1  MOV EBP,ESP
004fe7a3  AND ESP,0xfffffff0
004fe7a6  SUB ESP,0x24
004fe7a9  MOV EAX,dword ptr [EBP + 0x8]
004fe7ac  PUSH EBX
004fe7ad  PUSH ESI
004fe7ae  PUSH EDI
004fe7af  PUSH 0x0
004fe7b1  PUSH EAX
004fe7b2  LEA ECX,[ESP + 0x28]
004fe7b6  PUSH ECX
004fe7b7  CALL 0x0045eca0
004fe7bc  FLD float ptr [ESP + 0x2c]
004fe7c0  MOV ESI,dword ptr [EBP + 0x10]
004fe7c3  MOV BX,word ptr [ESI + 0x6a]
004fe7c7  FSTP float ptr [ESI + 0xc]
004fe7ca  FLD float ptr [ESP + 0x30]
004fe7ce  ADD ESP,0xc
004fe7d1  CALL 0x007c4b80
004fe7d6  TEST BL,0x1
004fe7d9  JNZ 0x004fe7df
004fe7db  ADD EBX,EAX
004fe7dd  JMP 0x004fe7e1
004fe7df  SUB EBX,EAX
004fe7e1  MOV EDX,dword ptr [EBP + 0xc]
004fe7e4  PUSH 0x0
004fe7e6  PUSH EDX
004fe7e7  LEA EAX,[ESP + 0x18]
004fe7eb  PUSH EAX
004fe7ec  MOV word ptr [ESI + 0x6a],BX
004fe7f0  CALL 0x0045eca0
004fe7f5  FLD float ptr [ESP + 0x1c]
004fe7f9  FMUL float ptr [0x00899dd8]
004fe7ff  ADD ESP,0xc
004fe802  FSTP float ptr [ESP + 0x10]
004fe806  FLD float ptr [ESP + 0x14]
004fe80a  FMUL float ptr [0x00899dd8]
004fe810  FSTP float ptr [ESP + 0x14]
004fe814  FLD float ptr [ESP + 0x18]
004fe818  FMUL float ptr [0x00899dd8]
004fe81e  FSTP float ptr [ESP + 0x18]
004fe822  FLD float ptr [ESP + 0x1c]
004fe826  FMUL float ptr [0x00899dd8]
004fe82c  FLD float ptr [ESP + 0x10]
004fe830  FCOMP float ptr [0x00890968]
004fe836  FNSTSW AX
004fe838  TEST AH,0x5
004fe83b  JP 0x004fe845
004fe83d  MOV dword ptr [ESP + 0x10],0x0
004fe845  FLD float ptr [ESP + 0x14]
004fe849  FCOMP float ptr [0x00890968]
004fe84f  FNSTSW AX
004fe851  TEST AH,0x5
004fe854  JP 0x004fe85e
004fe856  MOV dword ptr [ESP + 0x14],0x0
004fe85e  FLD float ptr [ESP + 0x18]
004fe862  FCOMP float ptr [0x00890968]
004fe868  FNSTSW AX
004fe86a  TEST AH,0x5
004fe86d  JP 0x004fe877
004fe86f  MOV dword ptr [ESP + 0x18],0x0
004fe877  FCOM float ptr [0x00890968]
004fe87d  FNSTSW AX
004fe87f  TEST AH,0x5
004fe882  JP 0x004fe88c
004fe884  FSTP ST0
004fe886  FLD float ptr [0x00890968]
004fe88c  FLD float ptr [ESP + 0x10]
004fe890  FCOMP float ptr [0x00899dd8]
004fe896  FNSTSW AX
004fe898  TEST AH,0x41
004fe89b  JNZ 0x004fe8a5
004fe89d  MOV dword ptr [ESP + 0x10],0x437f0000
004fe8a5  FLD float ptr [ESP + 0x14]
004fe8a9  FCOMP float ptr [0x00899dd8]
004fe8af  FNSTSW AX
004fe8b1  TEST AH,0x41
004fe8b4  JNZ 0x004fe8be
004fe8b6  MOV dword ptr [ESP + 0x14],0x437f0000
004fe8be  FLD float ptr [ESP + 0x18]
004fe8c2  FCOMP float ptr [0x00899dd8]
004fe8c8  FNSTSW AX
004fe8ca  TEST AH,0x41
004fe8cd  JNZ 0x004fe8d7
004fe8cf  MOV dword ptr [ESP + 0x18],0x437f0000
004fe8d7  FCOM float ptr [0x00899dd8]
004fe8dd  FNSTSW AX
004fe8df  TEST AH,0x41
004fe8e2  JNZ 0x004fe8ec
004fe8e4  FSTP ST0
004fe8e6  FLD float ptr [0x00899dd8]
004fe8ec  CALL 0x007c4b80
004fe8f1  FLD float ptr [ESP + 0x10]
004fe8f5  MOV EDI,EAX
004fe8f7  SHL EDI,0x8
004fe8fa  CALL 0x007c4b80
004fe8ff  FLD float ptr [ESP + 0x14]
004fe903  OR EDI,EAX
004fe905  SHL EDI,0x8
004fe908  CALL 0x007c4b80
004fe90d  FLD float ptr [ESP + 0x18]
004fe911  OR EDI,EAX
004fe913  SHL EDI,0x8
004fe916  CALL 0x007c4b80
004fe91b  OR EDI,EAX
004fe91d  MOV dword ptr [ESI + 0x8],EDI
004fe920  POP EDI
004fe921  POP ESI
004fe922  POP EBX
004fe923  MOV ESP,EBP
004fe925  POP EBP
004fe926  RET 0xc
