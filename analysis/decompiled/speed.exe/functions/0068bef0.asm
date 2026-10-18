0068bef0  SUB ESP,0xc
0068bef3  PUSH EBX
0068bef4  MOV EBX,ECX
0068bef6  MOV EAX,dword ptr [EBX + 0x48]
0068bef9  PUSH ESI
0068befa  LEA ECX,[EBX + 0x48]
0068befd  PUSH EDI
0068befe  CALL dword ptr [EAX + 0x20]
0068bf01  MOV EDI,dword ptr [ESP + 0x1c]
0068bf05  FLD float ptr [EDI]
0068bf07  MOV EDX,dword ptr [EBX + 0x50]
0068bf0a  FSUB float ptr [EAX]
0068bf0c  LEA ESI,[EBX + 0x50]
0068bf0f  MOV ECX,ESI
0068bf11  FSTP float ptr [ESP + 0xc]
0068bf15  FLD float ptr [EDI + 0x4]
0068bf18  FSUB float ptr [EAX + 0x4]
0068bf1b  FSTP float ptr [ESP + 0x10]
0068bf1f  FLD float ptr [EDI + 0x8]
0068bf22  FSUB float ptr [EAX + 0x8]
0068bf25  FSTP float ptr [ESP + 0x14]
0068bf29  CALL dword ptr [EDX + 0x98]
0068bf2f  FLD float ptr [ESP + 0x14]
0068bf33  MOV ECX,ESI
0068bf35  FMUL float ptr [EAX + 0x8]
0068bf38  FLD float ptr [ESP + 0x10]
0068bf3c  FMUL float ptr [EAX + 0x4]
0068bf3f  FADDP
0068bf41  FLD float ptr [ESP + 0xc]
0068bf45  FMUL float ptr [EAX]
0068bf47  MOV EAX,dword ptr [ESI]
0068bf49  FADDP
0068bf4b  FSTP float ptr [ESP + 0x1c]
0068bf4f  CALL dword ptr [EAX + 0x9c]
0068bf55  MOV EDX,dword ptr [ESI]
0068bf57  MOV ECX,ESI
0068bf59  CALL dword ptr [EDX + 0x98]
0068bf5f  FLD float ptr [EAX + 0x8]
0068bf62  FMUL float ptr [EDI + 0x14]
0068bf65  FLD float ptr [EAX + 0x4]
0068bf68  FMUL float ptr [EDI + 0x10]
0068bf6b  FADDP
0068bf6d  FLD float ptr [EAX]
0068bf6f  FMUL float ptr [EDI + 0xc]
0068bf72  FADDP
0068bf74  FCOM float ptr [0x00890968]
0068bf7a  FNSTSW AX
0068bf7c  TEST AH,0x5
0068bf7f  JP 0x0068bf83
0068bf81  FCHS
0068bf83  FLD float ptr [ESP + 0x1c]
0068bf87  FCOMP float ptr [0x00890968]
0068bf8d  FNSTSW AX
0068bf8f  FCOMP float ptr [0x00891058]
0068bf95  TEST AH,0x41
0068bf98  FNSTSW AX
0068bf9a  JNZ 0x0068bfbf
0068bf9c  TEST AH,0x5
0068bf9f  MOV EAX,dword ptr [EBX + 0x188]
0068bfa5  JP 0x0068bfb3
0068bfa7  POP EDI
0068bfa8  POP ESI
0068bfa9  ADD EAX,0x18
0068bfac  POP EBX
0068bfad  ADD ESP,0xc
0068bfb0  RET 0x4
0068bfb3  POP EDI
0068bfb4  POP ESI
0068bfb5  ADD EAX,0x30
0068bfb8  POP EBX
0068bfb9  ADD ESP,0xc
0068bfbc  RET 0x4
0068bfbf  TEST AH,0x5
0068bfc2  MOV EAX,dword ptr [EBX + 0x188]
0068bfc8  JNP 0x0068bfcd
0068bfca  ADD EAX,0x48
0068bfcd  POP EDI
0068bfce  POP ESI
0068bfcf  POP EBX
0068bfd0  ADD ESP,0xc
0068bfd3  RET 0x4
