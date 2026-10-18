005edd60  PUSH ESI
005edd61  MOV ESI,ECX
005edd63  MOV EAX,dword ptr [ESI + 0x2bc]
005edd69  TEST EAX,EAX
005edd6b  JBE 0x005ede14
005edd71  MOV EAX,dword ptr [ESI + 0x2c4]
005edd77  PUSH EDI
005edd78  MOV EDI,dword ptr [ESP + 0xc]
005edd7c  MOV EAX,dword ptr [EAX + EDI*0x4]
005edd7f  TEST EAX,EAX
005edd81  JZ 0x005eddb1
005edd83  CMP EAX,dword ptr [0x0091ca4c]
005edd89  JNZ 0x005edd90
005edd8b  CALL 0x0051fa30
005edd90  MOV ECX,dword ptr [ESI + 0x2c4]
005edd96  MOV ECX,dword ptr [ECX + EDI*0x4]
005edd99  TEST ECX,ECX
005edd9b  JZ 0x005edda4
005edd9d  PUSH 0x1
005edd9f  CALL 0x005ebed0
005edda4  MOV EDX,dword ptr [ESI + 0x2c4]
005eddaa  MOV dword ptr [EDX + EDI*0x4],0x0
005eddb1  MOV EDX,dword ptr [ESI + 0x2bc]
005eddb7  LEA EAX,[EDI + 0x1]
005eddba  CMP EAX,EDX
005eddbc  JNC 0x005eddfc
005eddbe  MOV ECX,dword ptr [ESI + 0x2c0]
005eddc4  CMP EAX,ECX
005eddc6  MOV EAX,dword ptr [ESI + 0x2c4]
005eddcc  JNC 0x005eddf5
005eddce  MOV ECX,dword ptr [EAX + ECX*0x4 + -0x4]
005eddd2  MOV dword ptr [EAX + EDI*0x4],ECX
005eddd5  MOV EAX,dword ptr [ESI + 0x2bc]
005edddb  MOV ECX,dword ptr [ESI + 0x2c0]
005edde1  CMP EAX,ECX
005edde3  JBE 0x005eddfc
005edde5  MOV EDX,dword ptr [ESI + 0x2c4]
005eddeb  MOV EAX,dword ptr [EDX + EAX*0x4 + -0x4]
005eddef  MOV dword ptr [EDX + ECX*0x4 + -0x4],EAX
005eddf3  JMP 0x005eddfc
005eddf5  MOV ECX,dword ptr [EAX + EDX*0x4 + -0x4]
005eddf9  MOV dword ptr [EAX + EDI*0x4],ECX
005eddfc  MOV EAX,dword ptr [ESI + 0x2c0]
005ede02  CMP EDI,EAX
005ede04  POP EDI
005ede05  JNC 0x005ede0e
005ede07  DEC EAX
005ede08  MOV dword ptr [ESI + 0x2c0],EAX
005ede0e  DEC dword ptr [ESI + 0x2bc]
005ede14  POP ESI
005ede15  RET 0x4
