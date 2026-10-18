005d3cb0  SUB ESP,0x24
005d3cb3  PUSH EBX
005d3cb4  MOV EBX,dword ptr [ESP + 0x30]
005d3cb8  PUSH EBP
005d3cb9  MOV EBP,dword ptr [ESP + 0x3c]
005d3cbd  PUSH ESI
005d3cbe  MOV ESI,dword ptr [ESP + 0x3c]
005d3cc2  PUSH EDI
005d3cc3  MOV EDI,dword ptr [ESP + 0x38]
005d3cc7  PUSH EBP
005d3cc8  PUSH ESI
005d3cc9  PUSH EBX
005d3cca  PUSH EDI
005d3ccb  CALL 0x005ce080
005d3cd0  ADD ESP,0x10
005d3cd3  TEST AL,AL
005d3cd5  JZ 0x005d3dd3
005d3cdb  MOV EAX,EBX
005d3cdd  MOV ECX,dword ptr [EAX]
005d3cdf  MOV EDX,dword ptr [EAX + 0x4]
005d3ce2  MOV EAX,dword ptr [EAX + 0x8]
005d3ce5  MOV dword ptr [ESP + 0x1c],ECX
005d3ce9  FLD float ptr [ESP + 0x1c]
005d3ced  FSUB float ptr [ESI]
005d3cef  MOV ECX,dword ptr [EBP]
005d3cf2  MOV dword ptr [ESP + 0x20],EDX
005d3cf6  MOV EDX,dword ptr [EBP + 0x4]
005d3cf9  FSTP float ptr [ESP + 0x1c]
005d3cfd  MOV dword ptr [ESP + 0x24],EAX
005d3d01  FLD float ptr [ESP + 0x20]
005d3d05  MOV EAX,dword ptr [EBP + 0x8]
005d3d08  FSUB float ptr [ESI + 0x4]
005d3d0b  MOV dword ptr [ESP + 0x10],ECX
005d3d0f  MOV dword ptr [ESP + 0x14],EDX
005d3d13  MOV dword ptr [ESP + 0x18],EAX
005d3d17  FSTP float ptr [ESP + 0x20]
005d3d1b  LEA ECX,[ESP + 0x28]
005d3d1f  FLD float ptr [ESP + 0x24]
005d3d23  PUSH ECX
005d3d24  FSUB float ptr [ESI + 0x8]
005d3d27  LEA EDX,[ESP + 0x14]
005d3d2b  PUSH EDX
005d3d2c  LEA EAX,[ESP + 0x24]
005d3d30  FSTP float ptr [ESP + 0x2c]
005d3d34  PUSH EAX
005d3d35  FLD float ptr [ESP + 0x1c]
005d3d39  FSUB float ptr [ESI]
005d3d3b  FSTP float ptr [ESP + 0x1c]
005d3d3f  FLD float ptr [ESP + 0x20]
005d3d43  FSUB float ptr [ESI + 0x4]
005d3d46  FSTP float ptr [ESP + 0x20]
005d3d4a  FLD float ptr [ESP + 0x24]
005d3d4e  FSUB float ptr [ESI + 0x8]
005d3d51  FSTP float ptr [ESP + 0x24]
005d3d55  CALL 0x005d3bc0
005d3d5a  FLD float ptr [ESP + 0x3c]
005d3d5e  MOV EAX,dword ptr [ESP + 0x54]
005d3d62  FMUL float ptr [EBX + 0x8]
005d3d65  MOV ECX,dword ptr [EDI]
005d3d67  FLD float ptr [ESP + 0x38]
005d3d6b  ADD ESP,0xc
005d3d6e  FMUL float ptr [EBX + 0x4]
005d3d71  FADDP
005d3d73  FLD float ptr [ESP + 0x28]
005d3d77  FMUL float ptr [EBX]
005d3d79  MOV dword ptr [EAX],ECX
005d3d7b  FADDP
005d3d7d  FCHS
005d3d7f  FLD float ptr [ESP + 0x30]
005d3d83  FMUL float ptr [EDI + 0x8]
005d3d86  FLD float ptr [ESP + 0x28]
005d3d8a  FMUL float ptr [EDI]
005d3d8c  FADDP
005d3d8e  FADD ST0,ST1
005d3d90  FDIV float ptr [ESP + 0x2c]
005d3d94  FCHS
005d3d96  FSTP float ptr [EAX + 0x4]
005d3d99  MOV EDX,dword ptr [EDI + 0x8]
005d3d9c  MOV dword ptr [EAX + 0x8],EDX
005d3d9f  FSTP ST0
005d3da1  FLD float ptr [EAX + 0x4]
005d3da4  MOV EAX,dword ptr [ESP + 0x4c]
005d3da8  FSUB float ptr [EDI + 0x4]
005d3dab  FLD ST0
005d3dad  FSTP float ptr [EAX]
005d3daf  FCOMP float ptr [0x00890968]
005d3db5  FNSTSW AX
005d3db7  TEST AH,0x41
005d3dba  JNZ 0x005d3dc9
005d3dbc  POP EDI
005d3dbd  POP ESI
005d3dbe  POP EBP
005d3dbf  MOV EAX,0x1
005d3dc4  POP EBX
005d3dc5  ADD ESP,0x24
005d3dc8  RET
005d3dc9  POP EDI
005d3dca  POP ESI
005d3dcb  POP EBP
005d3dcc  XOR EAX,EAX
005d3dce  POP EBX
005d3dcf  ADD ESP,0x24
005d3dd2  RET
005d3dd3  POP EDI
005d3dd4  POP ESI
005d3dd5  POP EBP
005d3dd6  XOR AL,AL
005d3dd8  POP EBX
005d3dd9  ADD ESP,0x24
005d3ddc  RET
