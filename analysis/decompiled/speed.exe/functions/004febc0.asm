004febc0  MOV ECX,dword ptr [ESP + 0x4]
004febc4  SUB ESP,0xc
004febc7  TEST ECX,ECX
004febc9  JZ 0x004fecbe
004febcf  PUSH EBX
004febd0  PUSH EBP
004febd1  PUSH ESI
004febd2  MOV ESI,dword ptr [ESP + 0x24]
004febd6  MOVZX EAX,word ptr [ESI + 0x2]
004febda  MOV EDX,dword ptr [ESI]
004febdc  MOV dword ptr [ESP + 0x10],EAX
004febe0  AND EDX,0xffff
004febe6  TEST EDX,EDX
004febe8  FILD dword ptr [ESP + 0x10]
004febec  MOV dword ptr [ESP + 0x14],EDX
004febf0  PUSH EDI
004febf1  FMUL float ptr [0x00899ddc]
004febf7  FILD dword ptr [ESP + 0x18]
004febfb  JGE 0x004fec03
004febfd  FADD float ptr [0x00891214]
004fec03  MOV EDI,dword ptr [ESP + 0x2c]
004fec07  MOVZX EAX,word ptr [EDI + 0x2]
004fec0b  MOV dword ptr [ESP + 0x10],EAX
004fec0f  FMUL float ptr [0x00899ddc]
004fec15  MOV EAX,dword ptr [ESP + 0x24]
004fec19  CDQ
004fec1a  IDIV ECX
004fec1c  FSTP float ptr [ESP + 0x14]
004fec20  FILD dword ptr [ESP + 0x10]
004fec24  FMUL float ptr [0x00899ddc]
004fec2a  FSUB ST0,ST1
004fec2c  FILD dword ptr [ESP + 0x20]
004fec30  FDIVP
004fec32  MOV EBX,EDX
004fec34  MOV dword ptr [ESP + 0x18],EBX
004fec38  MOV dword ptr [ESP + 0x10],EAX
004fec3c  FSTP float ptr [ESP + 0x20]
004fec40  FILD dword ptr [ESP + 0x18]
004fec44  FMUL float ptr [ESP + 0x20]
004fec48  FADD ST0,ST1
004fec4a  FMUL float ptr [0x00898864]
004fec50  CALL 0x007c4b80
004fec55  FILD dword ptr [ESP + 0x10]
004fec59  MOV EBP,EAX
004fec5b  SHL EBP,0x10
004fec5e  FMUL float ptr [ESP + 0x20]
004fec62  FADD float ptr [ESP + 0x14]
004fec66  FMUL float ptr [0x00898864]
004fec6c  CALL 0x007c4b80
004fec71  OR EBP,EAX
004fec73  INC EBX
004fec74  MOV dword ptr [ESP + 0x18],EBX
004fec78  FILD dword ptr [ESP + 0x18]
004fec7c  MOV dword ptr [ESI],EBP
004fec7e  FMUL float ptr [ESP + 0x20]
004fec82  FADD ST0,ST1
004fec84  FMUL float ptr [0x00898864]
004fec8a  CALL 0x007c4b80
004fec8f  FSTP ST0
004fec91  MOV ECX,dword ptr [ESP + 0x10]
004fec95  MOV ESI,EAX
004fec97  SHL ESI,0x10
004fec9a  INC ECX
004fec9b  MOV dword ptr [ESP + 0x18],ECX
004fec9f  FILD dword ptr [ESP + 0x18]
004feca3  FMUL float ptr [ESP + 0x20]
004feca7  FADD float ptr [ESP + 0x14]
004fecab  FMUL float ptr [0x00898864]
004fecb1  CALL 0x007c4b80
004fecb6  OR ESI,EAX
004fecb8  MOV dword ptr [EDI],ESI
004fecba  POP EDI
004fecbb  POP ESI
004fecbc  POP EBP
004fecbd  POP EBX
004fecbe  ADD ESP,0xc
004fecc1  RET
