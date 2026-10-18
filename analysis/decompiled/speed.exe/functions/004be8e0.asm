004be8e0  MOV EAX,[0x008ef998]
004be8e5  SUB ESP,0x8c
004be8eb  CMP EAX,0x1
004be8ee  PUSH ESI
004be8ef  MOV ESI,ECX
004be8f1  JG 0x004bea66
004be8f7  FLD float ptr [ESI + 0x2c]
004be8fa  FSUB float ptr [ESP + 0x94]
004be901  FST float ptr [ESI + 0x2c]
004be904  FCOMP float ptr [0x00890968]
004be90a  FNSTSW AX
004be90c  TEST AH,0x41
004be90f  JZ 0x004bea66
004be915  MOV EAX,[0x008ee764]
004be91a  MOV dword ptr [ESI + 0x2c],EAX
004be91d  MOV EAX,dword ptr [ESI + 0x38]
004be920  MOV ECX,dword ptr [0x00912120]
004be926  CMP ECX,EAX
004be928  JZ 0x004bea62
004be92e  CMP ECX,0x3
004be931  JZ 0x004be93c
004be933  CMP EAX,0x3
004be936  JNZ 0x004bea62
004be93c  FLD float ptr [0x00914564]
004be942  MOV EAX,dword ptr [ESI + 0x14]
004be945  MOV ECX,dword ptr [0x00914560]
004be94b  FCHS
004be94d  MOV EDX,dword ptr [0x00914568]
004be953  FSTP float ptr [ESP + 0x8]
004be957  MOV dword ptr [ESP + 0x10],ECX
004be95b  MOV dword ptr [ESP + 0xc],EDX
004be95f  MOV ECX,dword ptr [EAX + 0x34]
004be962  MOV EDX,dword ptr [ECX + 0x40]
004be965  MOV dword ptr [ESP + 0x20],EDX
004be969  MOV ECX,dword ptr [EAX + 0x34]
004be96c  FLD float ptr [ECX + 0x44]
004be96f  LEA ECX,[ESP + 0x18]
004be973  FCHS
004be975  PUSH ECX
004be976  FSTP float ptr [ESP + 0x1c]
004be97a  MOV EDX,dword ptr [EAX + 0x34]
004be97d  MOV EAX,dword ptr [EDX + 0x48]
004be980  LEA EDX,[ESP + 0xc]
004be984  PUSH EDX
004be985  MOV dword ptr [ESP + 0x24],EAX
004be989  CALL 0x004100e0
004be98e  FST float ptr [ESP + 0xc]
004be992  FCOMP float ptr [0x008ee768]
004be998  ADD ESP,0x8
004be99b  FNSTSW AX
004be99d  TEST AH,0x41
004be9a0  JNZ 0x004be9ab
004be9a2  MOV EAX,[0x008ee768]
004be9a7  MOV dword ptr [ESP + 0x4],EAX
004be9ab  FLD float ptr [ESP + 0xc]
004be9af  LEA ECX,[ESP + 0x28]
004be9b3  FADD float ptr [0x00890d3c]
004be9b9  PUSH ECX
004be9ba  MOV EDX,ECX
004be9bc  PUSH EDX
004be9bd  FSTP float ptr [ESP + 0x14]
004be9c1  FLD float ptr [ESP + 0x10]
004be9c5  FSUB float ptr [ESP + 0x20]
004be9c9  FSTP float ptr [ESP + 0x30]
004be9cd  FLD float ptr [ESP + 0x14]
004be9d1  FSUB float ptr [ESP + 0x24]
004be9d5  FSTP float ptr [ESP + 0x34]
004be9d9  FLD float ptr [ESP + 0x18]
004be9dd  FSUB float ptr [ESP + 0x28]
004be9e1  FSTP float ptr [ESP + 0x38]
004be9e5  FLD float ptr [ESP + 0x1c]
004be9e9  FSUB float ptr [ESP + 0x2c]
004be9ed  FSTP float ptr [ESP + 0x3c]
004be9f1  CALL 0x004884a0
004be9f6  ADD ESP,0x8
004be9f9  LEA ECX,[ESP + 0x38]
004be9fd  CALL 0x004048c0
004bea02  PUSH 0x2
004bea04  LEA EAX,[ESP + 0x3c]
004bea08  PUSH EAX
004bea09  LEA ECX,[ESP + 0x10]
004bea0d  PUSH ECX
004bea0e  LEA ECX,[ESP + 0x34]
004bea12  MOV dword ptr [ESP + 0x34],0x0
004bea1a  MOV dword ptr [ESP + 0x38],0x3
004bea22  CALL 0x007854b0
004bea27  TEST EAX,EAX
004bea29  JZ 0x004bea62
004bea2b  LEA EDX,[ESP + 0x38]
004bea2f  PUSH EDX
004bea30  LEA EAX,[ESP + 0xc]
004bea34  PUSH EAX
004bea35  CALL 0x00401960
004bea3a  FLD float ptr [ESP + 0xc]
004bea3e  FMUL float ptr [ESP + 0xc]
004bea42  ADD ESP,0x8
004bea45  FSUB float ptr [0x00890dd8]
004bea4b  FCOMPP
004bea4d  FNSTSW AX
004bea4f  TEST AH,0x41
004bea52  JNZ 0x004bea62
004bea54  MOV byte ptr [ESI + 0x30],0x1
004bea58  POP ESI
004bea59  ADD ESP,0x8c
004bea5f  RET 0x4
004bea62  MOV byte ptr [ESI + 0x30],0x0
004bea66  POP ESI
004bea67  ADD ESP,0x8c
004bea6d  RET 0x4
