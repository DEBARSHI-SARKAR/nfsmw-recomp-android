006ede30  MOV EAX,[0x0091e000]
006ede35  SUB ESP,0x48
006ede38  TEST EAX,EAX
006ede3a  PUSH ESI
006ede3b  MOV ESI,ECX
006ede3d  JZ 0x006ee34e
006ede43  MOV EAX,dword ptr [ESI + 0x74]
006ede46  MOV ECX,dword ptr [EAX + 0x4]
006ede49  PUSH EBX
006ede4a  PUSH 0x565a30
006ede4f  CALL 0x005d59f0
006ede54  MOV EBX,EAX
006ede56  TEST EBX,EBX
006ede58  JZ 0x006ee34d
006ede5e  MOV ECX,dword ptr [ESP + 0x54]
006ede62  MOV EAX,dword ptr [EBX]
006ede64  PUSH ECX
006ede65  MOV ECX,EBX
006ede67  CALL dword ptr [EAX + 0x8]
006ede6a  MOV EAX,dword ptr [ESP + 0x58]
006ede6e  MOV EDX,dword ptr [EBX]
006ede70  PUSH EAX
006ede71  MOV ECX,EBX
006ede73  CALL dword ptr [EDX + 0xc]
006ede76  MOV EDX,dword ptr [ESI + 0x2c]
006ede79  LEA ECX,[ESI + 0x2c]
006ede7c  CALL dword ptr [EDX + 0xc]
006ede7f  TEST EAX,EAX
006ede81  JNZ 0x006ede98
006ede83  MOV EAX,dword ptr [EBX]
006ede85  PUSH 0x0
006ede87  PUSH 0x0
006ede89  PUSH 0x0
006ede8b  MOV ECX,EBX
006ede8d  CALL dword ptr [EAX + 0x4]
006ede90  POP EBX
006ede91  POP ESI
006ede92  ADD ESP,0x48
006ede95  RET 0x8
006ede98  MOV ECX,dword ptr [EAX + 0x4]
006ede9b  PUSH 0x4040e0
006edea0  CALL 0x005d59f0
006edea5  MOV ESI,EAX
006edea7  TEST ESI,ESI
006edea9  JNZ 0x006edec0
006edeab  MOV EDX,dword ptr [EBX]
006edead  PUSH 0x0
006edeaf  PUSH 0x0
006edeb1  PUSH 0x0
006edeb3  MOV ECX,EBX
006edeb5  CALL dword ptr [EDX + 0x4]
006edeb8  POP EBX
006edeb9  POP ESI
006edeba  ADD ESP,0x48
006edebd  RET 0x8
006edec0  LEA EAX,[ESP + 0x54]
006edec4  PUSH EAX
006edec5  MOV ECX,ESI
006edec7  CALL 0x0040e3d0
006edecc  TEST AL,AL
006edece  JZ 0x006edeab
006eded0  LEA EAX,[ESP + 0xc]
006eded4  PUSH EAX
006eded5  MOV ECX,ESI
006eded7  CALL 0x0040e180
006ededc  TEST AL,AL
006edede  JZ 0x006ee34d
006edee4  FLD float ptr [0x00988e74]
006edeea  PUSH EBP
006edeeb  FMUL float ptr [0x0089096c]
006edef1  MOV EBP,dword ptr [ESP + 0x58]
006edef5  MOV EDX,dword ptr [EBP]
006edef8  PUSH EDI
006edef9  FCOS
006edefb  LEA EAX,[ESP + 0x34]
006edeff  PUSH EAX
006edf00  MOV ECX,EBP
006edf02  FSTP float ptr [ESP + 0x1c]
006edf06  CALL dword ptr [EDX + 0x34]
006edf09  LEA ECX,[ESP + 0x34]
006edf0d  PUSH ECX
006edf0e  CALL 0x00410220
006edf13  FSTP ST0
006edf15  MOV EDX,dword ptr [EBP]
006edf18  ADD ESP,0x4
006edf1b  MOV ECX,EBP
006edf1d  CALL dword ptr [EDX + 0x20]
006edf20  MOV ECX,dword ptr [EAX]
006edf22  MOV EDX,dword ptr [EAX + 0x4]
006edf25  MOV EAX,dword ptr [EAX + 0x8]
006edf28  MOV ESI,dword ptr [0x0091e000]
006edf2e  MOV dword ptr [ESP + 0x48],EAX
006edf32  MOV EAX,dword ptr [ESI + 0x1960]
006edf38  TEST EAX,EAX
006edf3a  MOV dword ptr [ESP + 0x40],ECX
006edf3e  MOV dword ptr [ESP + 0x44],EDX
006edf42  MOV dword ptr [ESP + 0x60],0x0
006edf4a  MOV dword ptr [ESP + 0x5c],0x439b0000
006edf52  MOV dword ptr [ESP + 0x10],0x3f800000
006edf5a  JNZ 0x006ee075
006edf60  MOV ECX,dword ptr [0x0091e00c]
006edf66  CALL 0x005ddac0
006edf6b  MOV EDI,EAX
006edf6d  XOR ESI,ESI
006edf6f  TEST EDI,EDI
006edf71  JBE 0x006ee181
006edf77  JMP 0x006edf80
006edf80  MOV ECX,dword ptr [0x0091e00c]
006edf86  PUSH ESI
006edf87  CALL 0x005ddad0
006edf8c  MOV CL,byte ptr [EAX]
006edf8e  SHR CL,0x1
006edf90  TEST CL,0x1
006edf93  JZ 0x006ee067
006edf99  MOV ECX,EAX
006edf9b  CALL 0x005de550
006edfa0  TEST EAX,EAX
006edfa2  JZ 0x006ee067
006edfa8  MOV ECX,dword ptr [EAX + 0x74]
006edfab  TEST ECX,ECX
006edfad  JZ 0x006ee067
006edfb3  LEA EDX,[ESP + 0x4c]
006edfb7  PUSH EDX
006edfb8  MOV ECX,EAX
006edfba  CALL 0x005db5e0
006edfbf  FLD float ptr [ESP + 0x4c]
006edfc3  FSUB float ptr [ESP + 0x40]
006edfc7  LEA EAX,[ESP + 0x1c]
006edfcb  PUSH EAX
006edfcc  FSTP float ptr [ESP + 0x20]
006edfd0  FLD float ptr [ESP + 0x54]
006edfd4  FSUB float ptr [ESP + 0x48]
006edfd8  FSTP float ptr [ESP + 0x24]
006edfdc  FLD float ptr [ESP + 0x58]
006edfe0  FSUB float ptr [ESP + 0x4c]
006edfe4  FSTP float ptr [ESP + 0x28]
006edfe8  CALL 0x00410220
006edfed  FST float ptr [ESP + 0x18]
006edff1  ADD ESP,0x4
006edff4  FCOMP float ptr [0x008b01c4]
006edffa  FNSTSW AX
006edffc  TEST AH,0x41
006edfff  JP 0x006ee067
006ee001  FLD float ptr [ESP + 0x3c]
006ee005  FMUL float ptr [ESP + 0x24]
006ee009  FLD float ptr [ESP + 0x38]
006ee00d  FMUL float ptr [ESP + 0x20]
006ee011  FADDP
006ee013  FLD float ptr [ESP + 0x1c]
006ee017  FMUL float ptr [ESP + 0x34]
006ee01b  FADDP
006ee01d  FCOM float ptr [ESP + 0x18]
006ee021  FNSTSW AX
006ee023  TEST AH,0x5
006ee026  JNP 0x006ee065
006ee028  FLD float ptr [ESP + 0x14]
006ee02c  FCOMP float ptr [ESP + 0x5c]
006ee030  FNSTSW AX
006ee032  TEST AH,0x1
006ee035  JZ 0x006ee065
006ee037  MOV ECX,dword ptr [ESP + 0x14]
006ee03b  FSTP float ptr [ESP + 0x10]
006ee03f  MOV EDX,dword ptr [ESP + 0x1c]
006ee043  MOV EAX,dword ptr [ESP + 0x20]
006ee047  MOV dword ptr [ESP + 0x5c],ECX
006ee04b  MOV ECX,dword ptr [ESP + 0x24]
006ee04f  MOV dword ptr [ESP + 0x60],0x2
006ee057  MOV dword ptr [ESP + 0x28],EDX
006ee05b  MOV dword ptr [ESP + 0x2c],EAX
006ee05f  MOV dword ptr [ESP + 0x30],ECX
006ee063  JMP 0x006ee067
006ee065  FSTP ST0
006ee067  INC ESI
006ee068  CMP ESI,EDI
006ee06a  JC 0x006edf80
006ee070  JMP 0x006ee181
006ee075  MOV ECX,ESI
006ee077  CALL 0x00404a70
006ee07c  CMP EAX,0x5
006ee07f  JNZ 0x006ee181
006ee085  MOV ECX,dword ptr [ESP + 0x14]
006ee089  MOV EDX,dword ptr [ECX]
006ee08b  CALL dword ptr [EDX + 0x50]
006ee08e  TEST EAX,EAX
006ee090  JZ 0x006ee181
006ee096  MOV EAX,dword ptr [ESI + 0x4504]
006ee09c  TEST EAX,EAX
006ee09e  JBE 0x006ee181
006ee0a4  ADD ESI,0x4508
006ee0aa  MOV EDI,EAX
006ee0ac  LEA ESP,[ESP]
006ee0b0  MOV ECX,dword ptr [ESI]
006ee0b2  TEST ECX,ECX
006ee0b4  JZ 0x006ee177
006ee0ba  MOV EAX,dword ptr [ECX + 0x74]
006ee0bd  TEST EAX,EAX
006ee0bf  JZ 0x006ee177
006ee0c5  LEA EAX,[ESP + 0x4c]
006ee0c9  PUSH EAX
006ee0ca  CALL 0x005db5e0
006ee0cf  FLD float ptr [ESP + 0x4c]
006ee0d3  FSUB float ptr [ESP + 0x40]
006ee0d7  LEA ECX,[ESP + 0x1c]
006ee0db  PUSH ECX
006ee0dc  FSTP float ptr [ESP + 0x20]
006ee0e0  FLD float ptr [ESP + 0x54]
006ee0e4  FSUB float ptr [ESP + 0x48]
006ee0e8  FSTP float ptr [ESP + 0x24]
006ee0ec  FLD float ptr [ESP + 0x58]
006ee0f0  FSUB float ptr [ESP + 0x4c]
006ee0f4  FSTP float ptr [ESP + 0x28]
006ee0f8  CALL 0x00410220
006ee0fd  FST float ptr [ESP + 0x18]
006ee101  ADD ESP,0x4
006ee104  FCOMP float ptr [0x008b01c4]
006ee10a  FNSTSW AX
006ee10c  TEST AH,0x41
006ee10f  JP 0x006ee177
006ee111  FLD float ptr [ESP + 0x3c]
006ee115  FMUL float ptr [ESP + 0x24]
006ee119  FLD float ptr [ESP + 0x38]
006ee11d  FMUL float ptr [ESP + 0x20]
006ee121  FADDP
006ee123  FLD float ptr [ESP + 0x1c]
006ee127  FMUL float ptr [ESP + 0x34]
006ee12b  FADDP
006ee12d  FCOM float ptr [ESP + 0x18]
006ee131  FNSTSW AX
006ee133  TEST AH,0x5
006ee136  JNP 0x006ee175
006ee138  FLD float ptr [ESP + 0x14]
006ee13c  FCOMP float ptr [ESP + 0x5c]
006ee140  FNSTSW AX
006ee142  TEST AH,0x1
006ee145  JZ 0x006ee175
006ee147  MOV EDX,dword ptr [ESP + 0x14]
006ee14b  FSTP float ptr [ESP + 0x10]
006ee14f  MOV EAX,dword ptr [ESP + 0x1c]
006ee153  MOV ECX,dword ptr [ESP + 0x20]
006ee157  MOV dword ptr [ESP + 0x5c],EDX
006ee15b  MOV EDX,dword ptr [ESP + 0x24]
006ee15f  MOV dword ptr [ESP + 0x60],0x2
006ee167  MOV dword ptr [ESP + 0x28],EAX
006ee16b  MOV dword ptr [ESP + 0x2c],ECX
006ee16f  MOV dword ptr [ESP + 0x30],EDX
006ee173  JMP 0x006ee177
006ee175  FSTP ST0
006ee177  ADD ESI,0x4
006ee17a  DEC EDI
006ee17b  JNZ 0x006ee0b0
006ee181  MOV EDI,dword ptr [0x0092ce9c]
006ee187  MOV EAX,[0x0092cea4]
006ee18c  LEA ECX,[EDI + EAX*0x4]
006ee18f  CMP EDI,ECX
006ee191  JZ 0x006ee295
006ee197  MOV ESI,dword ptr [EDI]
006ee199  MOV EDX,dword ptr [ESI]
006ee19b  MOV ECX,ESI
006ee19d  CALL dword ptr [EDX + 0x44]
006ee1a0  MOV EAX,dword ptr [EAX]
006ee1a2  CMP EAX,dword ptr [0x0092c4f4]
006ee1a8  JZ 0x006ee27c
006ee1ae  MOV EDX,dword ptr [ESI]
006ee1b0  MOV ECX,ESI
006ee1b2  CALL dword ptr [EDX + 0x88]
006ee1b8  TEST AL,AL
006ee1ba  JZ 0x006ee27c
006ee1c0  MOV EAX,dword ptr [ESI]
006ee1c2  MOV ECX,ESI
006ee1c4  CALL dword ptr [EAX + 0xbc]
006ee1ca  TEST AL,AL
006ee1cc  JNZ 0x006ee27c
006ee1d2  MOV EDX,dword ptr [ESI]
006ee1d4  MOV ECX,ESI
006ee1d6  CALL dword ptr [EDX + 0x7c]
006ee1d9  TEST AL,AL
006ee1db  JNZ 0x006ee27c
006ee1e1  MOV EAX,dword ptr [ESI]
006ee1e3  MOV ECX,ESI
006ee1e5  CALL dword ptr [EAX + 0xc]
006ee1e8  LEA ECX,[ESP + 0x1c]
006ee1ec  PUSH ECX
006ee1ed  LEA EDX,[ESP + 0x44]
006ee1f1  PUSH EDX
006ee1f2  PUSH EAX
006ee1f3  CALL 0x00401ce0
006ee1f8  LEA EAX,[ESP + 0x28]
006ee1fc  PUSH EAX
006ee1fd  CALL 0x00410220
006ee202  FST float ptr [ESP + 0x24]
006ee206  FCOMP float ptr [0x008b01c4]
006ee20c  ADD ESP,0x10
006ee20f  FNSTSW AX
006ee211  TEST AH,0x41
006ee214  JZ 0x006ee27c
006ee216  FLD float ptr [ESP + 0x3c]
006ee21a  FMUL float ptr [ESP + 0x24]
006ee21e  FLD float ptr [ESP + 0x38]
006ee222  FMUL float ptr [ESP + 0x20]
006ee226  FADDP
006ee228  FLD float ptr [ESP + 0x1c]
006ee22c  FMUL float ptr [ESP + 0x34]
006ee230  FADDP
006ee232  FCOM float ptr [ESP + 0x18]
006ee236  FNSTSW AX
006ee238  TEST AH,0x5
006ee23b  JNP 0x006ee27a
006ee23d  FLD float ptr [ESP + 0x14]
006ee241  FCOMP float ptr [ESP + 0x5c]
006ee245  FNSTSW AX
006ee247  TEST AH,0x1
006ee24a  JZ 0x006ee27a
006ee24c  MOV ECX,dword ptr [ESP + 0x14]
006ee250  FSTP float ptr [ESP + 0x10]
006ee254  MOV EDX,dword ptr [ESP + 0x1c]
006ee258  MOV EAX,dword ptr [ESP + 0x20]
006ee25c  MOV dword ptr [ESP + 0x5c],ECX
006ee260  MOV ECX,dword ptr [ESP + 0x24]
006ee264  MOV dword ptr [ESP + 0x60],0x1
006ee26c  MOV dword ptr [ESP + 0x28],EDX
006ee270  MOV dword ptr [ESP + 0x2c],EAX
006ee274  MOV dword ptr [ESP + 0x30],ECX
006ee278  JMP 0x006ee27c
006ee27a  FSTP ST0
006ee27c  MOV EDX,dword ptr [0x0092ce9c]
006ee282  MOV EAX,[0x0092cea4]
006ee287  ADD EDI,0x4
006ee28a  LEA ECX,[EDX + EAX*0x4]
006ee28d  CMP EDI,ECX
006ee28f  JNZ 0x006ee197
006ee295  MOV ESI,dword ptr [ESP + 0x60]
006ee299  TEST ESI,ESI
006ee29b  JZ 0x006ee33e
006ee2a1  MOV EDX,dword ptr [ESP + 0x10]
006ee2a5  PUSH 0x3f800000
006ee2aa  PUSH 0xbf800000
006ee2af  PUSH EDX
006ee2b0  CALL 0x00401d70
006ee2b5  ADD ESP,0xc
006ee2b8  CALL 0x007c4410
006ee2bd  MOV EAX,dword ptr [EBP]
006ee2c0  FMUL float ptr [0x0089096c]
006ee2c6  LEA ECX,[ESP + 0x40]
006ee2ca  PUSH ECX
006ee2cb  MOV ECX,EBP
006ee2cd  FSTP float ptr [ESP + 0x64]
006ee2d1  CALL dword ptr [EAX + 0x38]
006ee2d4  FLD float ptr [ESP + 0x48]
006ee2d8  FMUL float ptr [ESP + 0x30]
006ee2dc  FLD float ptr [ESP + 0x44]
006ee2e0  FMUL float ptr [ESP + 0x2c]
006ee2e4  FADDP
006ee2e6  FLD float ptr [ESP + 0x40]
006ee2ea  FMUL float ptr [ESP + 0x28]
006ee2ee  FADDP
006ee2f0  FCOMP float ptr [0x00890968]
006ee2f6  FNSTSW AX
006ee2f8  TEST AH,0x5
006ee2fb  JP 0x006ee307
006ee2fd  FLD float ptr [ESP + 0x60]
006ee301  FCHS
006ee303  FSTP float ptr [ESP + 0x60]
006ee307  MOV EDX,dword ptr [ESP + 0x60]
006ee30b  FLD float ptr [ESP + 0x5c]
006ee30f  FMUL float ptr [0x008b058c]
006ee315  MOV EDI,dword ptr [EBX]
006ee317  PUSH EDX
006ee318  PUSH 0x3f800000
006ee31d  PUSH 0x0
006ee31f  PUSH ECX
006ee320  FSTP float ptr [ESP]
006ee323  CALL 0x00401d70
006ee328  ADD ESP,0x8
006ee32b  FSTP float ptr [ESP]
006ee32e  PUSH ESI
006ee32f  MOV ECX,EBX
006ee331  CALL dword ptr [EDI + 0x4]
006ee334  POP EDI
006ee335  POP EBP
006ee336  POP EBX
006ee337  POP ESI
006ee338  ADD ESP,0x48
006ee33b  RET 0x8
006ee33e  MOV EAX,dword ptr [EBX]
006ee340  PUSH 0x0
006ee342  PUSH 0x0
006ee344  PUSH 0x0
006ee346  MOV ECX,EBX
006ee348  CALL dword ptr [EAX + 0x4]
006ee34b  POP EDI
006ee34c  POP EBP
006ee34d  POP EBX
006ee34e  POP ESI
006ee34f  ADD ESP,0x48
006ee352  RET 0x8
