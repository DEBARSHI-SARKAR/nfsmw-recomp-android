006ffe00  PUSH EBX
006ffe01  PUSH ESI
006ffe02  MOV ESI,ECX
006ffe04  MOV EAX,dword ptr [ESI + 0x84]
006ffe0a  XOR EBX,EBX
006ffe0c  CMP EAX,EBX
006ffe0e  JL 0x006fff6f
006ffe14  CMP dword ptr [0x008f8704],EBX
006ffe1a  JZ 0x006fff6f
006ffe20  SUB EAX,EBX
006ffe22  PUSH EDI
006ffe23  JZ 0x006ffe7d
006ffe25  SUB EAX,0x2
006ffe28  JZ 0x006ffe71
006ffe2a  SUB EAX,0x3
006ffe2d  JZ 0x006ffe35
006ffe2f  PUSH 0x1
006ffe31  PUSH 0x64
006ffe33  JMP 0x006ffe92
006ffe35  MOV EDI,dword ptr [ESI + 0x48]
006ffe38  CMP EDI,EBX
006ffe3a  JZ 0x006ffea9
006ffe3c  MOV EAX,dword ptr [EDI + 0x544]
006ffe42  PUSH EBX
006ffe43  PUSH EAX
006ffe44  MOV ECX,EDI
006ffe46  CALL 0x004eb7d0
006ffe4b  MOV ECX,dword ptr [ESI + 0x2c]
006ffe4e  SAR EAX,0x8
006ffe51  PUSH 0x1
006ffe53  PUSH EAX
006ffe54  ADD ECX,0x4
006ffe57  CALL 0x004bad20
006ffe5c  CMP byte ptr [EDI + 0x548],BL
006ffe62  JZ 0x006ffe9d
006ffe64  PUSH 0x3
006ffe66  PUSH EBX
006ffe67  MOV ECX,EDI
006ffe69  CALL 0x004eb7d0
006ffe6e  PUSH EAX
006ffe6f  JMP 0x006ffe9e
006ffe71  MOV ECX,dword ptr [ESI + 0x4c]
006ffe74  CMP ECX,EBX
006ffe76  JZ 0x006ffea9
006ffe78  PUSH EBX
006ffe79  PUSH 0x2
006ffe7b  JMP 0x006ffe87
006ffe7d  MOV ECX,dword ptr [ESI + 0x4c]
006ffe80  CMP ECX,EBX
006ffe82  JZ 0x006ffea9
006ffe84  PUSH EBX
006ffe85  PUSH 0x1
006ffe87  CALL 0x004eb7d0
006ffe8c  SAR EAX,0x8
006ffe8f  PUSH 0x1
006ffe91  PUSH EAX
006ffe92  MOV ECX,dword ptr [ESI + 0x2c]
006ffe95  ADD ECX,0x4
006ffe98  CALL 0x004bad20
006ffe9d  PUSH EBX
006ffe9e  MOV ECX,dword ptr [ESI + 0x2c]
006ffea1  ADD ECX,0x4
006ffea4  CALL 0x004b22a0
006ffea9  MOV DI,word ptr [ESI + 0x8c]
006ffeb0  CMP DI,-0x1
006ffeb4  JZ 0x006ffee4
006ffeb6  FLD float ptr [0x009142d8]
006ffebc  FMUL float ptr [0x00894200]
006ffec2  CALL 0x007c4b80
006ffec7  MOV ECX,EDI
006ffec9  SUB ECX,EAX
006ffecb  CMP CX,BX
006ffece  MOV word ptr [ESI + 0x8c],CX
006ffed5  JGE 0x006fff3c
006ffed7  MOV ECX,dword ptr [ESI + 0x7c]
006ffeda  MOV word ptr [ESI + 0x8c],BX
006ffee1  PUSH ECX
006ffee2  JMP 0x006fff2f
006ffee4  MOV ECX,dword ptr [ESI + 0x2c]
006ffee7  ADD ECX,0x4
006ffeea  CALL 0x004b24b0
006ffeef  TEST EAX,EAX
006ffef1  JLE 0x006fff3c
006ffef3  CMP dword ptr [ESI + 0x7c],EBX
006ffef6  JZ 0x006fff3f
006ffef8  MOV ECX,dword ptr [ESI + 0x80]
006ffefe  CMP ECX,EBX
006fff00  MOV byte ptr [ESI + 0x50],0x1
006fff04  JZ 0x006fff25
006fff06  MOV EAX,dword ptr [ESI + 0x84]
006fff0c  CMP EAX,EBX
006fff0e  JL 0x006fff25
006fff10  CMP EAX,0x2
006fff13  JLE 0x006fff1a
006fff15  CMP EAX,0x5
006fff18  JNZ 0x006fff25
006fff1a  CMP word ptr [ESI + 0x8c],BX
006fff21  JG 0x006fff25
006fff23  CALL ECX
006fff25  MOV EDX,dword ptr [ESI + 0x7c]
006fff28  MOV dword ptr [ESI + 0x80],EBX
006fff2e  PUSH EDX
006fff2f  MOV ECX,0x912840
006fff34  CALL 0x004ac0e0
006fff39  MOV dword ptr [ESI + 0x7c],EBX
006fff3c  CMP dword ptr [ESI + 0x7c],EBX
006fff3f  POP EDI
006fff40  JNZ 0x006fff6f
006fff42  MOV ECX,dword ptr [ESI + 0x2c]
006fff45  ADD ECX,0x4
006fff48  CALL 0x004b21b0
006fff4d  TEST AL,AL
006fff4f  JNZ 0x006fff6f
006fff51  MOV ECX,dword ptr [ESI + 0x4c]
006fff54  CMP ECX,EBX
006fff56  MOV dword ptr [ESI + 0x84],0xffffffff
006fff60  JZ 0x006fff67
006fff62  CALL 0x004e0800
006fff67  MOV EAX,[0x00925ae8]
006fff6c  MOV dword ptr [ESI + 0x40],EAX
006fff6f  POP ESI
006fff70  POP EBX
006fff71  RET
