0072aac0  PUSH EBP
0072aac1  MOV EBP,ESP
0072aac3  AND ESP,0xfffffff0
0072aac6  PUSH -0x1
0072aac8  PUSH 0x88053e
0072aacd  MOV EAX,FS:[0x0]
0072aad3  PUSH EAX
0072aad4  MOV dword ptr FS:[0x0],ESP
0072aadb  SUB ESP,0xb8
0072aae1  PUSH EBX
0072aae2  PUSH ESI
0072aae3  MOV ESI,dword ptr [EBP + 0x8]
0072aae6  MOV EAX,dword ptr [ESI + 0x4]
0072aae9  XOR ECX,ECX
0072aaeb  CMP EAX,0x1
0072aaee  MOV AL,byte ptr [ESI + 0x8]
0072aaf1  SETNZ CL
0072aaf4  TEST AL,AL
0072aaf6  PUSH EDI
0072aaf7  MOV EDI,ECX
0072aaf9  JZ 0x0072b117
0072aaff  MOV ECX,dword ptr [ESI + 0x44]
0072ab02  LEA EAX,[ESI + 0x44]
0072ab05  CMP ECX,EAX
0072ab07  JZ 0x0072b117
0072ab0d  MOV EAX,ECX
0072ab0f  TEST EAX,EAX
0072ab11  JZ 0x0072b117
0072ab17  LEA ECX,[EAX + -0x4]
0072ab1a  TEST ECX,ECX
0072ab1c  JZ 0x0072b117
0072ab22  MOV EDX,dword ptr [ECX]
0072ab24  CALL dword ptr [EDX + 0x10]
0072ab27  TEST EAX,EAX
0072ab29  MOV dword ptr [ESP + 0x18],EAX
0072ab2d  JZ 0x0072b117
0072ab33  MOV ESI,dword ptr [ESI + 0x40]
0072ab36  MOV EAX,dword ptr [ESI + 0x40]
0072ab39  FLD float ptr [ESI + 0x44]
0072ab3c  LEA EBX,[ESI + 0x40]
0072ab3f  FSTP float ptr [ESP + 0x4c]
0072ab43  MOV dword ptr [ESP + 0x48],EAX
0072ab47  MOV AL,[0x009ae350]
0072ab4c  ADD ESI,0x50
0072ab4f  TEST AL,0x1
0072ab51  JNZ 0x0072ab83
0072ab53  OR dword ptr [0x009ae350],0x1
0072ab5a  PUSH 0x402190
0072ab5f  PUSH 0x2
0072ab61  PUSH 0x10
0072ab63  PUSH 0x9ae330
0072ab68  MOV dword ptr [ESP + 0xdc],0x0
0072ab73  CALL 0x00404db0
0072ab78  MOV dword ptr [ESP + 0xcc],0xffffffff
0072ab83  LEA EAX,[EDI*0x4 + 0x9a3a24]
0072ab8a  MOV dword ptr [ESP + 0x10],EAX
0072ab8e  MOV EAX,dword ptr [EAX]
0072ab90  TEST EAX,EAX
0072ab92  JZ 0x0072abba
0072ab94  MOVSX ECX,word ptr [EAX + 0x40]
0072ab98  PUSH ECX
0072ab99  ADD EAX,0x44
0072ab9c  PUSH EAX
0072ab9d  LEA EDX,[ESP + 0x50]
0072aba1  PUSH EDX
0072aba2  CALL 0x004601b0
0072aba7  ADD ESP,0xc
0072abaa  TEST AL,AL
0072abac  JZ 0x0072abba
0072abae  MOV EAX,dword ptr [ESP + 0x10]
0072abb2  MOV EAX,dword ptr [EAX]
0072abb4  MOV dword ptr [ESP + 0x38],EAX
0072abb8  JMP 0x0072abd1
0072abba  PUSH 0x0
0072abbc  PUSH 0x3
0072abbe  LEA ECX,[ESP + 0x50]
0072abc2  PUSH ECX
0072abc3  MOV ECX,0x9aa540
0072abc8  CALL 0x00727480
0072abcd  MOV dword ptr [ESP + 0x38],EAX
0072abd1  TEST EAX,EAX
0072abd3  JZ 0x0072af71
0072abd9  FLD float ptr [EAX + 0x14]
0072abdc  MOV EDX,dword ptr [ESP + 0x18]
0072abe0  FCOMP float ptr [EDX + 0x28]
0072abe3  FNSTSW AX
0072abe5  TEST AH,0x41
0072abe8  JNZ 0x0072af71
0072abee  FLD float ptr [EBX + 0x4]
0072abf1  MOV ECX,dword ptr [EBX]
0072abf3  FLD float ptr [EBX + 0x8]
0072abf6  MOV EAX,EDI
0072abf8  SHL EAX,0x4
0072abfb  FXCH
0072abfd  ADD EAX,0x9ae330
0072ac02  FSTP float ptr [EAX + 0x4]
0072ac05  MOV dword ptr [EAX],ECX
0072ac07  MOV ECX,dword ptr [EBP + 0x8]
0072ac0a  LEA EDX,[ESP + 0x18]
0072ac0e  FSTP float ptr [EAX + 0x8]
0072ac11  PUSH EDX
0072ac12  LEA EAX,[ESP + 0xa4]
0072ac19  PUSH EAX
0072ac1a  PUSH ECX
0072ac1b  CALL 0x0072a760
0072ac20  MOV EBX,EAX
0072ac22  ADD ESP,0xc
0072ac25  TEST EBX,EBX
0072ac27  JZ 0x0072b117
0072ac2d  MOV EDX,dword ptr [ESP + 0xa0]
0072ac34  MOV EAX,dword ptr [ESP + 0xa4]
0072ac3b  LEA ECX,[ESP + 0x40]
0072ac3f  PUSH ECX
0072ac40  MOV ECX,dword ptr [ESP + 0x3c]
0072ac44  MOV dword ptr [ESP + 0x1c],EDX
0072ac48  LEA EDX,[ESP + 0x34]
0072ac4c  MOV dword ptr [ESP + 0x20],EAX
0072ac50  PUSH EDX
0072ac51  LEA EAX,[ESP + 0x20]
0072ac55  PUSH EAX
0072ac56  CALL 0x00723330
0072ac5b  FLD float ptr [0x00890da8]
0072ac61  FLD ST1
0072ac63  FUCOMPP
0072ac65  FNSTSW AX
0072ac67  TEST AH,0x44
0072ac6a  JNP 0x0072b115
0072ac70  FCOMP float ptr [0x00891184]
0072ac76  FNSTSW AX
0072ac78  TEST AH,0x5
0072ac7b  JP 0x0072b117
0072ac81  MOV ECX,dword ptr [ESP + 0xa8]
0072ac88  FLD float ptr [ESP + 0xa4]
0072ac8f  MOV EDX,dword ptr [ESP + 0xa0]
0072ac96  FCHS
0072ac98  PUSH 0x0
0072ac9a  FSTP float ptr [ESP + 0x24]
0072ac9e  MOV dword ptr [ESP + 0x28],ECX
0072aca2  LEA EAX,[ESP + 0x1c]
0072aca6  PUSH EAX
0072aca7  LEA ECX,[ESP + 0x28]
0072acab  PUSH ECX
0072acac  LEA ECX,[ESP + 0xac]
0072acb3  MOV dword ptr [ESP + 0x34],EDX
0072acb7  MOV dword ptr [ESP + 0xac],0x0
0072acc2  MOV dword ptr [ESP + 0xb0],0x3
0072accd  CALL 0x00789870
0072acd2  FLD float ptr [ESP + 0x30]
0072acd6  FADD float ptr [ESI]
0072acd8  LEA EAX,[EDI + EDI*0x2]
0072acdb  SHL EAX,0x4
0072acde  LEA EDI,[EDI*0x4 + 0x9ae328]
0072ace5  FST float ptr [ESP + 0x6c]
0072ace9  XOR EDX,EDX
0072aceb  FSTP float ptr [EAX + 0x9ae2c8]
0072acf1  MOV dword ptr [ESP + 0x50],0x43000000
0072acf9  FLD float ptr [ESP + 0x34]
0072acfd  MOV dword ptr [ESP + 0x54],0x43000000
0072ad05  FADD float ptr [ESI + 0x4]
0072ad08  MOV dword ptr [ESP + 0x58],0x43000000
0072ad10  MOV dword ptr [ESP + 0x5c],0x43000000
0072ad18  MOV dword ptr [ESP + 0x9c],EDX
0072ad1f  FST float ptr [ESP + 0x70]
0072ad23  FSTP float ptr [EAX + 0x9ae2cc]
0072ad29  FLD float ptr [ESP + 0x18]
0072ad2d  FADD float ptr [ESI + 0x8]
0072ad30  FST float ptr [ESP + 0x74]
0072ad34  FSTP float ptr [EAX + 0x9ae2d0]
0072ad3a  FLD float ptr [ESP + 0x40]
0072ad3e  FADD float ptr [ESI]
0072ad40  FST float ptr [ESP + 0x78]
0072ad44  FSTP float ptr [EAX + 0x9ae2d4]
0072ad4a  FLD float ptr [ESP + 0x44]
0072ad4e  FADD float ptr [ESI + 0x4]
0072ad51  FST float ptr [ESP + 0x7c]
0072ad55  FSTP float ptr [EAX + 0x9ae2d8]
0072ad5b  FLD float ptr [ESP + 0x18]
0072ad5f  FADD float ptr [ESI + 0x8]
0072ad62  FST float ptr [ESP + 0x80]
0072ad69  FSTP float ptr [EAX + 0x9ae2dc]
0072ad6f  FLD float ptr [ESP + 0x30]
0072ad73  FADD float ptr [ESI]
0072ad75  FST float ptr [ESP + 0x84]
0072ad7c  FSTP float ptr [EAX + 0x9ae2e0]
0072ad82  FLD float ptr [ESP + 0x34]
0072ad86  FADD float ptr [ESI + 0x4]
0072ad89  FST float ptr [ESP + 0x88]
0072ad90  FSTP float ptr [EAX + 0x9ae2e4]
0072ad96  FLD float ptr [ESP + 0x18]
0072ad9a  FADD float ptr [0x009031f0]
0072ada0  FADD float ptr [ESI + 0x8]
0072ada3  FST float ptr [ESP + 0x8c]
0072adaa  FSTP float ptr [EAX + 0x9ae2e8]
0072adb0  FLD float ptr [ESP + 0x40]
0072adb4  FADD float ptr [ESI]
0072adb6  FST float ptr [ESP + 0x90]
0072adbd  FSTP float ptr [EAX + 0x9ae2ec]
0072adc3  FLD float ptr [ESP + 0x44]
0072adc7  FADD float ptr [ESI + 0x4]
0072adca  FST float ptr [ESP + 0x94]
0072add1  FSTP float ptr [EAX + 0x9ae2f0]
0072add7  FLD float ptr [ESP + 0x18]
0072addb  FADD float ptr [0x009031f0]
0072ade1  FADD float ptr [ESI + 0x8]
0072ade4  MOV ESI,dword ptr [EBP + 0x8]
0072ade7  FST float ptr [ESP + 0x98]
0072adee  FSTP float ptr [EAX + 0x9ae2f4]
0072adf4  MOV EAX,dword ptr [EDI]
0072adf6  CMP EAX,EBX
0072adf8  JZ 0x0072ae03
0072adfa  MOV EAX,dword ptr [ESI + 0x64]
0072adfd  MOV dword ptr [EAX + 0x148],EDX
0072ae03  MOV ECX,dword ptr [ESP + 0x10]
0072ae07  MOV EAX,dword ptr [ESP + 0x38]
0072ae0b  MOV dword ptr [EDI],EBX
0072ae0d  CMP dword ptr [ECX],EAX
0072ae0f  JZ 0x0072ae1a
0072ae11  MOV EDI,dword ptr [ESI + 0x64]
0072ae14  MOV dword ptr [EDI + 0x148],EDX
0072ae1a  FLD float ptr [ESP + 0x30]
0072ae1e  MOV dword ptr [ECX],EAX
0072ae20  FSUB float ptr [ESP + 0x48]
0072ae24  LEA ECX,[ESP + 0x10]
0072ae28  PUSH ECX
0072ae29  MOV EDX,ECX
0072ae2b  FSTP float ptr [ESP + 0x3c]
0072ae2f  PUSH EDX
0072ae30  FLD float ptr [ESP + 0x3c]
0072ae34  FSUB float ptr [ESP + 0x54]
0072ae38  FSTP float ptr [ESP + 0x44]
0072ae3c  FLD float ptr [ESP + 0x4c]
0072ae40  FSUB float ptr [ESP + 0x3c]
0072ae44  FSTP float ptr [ESP + 0x18]
0072ae48  FLD float ptr [ESP + 0x48]
0072ae4c  FSUB float ptr [ESP + 0x38]
0072ae50  FCHS
0072ae52  FSTP float ptr [ESP + 0x1c]
0072ae56  CALL 0x0045f3c0
0072ae5b  FLD float ptr [ESP + 0x40]
0072ae5f  MOV ECX,dword ptr [ESI + 0x64]
0072ae62  FMUL float ptr [ESP + 0x18]
0072ae66  ADD ESP,0x8
0072ae69  FLD float ptr [ESP + 0x14]
0072ae6d  FMUL float ptr [ESP + 0x3c]
0072ae71  FADDP
0072ae73  FABS
0072ae75  FCOM float ptr [0x008b2800]
0072ae7b  FNSTSW AX
0072ae7d  TEST AH,0x5
0072ae80  JP 0x0072ae90
0072ae82  FMUL float ptr [0x008b2aec]
0072ae88  FMUL float ptr [ECX + 0x148]
0072ae8e  JMP 0x0072aeb9
0072ae90  FSTP ST0
0072ae92  FLD float ptr [ECX + 0x148]
0072ae98  FCOMP float ptr [0x0089096c]
0072ae9e  FNSTSW AX
0072aea0  TEST AH,0x5
0072aea3  JP 0x0072aeb3
0072aea5  FLD float ptr [0x009031e0]
0072aeab  FADD float ptr [ECX + 0x148]
0072aeb1  JMP 0x0072aeb9
0072aeb3  FLD float ptr [0x0089096c]
0072aeb9  PUSH 0x0
0072aebb  FST float ptr [ESP + 0x6c]
0072aebf  PUSH 0x1
0072aec1  FSTP float ptr [ESP + 0x68]
0072aec5  LEA EAX,[ESP + 0x58]
0072aec9  PUSH EAX
0072aeca  PUSH 0x3
0072aecc  CALL 0x007252f0
0072aed1  MOV EAX,dword ptr [ESI + 0x68]
0072aed4  TEST EAX,EAX
0072aed6  JZ 0x0072b117
0072aedc  FLD float ptr [EAX + 0x28c]
0072aee2  FCOMP float ptr [0x00890968]
0072aee8  FNSTSW AX
0072aeea  TEST AH,0x41
0072aeed  JNZ 0x0072b117
0072aef3  MOV ECX,dword ptr [ESI + 0x68]
0072aef6  MOV EDX,dword ptr [ESP + 0x80]
0072aefd  MOV EAX,dword ptr [ESP + 0x7c]
0072af01  PUSH EDX
0072af02  MOV EDX,dword ptr [ESP + 0x78]
0072af06  PUSH EAX
0072af07  MOV EAX,dword ptr [ESP + 0x78]
0072af0b  MOV dword ptr [ECX + 0x280],0x3
0072af15  MOV ECX,dword ptr [ESP + 0x80]
0072af1c  PUSH ECX
0072af1d  MOV ECX,dword ptr [ESP + 0x78]
0072af21  PUSH EDX
0072af22  MOV EDX,dword ptr [ESP + 0xa8]
0072af29  PUSH EAX
0072af2a  MOV EAX,dword ptr [ESP + 0xa8]
0072af31  PUSH ECX
0072af32  MOV ECX,dword ptr [ESP + 0xa8]
0072af39  PUSH EDX
0072af3a  MOV EDX,dword ptr [ESP + 0xa8]
0072af41  PUSH EAX
0072af42  MOV EAX,dword ptr [ESP + 0xa8]
0072af49  PUSH ECX
0072af4a  MOV ECX,dword ptr [ESP + 0xa8]
0072af51  PUSH EDX
0072af52  PUSH EAX
0072af53  PUSH ECX
0072af54  MOV ECX,dword ptr [ESI + 0x68]
0072af57  CALL 0x00749fb0
0072af5c  MOV ECX,dword ptr [ESP + 0xc4]
0072af63  MOV dword ptr FS:[0x0],ECX
0072af6a  POP EDI
0072af6b  POP ESI
0072af6c  POP EBX
0072af6d  MOV ESP,EBP
0072af6f  POP EBP
0072af70  RET
0072af71  MOV EDX,dword ptr [EBP + 0x8]
0072af74  MOV ECX,dword ptr [EDX + 0x64]
0072af77  FLD float ptr [ECX + 0x140]
0072af7d  MOV dword ptr [ESP + 0x10],ECX
0072af81  FCOMP float ptr [0x00890968]
0072af87  FNSTSW AX
0072af89  TEST AH,0x41
0072af8c  JNZ 0x0072b117
0072af92  FLD float ptr [ECX + 0x140]
0072af98  MOV EAX,EDI
0072af9a  FSUB float ptr [0x009031dc]
0072afa0  SHL EAX,0x4
0072afa3  ADD EAX,0x9ae330
0072afa8  PUSH EAX
0072afa9  LEA ECX,[ESP + 0x24]
0072afad  FST float ptr [ESP + 0x64]
0072afb1  PUSH ECX
0072afb2  FSTP float ptr [ESP + 0x70]
0072afb6  MOV ECX,EBX
0072afb8  MOV dword ptr [ESP + 0x58],0x43000000
0072afc0  MOV dword ptr [ESP + 0x5c],0x43000000
0072afc8  MOV dword ptr [ESP + 0x60],0x43000000
0072afd0  MOV dword ptr [ESP + 0x64],0x43000000
0072afd8  MOV dword ptr [ESP + 0xa4],0x0
0072afe3  CALL 0x004102f0
0072afe8  PUSH 0x3f800000
0072afed  LEA EDX,[ESP + 0xb4]
0072aff4  PUSH EDX
0072aff5  MOV ECX,ESI
0072aff7  CALL 0x00470080
0072affc  FLD float ptr [ESP + 0x20]
0072b000  FADD float ptr [EAX]
0072b002  FLD float ptr [ESP + 0x24]
0072b006  FADD float ptr [EAX + 0x4]
0072b009  FSTP float ptr [ESP + 0x24]
0072b00d  FLD float ptr [ESP + 0x28]
0072b011  FADD float ptr [EAX + 0x8]
0072b014  FSTP float ptr [ESP + 0x28]
0072b018  FLD float ptr [ESP + 0x60]
0072b01c  FCOMP float ptr [0x00890968]
0072b022  FNSTSW AX
0072b024  TEST AH,0x41
0072b027  JNZ 0x0072b115
0072b02d  FLD ST0
0072b02f  LEA EAX,[EDI + EDI*0x2]
0072b032  SHL EAX,0x4
0072b035  FADD float ptr [EAX + 0x9ae2c8]
0072b03b  MOV ECX,dword ptr [ESP + 0x10]
0072b03f  PUSH 0x0
0072b041  PUSH 0x1
0072b043  FSTP float ptr [ESP + 0x74]
0072b047  FLD float ptr [ESP + 0x2c]
0072b04b  FADD float ptr [EAX + 0x9ae2cc]
0072b051  FSTP float ptr [ESP + 0x78]
0072b055  FLD float ptr [ESP + 0x30]
0072b059  FADD float ptr [EAX + 0x9ae2d0]
0072b05f  FSTP float ptr [ESP + 0x7c]
0072b063  FLD ST0
0072b065  FADD float ptr [EAX + 0x9ae2d4]
0072b06b  FSTP float ptr [ESP + 0x80]
0072b072  FLD float ptr [ESP + 0x2c]
0072b076  FADD float ptr [EAX + 0x9ae2d8]
0072b07c  FSTP float ptr [ESP + 0x84]
0072b083  FLD float ptr [ESP + 0x30]
0072b087  FADD float ptr [EAX + 0x9ae2dc]
0072b08d  FSTP float ptr [ESP + 0x88]
0072b094  FLD ST0
0072b096  FADD float ptr [EAX + 0x9ae2e0]
0072b09c  FSTP float ptr [ESP + 0x8c]
0072b0a3  FLD float ptr [ESP + 0x2c]
0072b0a7  FADD float ptr [EAX + 0x9ae2e4]
0072b0ad  FSTP float ptr [ESP + 0x90]
0072b0b4  FLD float ptr [ESP + 0x30]
0072b0b8  FADD float ptr [EAX + 0x9ae2e8]
0072b0be  FSTP float ptr [ESP + 0x94]
0072b0c5  FADD float ptr [EAX + 0x9ae2ec]
0072b0cb  FSTP float ptr [ESP + 0x98]
0072b0d2  FLD float ptr [ESP + 0x2c]
0072b0d6  FADD float ptr [EAX + 0x9ae2f0]
0072b0dc  FSTP float ptr [ESP + 0x9c]
0072b0e3  FLD float ptr [ESP + 0x30]
0072b0e7  FADD float ptr [EAX + 0x9ae2f4]
0072b0ed  LEA EAX,[ESP + 0x58]
0072b0f1  PUSH EAX
0072b0f2  PUSH 0x3
0072b0f4  FSTP float ptr [ESP + 0xa8]
0072b0fb  CALL 0x007252f0
0072b100  MOV ECX,dword ptr [ESP + 0xc4]
0072b107  MOV dword ptr FS:[0x0],ECX
0072b10e  POP EDI
0072b10f  POP ESI
0072b110  POP EBX
0072b111  MOV ESP,EBP
0072b113  POP EBP
0072b114  RET
0072b115  FSTP ST0
0072b117  MOV ECX,dword ptr [ESP + 0xc4]
0072b11e  POP EDI
0072b11f  POP ESI
0072b120  MOV dword ptr FS:[0x0],ECX
0072b127  POP EBX
0072b128  MOV ESP,EBP
0072b12a  POP EBP
0072b12b  RET
