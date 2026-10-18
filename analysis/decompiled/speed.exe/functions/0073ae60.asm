0073ae60  SUB ESP,0x10
0073ae63  MOV ECX,dword ptr [ESP + 0x1c]
0073ae67  PUSH EBX
0073ae68  PUSH ESI
0073ae69  XOR ESI,ESI
0073ae6b  XOR EAX,EAX
0073ae6d  XOR EBX,EBX
0073ae6f  CMP ECX,ESI
0073ae71  MOV dword ptr [ESP + 0x8],ESI
0073ae75  MOV dword ptr [ESP + 0x14],ESI
0073ae79  MOV dword ptr [ESP + 0x10],ESI
0073ae7d  MOV dword ptr [ESP + 0xc],EAX
0073ae81  JLE 0x0073af59
0073ae87  PUSH EBP
0073ae88  MOV EBP,dword ptr [ESP + 0x24]
0073ae8c  PUSH EDI
0073ae8d  MOV EDI,dword ptr [ESP + 0x24]
0073ae91  ADD EDI,0x3
0073ae94  FLD float ptr [EBP + ESI*0x4]
0073ae98  FCOMP float ptr [0x00899dd0]
0073ae9e  FNSTSW AX
0073aea0  TEST AH,0x41
0073aea3  JNZ 0x0073af37
0073aea9  MOVZX EAX,byte ptr [EDI + -0x1]
0073aead  MOV dword ptr [ESP + 0x24],EAX
0073aeb1  FILD dword ptr [ESP + 0x24]
0073aeb5  FMUL float ptr [EBP + ESI*0x4]
0073aeb9  CALL 0x007c4b80
0073aebe  ADD dword ptr [ESP + 0x14],EAX
0073aec2  MOVZX ECX,byte ptr [EDI + -0x2]
0073aec6  MOV dword ptr [ESP + 0x24],ECX
0073aeca  FILD dword ptr [ESP + 0x24]
0073aece  FMUL float ptr [EBP + ESI*0x4]
0073aed2  CALL 0x007c4b80
0073aed7  ADD dword ptr [ESP + 0x18],EAX
0073aedb  MOVZX EDX,byte ptr [EDI + -0x3]
0073aedf  MOV dword ptr [ESP + 0x24],EDX
0073aee3  FILD dword ptr [ESP + 0x24]
0073aee7  FMUL float ptr [EBP + ESI*0x4]
0073aeeb  CALL 0x007c4b80
0073aef0  MOV ECX,dword ptr [ESP + 0x1c]
0073aef4  ADD ECX,EAX
0073aef6  MOV AL,byte ptr [ESP + 0x30]
0073aefa  TEST AL,AL
0073aefc  MOV dword ptr [ESP + 0x1c],ECX
0073af00  JZ 0x0073af21
0073af02  MOVZX EAX,byte ptr [EDI]
0073af05  MOV dword ptr [ESP + 0x24],EAX
0073af09  FILD dword ptr [ESP + 0x24]
0073af0d  FMUL float ptr [EBP + ESI*0x4]
0073af11  CALL 0x007c4b80
0073af16  MOVZX EAX,AL
0073af19  CMP EAX,EBX
0073af1b  JLE 0x0073af37
0073af1d  MOV EBX,EAX
0073af1f  JMP 0x0073af37
0073af21  MOVZX ECX,byte ptr [EDI]
0073af24  MOV dword ptr [ESP + 0x24],ECX
0073af28  FILD dword ptr [ESP + 0x24]
0073af2c  FMUL float ptr [EBP + ESI*0x4]
0073af30  CALL 0x007c4b80
0073af35  ADD EBX,EAX
0073af37  MOV EAX,dword ptr [ESP + 0x2c]
0073af3b  INC ESI
0073af3c  ADD EDI,0x4
0073af3f  CMP ESI,EAX
0073af41  JL 0x0073ae94
0073af47  MOV EAX,dword ptr [ESP + 0x14]
0073af4b  CMP EAX,0xff
0073af50  POP EDI
0073af51  POP EBP
0073af52  MOV byte ptr [ESP + 0xa],0xff
0073af57  JG 0x0073af5d
0073af59  MOV byte ptr [ESP + 0xa],AL
0073af5d  MOV EAX,dword ptr [ESP + 0x10]
0073af61  CMP EAX,0xff
0073af66  MOV byte ptr [ESP + 0x9],0xff
0073af6b  JG 0x0073af71
0073af6d  MOV byte ptr [ESP + 0x9],AL
0073af71  MOV EAX,dword ptr [ESP + 0x14]
0073af75  CMP EAX,0xff
0073af7a  MOV byte ptr [ESP + 0x8],0xff
0073af7f  JG 0x0073af85
0073af81  MOV byte ptr [ESP + 0x8],AL
0073af85  CMP EBX,0xff
0073af8b  MOV byte ptr [ESP + 0xb],0xff
0073af90  JG 0x0073af96
0073af92  MOV byte ptr [ESP + 0xb],BL
0073af96  MOV EAX,dword ptr [ESP + 0x8]
0073af9a  POP ESI
0073af9b  POP EBX
0073af9c  ADD ESP,0x10
0073af9f  RET
