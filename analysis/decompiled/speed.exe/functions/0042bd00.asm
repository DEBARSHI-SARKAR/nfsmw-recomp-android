0042bd00  SUB ESP,0x14
0042bd03  PUSH EBP
0042bd04  MOV EBP,ECX
0042bd06  MOV EAX,dword ptr [EBP]
0042bd09  CALL dword ptr [EAX + 0x1c]
0042bd0c  TEST EAX,EAX
0042bd0e  JZ 0x0042bf65
0042bd14  MOV EDX,dword ptr [EBP]
0042bd17  MOV ECX,EBP
0042bd19  CALL dword ptr [EDX + 0x1c]
0042bd1c  MOV EDX,dword ptr [EAX]
0042bd1e  MOV ECX,EAX
0042bd20  CALL dword ptr [EDX + 0x8]
0042bd23  TEST EAX,EAX
0042bd25  JZ 0x0042bf65
0042bd2b  MOV EAX,dword ptr [EBP]
0042bd2e  PUSH EBX
0042bd2f  PUSH EDI
0042bd30  MOV ECX,EBP
0042bd32  CALL dword ptr [EAX + 0x1c]
0042bd35  MOV EDX,dword ptr [EAX]
0042bd37  MOV ECX,EAX
0042bd39  CALL dword ptr [EDX + 0x8]
0042bd3c  MOV EDI,EAX
0042bd3e  MOV EAX,dword ptr [EBP]
0042bd41  MOV ECX,EBP
0042bd43  ADD EDI,0x10
0042bd46  CALL dword ptr [EAX + 0x1c]
0042bd49  MOV EDX,dword ptr [EAX]
0042bd4b  MOV ECX,EAX
0042bd4d  CALL dword ptr [EDX + 0x140]
0042bd53  MOV EBX,dword ptr [EBP + 0xc]
0042bd56  CMP EBX,dword ptr [EBP + 0x10]
0042bd59  MOV dword ptr [ESP + 0x14],0x7f7fffff
0042bd61  MOV dword ptr [ESP + 0xc],0x7f7fffff
0042bd69  JZ 0x0042be93
0042bd6f  PUSH ESI
0042bd70  MOV ESI,dword ptr [EBX]
0042bd72  MOV EAX,dword ptr [ESI]
0042bd74  MOV ECX,ESI
0042bd76  CALL dword ptr [EAX + 0x88]
0042bd7c  TEST AL,AL
0042bd7e  JZ 0x0042be84
0042bd84  MOV EDX,dword ptr [ESI]
0042bd86  MOV ECX,ESI
0042bd88  CALL dword ptr [EDX + 0x7c]
0042bd8b  TEST AL,AL
0042bd8d  JNZ 0x0042be84
0042bd93  MOV EAX,dword ptr [ESI]
0042bd95  MOV ECX,ESI
0042bd97  CALL dword ptr [EAX + 0xc]
0042bd9a  FLD float ptr [EAX + 0x4]
0042bd9d  FSUB float ptr [EDI + 0x4]
0042bda0  MOV EDX,dword ptr [ESI]
0042bda2  MOV ECX,ESI
0042bda4  FABS
0042bda6  FSTP float ptr [ESP + 0x20]
0042bdaa  CALL dword ptr [EDX + 0xc]
0042bdad  FLD float ptr [EAX]
0042bdaf  FSUB float ptr [EDI]
0042bdb1  PUSH ECX
0042bdb2  FLD float ptr [EAX + 0x4]
0042bdb5  FSUB float ptr [EDI + 0x4]
0042bdb8  FLD float ptr [EAX + 0x8]
0042bdbb  FSUB float ptr [EDI + 0x8]
0042bdbe  FLD ST0
0042bdc0  FMUL ST1
0042bdc2  FLD ST2
0042bdc4  FMUL ST3
0042bdc6  FADDP
0042bdc8  FLD ST3
0042bdca  FMUL ST4
0042bdcc  FADDP
0042bdce  FSTP float ptr [ESP]
0042bdd1  FSTP ST0
0042bdd3  FSTP ST0
0042bdd5  FSTP ST0
0042bdd7  CALL 0x005c5e80
0042bddc  MOV EAX,dword ptr [ESI]
0042bdde  FSTP float ptr [ESP + 0x18]
0042bde2  ADD ESP,0x4
0042bde5  MOV ECX,ESI
0042bde7  CALL dword ptr [EAX + 0xc]
0042bdea  FLD float ptr [EAX + 0x8]
0042bded  FSUB float ptr [EDI + 0x8]
0042bdf0  FLD float ptr [EAX]
0042bdf2  FSUB float ptr [EDI]
0042bdf4  FLD ST0
0042bdf6  FMUL ST1
0042bdf8  FLD ST2
0042bdfa  FMUL ST3
0042bdfc  FADDP
0042bdfe  FSTP float ptr [ESP + 0x1c]
0042be02  MOV ECX,dword ptr [ESP + 0x1c]
0042be06  FSTP ST0
0042be08  PUSH ECX
0042be09  FSTP ST0
0042be0b  CALL 0x005c5e80
0042be10  FLD float ptr [ESP + 0x18]
0042be14  ADD ESP,0x4
0042be17  FCOMP float ptr [ESP + 0x18]
0042be1b  FNSTSW AX
0042be1d  TEST AH,0x5
0042be20  JP 0x0042be34
0042be22  MOV EAX,dword ptr [ESP + 0x30]
0042be26  TEST EAX,EAX
0042be28  MOV EDX,dword ptr [ESP + 0x14]
0042be2c  MOV dword ptr [ESP + 0x18],EDX
0042be30  JZ 0x0042be34
0042be32  MOV dword ptr [EAX],ESI
0042be34  FLD float ptr [ESP + 0x20]
0042be38  FCOMP float ptr [0x00890d44]
0042be3e  FNSTSW AX
0042be40  TEST AH,0x5
0042be43  JP 0x0042be56
0042be45  FCOM float ptr [ESP + 0x10]
0042be49  FNSTSW AX
0042be4b  TEST AH,0x5
0042be4e  JP 0x0042be56
0042be50  FSTP float ptr [ESP + 0x10]
0042be54  JMP 0x0042be58
0042be56  FSTP ST0
0042be58  FLD float ptr [ESP + 0x14]
0042be5c  FCOMP float ptr [0x00890544]
0042be62  FNSTSW AX
0042be64  TEST AH,0x5
0042be67  JP 0x0042be84
0042be69  MOV ECX,dword ptr [ESI + 0x4]
0042be6c  PUSH 0x4038e0
0042be71  CALL 0x005d59f0
0042be76  TEST EAX,EAX
0042be78  JZ 0x0042be84
0042be7a  MOV EDX,dword ptr [EAX]
0042be7c  MOV ECX,EAX
0042be7e  CALL dword ptr [EDX + 0x88]
0042be84  MOV EAX,dword ptr [EBP + 0x10]
0042be87  ADD EBX,0x4
0042be8a  CMP EBX,EAX
0042be8c  JNZ 0x0042bd70
0042be92  POP ESI
0042be93  MOV EAX,dword ptr [ESP + 0x28]
0042be97  FLD float ptr [ESP + 0xc]
0042be9b  FSTP float ptr [EAX]
0042be9d  FLD float ptr [ESP + 0x24]
0042bea1  FCOMP float ptr [0x00890968]
0042bea7  FNSTSW AX
0042bea9  TEST AH,0x41
0042beac  JNZ 0x0042bf58
0042beb2  FLD float ptr [ESP + 0xc]
0042beb6  MOV byte ptr [EBP + 0x5c],0x0
0042beba  FCOMP float ptr [0x008916d0]
0042bec0  FNSTSW AX
0042bec2  TEST AH,0x5
0042bec5  JP 0x0042bf58
0042becb  FLD float ptr [EDI + 0x8]
0042bece  FSUB float ptr [EBP + 0x3c]
0042bed1  FLD float ptr [EDI + 0x4]
0042bed4  FSUB float ptr [EBP + 0x38]
0042bed7  FLD float ptr [EDI]
0042bed9  FSUB float ptr [EBP + 0x34]
0042bedc  FLD ST0
0042bede  FMUL ST1
0042bee0  FLD ST2
0042bee2  FMUL ST3
0042bee4  FADDP
0042bee6  FLD ST3
0042bee8  FMUL ST4
0042beea  FADDP
0042beec  FCOMP float ptr [0x00890f90]
0042bef2  FSTP ST0
0042bef4  FNSTSW AX
0042bef6  FSTP ST0
0042bef8  TEST AH,0x5
0042befb  FSTP ST0
0042befd  JP 0x0042bf3e
0042beff  FLD float ptr [ESP + 0x24]
0042bf03  FADD float ptr [EBP + 0x58]
0042bf06  FST float ptr [EBP + 0x58]
0042bf09  FCOMP float ptr [0x00890560]
0042bf0f  FNSTSW AX
0042bf11  TEST AH,0x41
0042bf14  JZ 0x0042bf2d
0042bf16  MOV EDX,dword ptr [EBP]
0042bf19  MOV ECX,EBP
0042bf1b  CALL dword ptr [EDX + 0x1c]
0042bf1e  MOV EDX,dword ptr [EAX]
0042bf20  MOV ECX,EAX
0042bf22  CALL dword ptr [EDX + 0x114]
0042bf28  CMP EAX,0x2
0042bf2b  JNZ 0x0042bf58
0042bf2d  FLD float ptr [ESP + 0x14]
0042bf31  POP EDI
0042bf32  POP EBX
0042bf33  MOV byte ptr [EBP + 0x5c],0x1
0042bf37  POP EBP
0042bf38  ADD ESP,0x14
0042bf3b  RET 0xc
0042bf3e  MOV ECX,dword ptr [EDI]
0042bf40  LEA EAX,[EBP + 0x4c]
0042bf43  MOV dword ptr [EAX],ECX
0042bf45  MOV EDX,dword ptr [EDI + 0x4]
0042bf48  MOV dword ptr [EAX + 0x4],EDX
0042bf4b  MOV ECX,dword ptr [EDI + 0x8]
0042bf4e  MOV dword ptr [EAX + 0x8],ECX
0042bf51  MOV dword ptr [EBP + 0x58],0x0
0042bf58  FLD float ptr [ESP + 0x14]
0042bf5c  POP EDI
0042bf5d  POP EBX
0042bf5e  POP EBP
0042bf5f  ADD ESP,0x14
0042bf62  RET 0xc
0042bf65  FLD float ptr [0x008908bc]
0042bf6b  POP EBP
0042bf6c  ADD ESP,0x14
0042bf6f  RET 0xc
