005cab00  MOV EAX,dword ptr [ESP + 0x4]
005cab04  MOV ECX,dword ptr [ESP + 0x8]
005cab08  SUB ESP,0x40
005cab0b  PUSH ESI
005cab0c  PUSH EDI
005cab0d  ADD EAX,0x8
005cab10  LEA EDX,[ESP + 0x10]
005cab14  MOV ESI,0x4
005cab19  LEA ESP,[ESP]
005cab20  FLD float ptr [ECX + 0x30]
005cab23  ADD EAX,0x10
005cab26  FMUL float ptr [EAX + -0xc]
005cab29  ADD EDX,0x10
005cab2c  DEC ESI
005cab2d  FLD float ptr [ECX + 0x10]
005cab30  FMUL float ptr [EAX + -0x14]
005cab33  FADDP
005cab35  FLD float ptr [ECX + 0x20]
005cab38  FMUL float ptr [EAX + -0x10]
005cab3b  FADDP
005cab3d  FLD float ptr [EAX + -0x18]
005cab40  FMUL float ptr [ECX]
005cab42  FADDP
005cab44  FSTP float ptr [EDX + -0x18]
005cab47  FLD float ptr [EAX + -0x18]
005cab4a  FMUL float ptr [ECX + 0x4]
005cab4d  FLD float ptr [EAX + -0xc]
005cab50  FMUL float ptr [ECX + 0x34]
005cab53  FADDP
005cab55  FLD float ptr [ECX + 0x24]
005cab58  FMUL float ptr [EAX + -0x10]
005cab5b  FADDP
005cab5d  FLD float ptr [EAX + -0x14]
005cab60  FMUL float ptr [ECX + 0x14]
005cab63  FADDP
005cab65  FSTP float ptr [EDX + -0x14]
005cab68  FLD float ptr [ECX + 0x8]
005cab6b  FMUL float ptr [EAX + -0x18]
005cab6e  FLD float ptr [EAX + -0xc]
005cab71  FMUL float ptr [ECX + 0x38]
005cab74  FADDP
005cab76  FLD float ptr [ECX + 0x28]
005cab79  FMUL float ptr [EAX + -0x10]
005cab7c  FADDP
005cab7e  FLD float ptr [EAX + -0x14]
005cab81  FMUL float ptr [ECX + 0x18]
005cab84  FADDP
005cab86  FSTP float ptr [EDX + -0x10]
005cab89  FLD float ptr [ECX + 0x3c]
005cab8c  FMUL float ptr [EAX + -0xc]
005cab8f  FLD float ptr [ECX + 0x1c]
005cab92  FMUL float ptr [EAX + -0x14]
005cab95  FADDP
005cab97  FLD float ptr [ECX + 0x2c]
005cab9a  FMUL float ptr [EAX + -0x10]
005cab9d  FADDP
005cab9f  FLD float ptr [EAX + -0x18]
005caba2  FMUL float ptr [ECX + 0xc]
005caba5  FADDP
005caba7  FSTP float ptr [EDX + -0xc]
005cabaa  JNZ 0x005cab20
005cabb0  MOV EDI,dword ptr [ESP + 0x54]
005cabb4  MOV ECX,0x10
005cabb9  LEA ESI,[ESP + 0x8]
005cabbd  MOVSD.REP ES:EDI,ESI
005cabbf  POP EDI
005cabc0  POP ESI
005cabc1  ADD ESP,0x40
005cabc4  RET
