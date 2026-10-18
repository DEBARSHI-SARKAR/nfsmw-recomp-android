006a7f70  SUB ESP,0x30
006a7f73  PUSH EBX
006a7f74  MOV EBX,ECX
006a7f76  MOV EAX,dword ptr [EBX + 0xec]
006a7f7c  TEST EAX,EAX
006a7f7e  PUSH ESI
006a7f7f  PUSH EDI
006a7f80  MOV EDI,dword ptr [ESP + 0x50]
006a7f84  JZ 0x006a80b7
006a7f8a  MOV ECX,EAX
006a7f8c  MOV EAX,dword ptr [ECX]
006a7f8e  CALL dword ptr [EAX + 0x4c]
006a7f91  CMP EAX,0x2
006a7f94  JLE 0x006a80b7
006a7f9a  MOV ECX,dword ptr [EBX + 0x34]
006a7f9d  MOV EDX,dword ptr [ECX]
006a7f9f  CALL dword ptr [EDX + 0x54]
006a7fa2  MOV ESI,EAX
006a7fa4  MOV EAX,dword ptr [ESI]
006a7fa6  LEA ECX,[ESP + 0x24]
006a7faa  PUSH ECX
006a7fab  MOV ECX,ESI
006a7fad  CALL dword ptr [EAX + 0x34]
006a7fb0  MOV EDX,dword ptr [ESI]
006a7fb2  LEA EAX,[ESP + 0x18]
006a7fb6  PUSH EAX
006a7fb7  MOV ECX,ESI
006a7fb9  CALL dword ptr [EDX + 0x3c]
006a7fbc  MOV EDX,dword ptr [ESI]
006a7fbe  LEA EAX,[ESP + 0x30]
006a7fc2  PUSH EAX
006a7fc3  MOV ECX,ESI
006a7fc5  CALL dword ptr [EDX + 0x4c]
006a7fc8  FLD float ptr [ESP + 0x1c]
006a7fcc  FMUL float ptr [EDI + 0x4]
006a7fcf  FLD float ptr [ESP + 0x18]
006a7fd3  FMUL float ptr [EDI]
006a7fd5  FADDP
006a7fd7  FLD float ptr [ESP + 0x20]
006a7fdb  FMUL float ptr [EDI + 0x8]
006a7fde  FADDP
006a7fe0  FCOMP float ptr [0x008f8760]
006a7fe6  FNSTSW AX
006a7fe8  TEST AH,0x41
006a7feb  JNZ 0x006a80b7
006a7ff1  MOV EDX,dword ptr [ESI]
006a7ff3  MOV ECX,ESI
006a7ff5  CALL dword ptr [EDX + 0x20]
006a7ff8  FLD float ptr [ESP + 0x34]
006a7ffc  FCHS
006a7ffe  MOV ECX,dword ptr [EAX]
006a8000  FLD float ptr [ESP + 0x18]
006a8004  MOV dword ptr [ESP + 0xc],ECX
006a8008  FMUL ST1
006a800a  MOV EDX,dword ptr [EAX + 0x4]
006a800d  MOV dword ptr [ESP + 0x10],EDX
006a8011  MOV EAX,dword ptr [EAX + 0x8]
006a8014  FADD float ptr [ESP + 0xc]
006a8018  FLD float ptr [ESP + 0x1c]
006a801c  MOV dword ptr [ESP + 0x14],EAX
006a8020  FMUL ST2
006a8022  MOV EAX,dword ptr [ESP + 0x4c]
006a8026  MOV EDX,dword ptr [ESP + 0x40]
006a802a  PUSH 0x0
006a802c  FADD float ptr [ESP + 0x14]
006a8030  PUSH 0x31047ebc
006a8035  PUSH EDI
006a8036  FSTP float ptr [ESP + 0x1c]
006a803a  PUSH EAX
006a803b  FXCH
006a803d  LEA ECX,[ESP + 0x1c]
006a8041  FMUL float ptr [ESP + 0x30]
006a8045  PUSH ECX
006a8046  PUSH ECX
006a8047  MOV ECX,EBX
006a8049  FADD float ptr [ESP + 0x2c]
006a804d  FSTP float ptr [ESP + 0x2c]
006a8051  FLD float ptr [ESP + 0x50]
006a8055  FMUL float ptr [0x008ababc]
006a805b  FSTP float ptr [ESP + 0x68]
006a805f  FLD float ptr [ESP + 0x3c]
006a8063  FMUL float ptr [ESP + 0x68]
006a8067  FADD ST0,ST1
006a8069  FSTP float ptr [ESP + 0x24]
006a806d  FSTP ST0
006a806f  FLD float ptr [ESP + 0x40]
006a8073  FMUL float ptr [ESP + 0x68]
006a8077  FADD float ptr [ESP + 0x28]
006a807b  FSTP float ptr [ESP + 0x28]
006a807f  FLD float ptr [ESP + 0x44]
006a8083  FMUL float ptr [ESP + 0x68]
006a8087  FADD float ptr [ESP + 0x2c]
006a808b  FSTP float ptr [ESP + 0x2c]
006a808f  FLD float ptr [EAX + 0x4]
006a8092  FMUL float ptr [EDI + 0x4]
006a8095  FLD float ptr [EAX + 0x8]
006a8098  FMUL float ptr [EDI + 0x8]
006a809b  FADDP
006a809d  FLD float ptr [EAX]
006a809f  FMUL float ptr [EDI]
006a80a1  FADDP
006a80a3  FCHS
006a80a5  FSTP float ptr [ESP]
006a80a8  PUSH EDX
006a80a9  CALL 0x006a7bd0
006a80ae  POP EDI
006a80af  POP ESI
006a80b0  POP EBX
006a80b1  ADD ESP,0x30
006a80b4  RET 0x14
006a80b7  MOV EAX,dword ptr [ESP + 0x4c]
006a80bb  MOV ECX,dword ptr [ESP + 0x48]
006a80bf  MOV EDX,dword ptr [ESP + 0x44]
006a80c3  PUSH 0x0
006a80c5  PUSH 0xd9c6cdfd
006a80ca  PUSH EDI
006a80cb  PUSH EAX
006a80cc  MOV EAX,dword ptr [ESP + 0x50]
006a80d0  PUSH ECX
006a80d1  PUSH EDX
006a80d2  PUSH EAX
006a80d3  MOV ECX,EBX
006a80d5  CALL 0x006a7bd0
006a80da  POP EDI
006a80db  POP ESI
006a80dc  POP EBX
006a80dd  ADD ESP,0x30
006a80e0  RET 0x14
