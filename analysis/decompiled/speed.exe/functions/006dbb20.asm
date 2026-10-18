006dbb20  PUSH EBP
006dbb21  MOV EBP,ESP
006dbb23  AND ESP,0xfffffff0
006dbb26  SUB ESP,0x3c
006dbb29  PUSH ESI
006dbb2a  CALL 0x00725570
006dbb2f  FLD float ptr [0x00982c74]
006dbb35  TEST EAX,EAX
006dbb37  FMUL float ptr [0x00895074]
006dbb3d  JNZ 0x006dbb48
006dbb3f  MOV AL,[0x008f9b28]
006dbb44  TEST AL,AL
006dbb46  JNZ 0x006dbb50
006dbb48  FSTP ST0
006dbb4a  FLD float ptr [0x00890968]
006dbb50  FLD float ptr [0x00982c6c]
006dbb56  MOV ECX,dword ptr [0x00919690]
006dbb5c  FSUB ST0,ST1
006dbb5e  FABS
006dbb60  FCOMP float ptr [0x00899dd0]
006dbb66  FNSTSW AX
006dbb68  TEST AH,0x41
006dbb6b  JNZ 0x006dbba6
006dbb6d  FLD float ptr [0x00982c6c]
006dbb73  FCOMP
006dbb75  FNSTSW AX
006dbb77  FSTP ST0
006dbb79  TEST AH,0x5
006dbb7c  JP 0x006dbb92
006dbb7e  FLD float ptr [0x008f9b20]
006dbb84  FADD float ptr [0x00982c6c]
006dbb8a  FSTP float ptr [0x00982c6c]
006dbb90  JMP 0x006dbba8
006dbb92  FLD float ptr [0x00982c6c]
006dbb98  FSUB float ptr [0x008f9b24]
006dbb9e  FSTP float ptr [0x00982c6c]
006dbba4  JMP 0x006dbba8
006dbba6  FSTP ST0
006dbba8  FLD float ptr [ECX + 0x208]
006dbbae  MOV EAX,dword ptr [ECX + 0x200]
006dbbb4  FLD float ptr [ECX + 0x204]
006dbbba  PUSH ECX
006dbbbb  FLD float ptr [ECX + 0x200]
006dbbc1  MOV dword ptr [ESP + 0x34],EAX
006dbbc5  FLD ST0
006dbbc7  MOV EDX,dword ptr [ECX + 0x204]
006dbbcd  FMUL ST1
006dbbcf  MOV dword ptr [ESP + 0x38],EDX
006dbbd3  FLD ST2
006dbbd5  MOV EAX,dword ptr [ECX + 0x208]
006dbbdb  FMUL ST3
006dbbdd  LEA ECX,[ESP + 0x34]
006dbbe1  PUSH ECX
006dbbe2  MOV EDX,ECX
006dbbe4  FADDP
006dbbe6  PUSH EDX
006dbbe7  FLD ST3
006dbbe9  MOV dword ptr [ESP + 0x44],EAX
006dbbed  FMUL ST4
006dbbef  MOV dword ptr [ESP + 0x48],0x0
006dbbf7  FADDP
006dbbf9  FSQRT
006dbbfb  FSTP ST3
006dbbfd  FSTP ST0
006dbbff  FSTP ST0
006dbc01  FSTP float ptr [ESP + 0x10]
006dbc05  CALL 0x007e7d64
006dbc0a  FLD float ptr [ESP + 0x4]
006dbc0e  FCOMP float ptr [0x008910cc]
006dbc14  FNSTSW AX
006dbc16  TEST AH,0x41
006dbc19  JNZ 0x006dbc5f
006dbc1b  LEA EAX,[ESP + 0x30]
006dbc1f  PUSH EAX
006dbc20  LEA ECX,[ESP + 0x24]
006dbc24  PUSH ECX
006dbc25  CALL 0x0045f590
006dbc2a  FLD float ptr [ESP + 0x30]
006dbc2e  FADD float ptr [ESP + 0x28]
006dbc32  ADD ESP,0x8
006dbc35  FSTP float ptr [ESP + 0x10]
006dbc39  FLD float ptr [ESP + 0x24]
006dbc3d  FADD float ptr [ESP + 0x28]
006dbc41  FSTP float ptr [ESP + 0x14]
006dbc45  FLD float ptr [ESP + 0x20]
006dbc49  FSUB float ptr [ESP + 0x28]
006dbc4d  FSTP float ptr [ESP + 0x18]
006dbc51  FLD float ptr [ESP + 0x24]
006dbc55  FSUB float ptr [ESP + 0x28]
006dbc59  FSTP float ptr [ESP + 0x1c]
006dbc5d  JMP 0x006dbc71
006dbc5f  XOR EDX,EDX
006dbc61  MOV dword ptr [ESP + 0x10],EDX
006dbc65  MOV dword ptr [ESP + 0x14],EDX
006dbc69  MOV dword ptr [ESP + 0x18],EDX
006dbc6d  MOV dword ptr [ESP + 0x1c],EDX
006dbc71  MOV EAX,[0x008f9b10]
006dbc76  FLD float ptr [ESP + 0x4]
006dbc7a  MOV ECX,dword ptr [0x008f9b14]
006dbc80  MOV dword ptr [ESP + 0x8],EAX
006dbc84  FCOMP float ptr [ESP + 0x8]
006dbc88  MOV dword ptr [ESP + 0xc],ECX
006dbc8c  FNSTSW AX
006dbc8e  TEST AH,0x41
006dbc91  JNP 0x006dbeb8
006dbc97  FLD float ptr [ESP + 0x4]
006dbc9b  FCOMP float ptr [ESP + 0xc]
006dbc9f  FNSTSW AX
006dbca1  TEST AH,0x1
006dbca4  JNZ 0x006dbcae
006dbca6  FLD float ptr [0x0089096c]
006dbcac  JMP 0x006dbcc0
006dbcae  FLD float ptr [ESP + 0x4]
006dbcb2  FSUB float ptr [ESP + 0x8]
006dbcb6  FLD float ptr [ESP + 0xc]
006dbcba  FSUB float ptr [ESP + 0x8]
006dbcbe  FDIVP
006dbcc0  FLD float ptr [0x00982c6c]
006dbcc6  FMUL double ptr [0x008afed0]
006dbccc  FADDP
006dbcce  FST float ptr [ESP + 0x4]
006dbcd2  FCOMP float ptr [0x008f9b18]
006dbcd8  FNSTSW AX
006dbcda  TEST AH,0x41
006dbcdd  JNZ 0x006dbce9
006dbcdf  MOV EDX,dword ptr [0x008f9b18]
006dbce5  MOV dword ptr [ESP + 0x4],EDX
006dbce9  FLD float ptr [ESP + 0x4]
006dbced  FCOMP float ptr [0x00899dd0]
006dbcf3  FNSTSW AX
006dbcf5  TEST AH,0x5
006dbcf8  JNP 0x006dbeb8
006dbcfe  FLD float ptr [0x00982c6c]
006dbd04  MOV EDX,dword ptr [0x0093de60]
006dbd0a  FMUL float ptr [0x008933d4]
006dbd10  MOV EAX,[0x00982bdc]
006dbd15  MOV ECX,dword ptr [EAX]
006dbd17  PUSH 0x0
006dbd19  FADD float ptr [0x0089096c]
006dbd1f  PUSH 0x0
006dbd21  PUSH EDX
006dbd22  MOV EDX,dword ptr [0x00982a28]
006dbd28  FMUL float ptr [ESP + 0x10]
006dbd2c  PUSH 0x0
006dbd2e  PUSH EDX
006dbd2f  FMUL float ptr [0x008f9b1c]
006dbd35  PUSH EAX
006dbd36  FLD float ptr [ESP + 0x28]
006dbd3a  MOV dword ptr [ESP + 0x24],0xffffffff
006dbd42  FMUL ST1
006dbd44  FMUL float ptr [0x008910c4]
006dbd4a  FSTP float ptr [ESP + 0x28]
006dbd4e  FLD float ptr [ESP + 0x2c]
006dbd52  FMUL ST1
006dbd54  FMUL float ptr [0x008910c4]
006dbd5a  FSTP float ptr [ESP + 0x2c]
006dbd5e  FLD float ptr [ESP + 0x30]
006dbd62  FMUL ST1
006dbd64  FMUL float ptr [0x008910c4]
006dbd6a  FSTP float ptr [ESP + 0x30]
006dbd6e  FMUL float ptr [ESP + 0x34]
006dbd72  FMUL float ptr [0x008910c4]
006dbd78  FSTP float ptr [ESP + 0x34]
006dbd7c  CALL dword ptr [ECX + 0x88]
006dbd82  MOV EDX,dword ptr [0x0093def8]
006dbd88  LEA EAX,[ESP + 0x10]
006dbd8c  PUSH EAX
006dbd8d  MOV EAX,[0x0093de64]
006dbd92  LEA ECX,[ESP + 0x24]
006dbd96  PUSH ECX
006dbd97  PUSH 0x4
006dbd99  PUSH EDX
006dbd9a  PUSH EAX
006dbd9b  MOV dword ptr [ESP + 0x34],0x3e800000
006dbda3  MOV dword ptr [ESP + 0x38],0x3e800000
006dbdab  MOV dword ptr [ESP + 0x3c],0x3e800000
006dbdb3  MOV dword ptr [ESP + 0x40],0x3e800000
006dbdbb  CALL 0x006d2840
006dbdc0  FLD float ptr [ESP + 0x24]
006dbdc4  FMUL double ptr [0x00897a40]
006dbdca  MOV EAX,[0x0093defc]
006dbdcf  LEA ECX,[ESP + 0x24]
006dbdd3  PUSH ECX
006dbdd4  MOV ECX,dword ptr [0x0093de60]
006dbdda  FSTP float ptr [ESP + 0x28]
006dbdde  FLD float ptr [ESP + 0x2c]
006dbde2  LEA EDX,[ESP + 0x38]
006dbde6  FMUL double ptr [0x00897a40]
006dbdec  PUSH EDX
006dbded  PUSH 0x4
006dbdef  PUSH EAX
006dbdf0  FSTP float ptr [ESP + 0x38]
006dbdf4  PUSH ECX
006dbdf5  FLD float ptr [ESP + 0x40]
006dbdf9  FMUL double ptr [0x00897a40]
006dbdff  FSTP float ptr [ESP + 0x40]
006dbe03  FLD float ptr [ESP + 0x44]
006dbe07  FMUL double ptr [0x00897a40]
006dbe0d  FSTP float ptr [ESP + 0x44]
006dbe11  CALL 0x006d2840
006dbe16  FLD float ptr [ESP + 0x2c]
006dbe1a  ADD ESP,0x28
006dbe1d  FCOMP float ptr [0x0089096c]
006dbe23  FNSTSW AX
006dbe25  TEST AH,0x41
006dbe28  JNZ 0x006dbe32
006dbe2a  MOV dword ptr [ESP + 0x4],0x3f800000
006dbe32  FLD float ptr [ESP + 0x4]
006dbe36  FMUL float ptr [0x00899dd8]
006dbe3c  CALL 0x007c4b80
006dbe41  MOV ECX,dword ptr [0x00982bdc]
006dbe47  MOV EDX,dword ptr [ECX]
006dbe49  MOV ESI,EAX
006dbe4b  SHL ESI,0x8
006dbe4e  OR ESI,EAX
006dbe50  SHL ESI,0x8
006dbe53  OR ESI,EAX
006dbe55  SHL ESI,0x8
006dbe58  OR ESI,EAX
006dbe5a  PUSH ESI
006dbe5b  PUSH 0xc1
006dbe60  PUSH ECX
006dbe61  CALL dword ptr [EDX + 0xe4]
006dbe67  MOV AL,[0x00982b24]
006dbe6c  TEST AL,AL
006dbe6e  PUSH -0x1
006dbe70  JZ 0x006dbe98
006dbe72  MOV ECX,dword ptr [0x00982a28]
006dbe78  PUSH 0x7
006dbe7a  PUSH 0x8
006dbe7c  PUSH 0x1
006dbe7e  LEA EAX,[ESP + 0x1c]
006dbe82  PUSH EAX
006dbe83  PUSH 0x93def8
006dbe88  PUSH 0x1
006dbe8a  PUSH ECX
006dbe8b  CALL 0x006d3b80
006dbe90  ADD ESP,0x20
006dbe93  POP ESI
006dbe94  MOV ESP,EBP
006dbe96  POP EBP
006dbe97  RET
006dbe98  MOV EAX,[0x00982a28]
006dbe9d  PUSH 0xf
006dbe9f  PUSH 0xe
006dbea1  PUSH 0x1
006dbea3  LEA EDX,[ESP + 0x1c]
006dbea7  PUSH EDX
006dbea8  PUSH 0x93def8
006dbead  PUSH 0x1
006dbeaf  PUSH EAX
006dbeb0  CALL 0x006d3b80
006dbeb5  ADD ESP,0x20
006dbeb8  POP ESI
006dbeb9  MOV ESP,EBP
006dbebb  POP EBP
006dbebc  RET
