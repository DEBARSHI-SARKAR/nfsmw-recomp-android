007fbf9e  PUSH EBP
007fbf9f  MOV EBP,ESP
007fbfa1  PUSH ECX
007fbfa2  PUSH ECX
007fbfa3  PUSH ESI
007fbfa4  LEA EAX,[EBP + -0x8]
007fbfa7  PUSH EDI
007fbfa8  PUSH EAX
007fbfa9  CALL 0x007fdd78
007fbfae  MOV ESI,dword ptr [EBP + 0x8]
007fbfb1  PUSH ESI
007fbfb2  CALL 0x007fbe2f
007fbfb7  XOR EDI,EDI
007fbfb9  CMP EAX,EDI
007fbfbb  POP ECX
007fbfbc  POP ECX
007fbfbd  MOV dword ptr [ESI + 0x1a0],EAX
007fbfc3  JNZ 0x007fbfe4
007fbfc5  CMP dword ptr [ESI + 0x1dc],EDI
007fbfcb  JZ 0x007fbfd5
007fbfcd  CMP dword ptr [ESI + 0x4948],EDI
007fbfd3  JNZ 0x007fbfe4
007fbfd5  LEA EAX,[EBP + -0x4]
007fbfd8  PUSH EAX
007fbfd9  CALL 0x007fdd78
007fbfde  POP ECX
007fbfdf  JMP 0x007fc10c
007fbfe4  CMP dword ptr [ESI + 0x25c],EDI
007fbfea  JNZ 0x007fc029
007fbfec  MOV EAX,dword ptr [ESI + 0x20c]
007fbff2  MOV ECX,dword ptr [ESI + 0x208]
007fbff8  LEA EAX,[ECX + EAX*0x2 + 0x20]
007fbffc  ADD EAX,dword ptr [ESI + 0x1b8]
007fc002  PUSH EDI
007fc003  PUSH EAX
007fc004  CALL 0x007fc5f5
007fc009  PUSH dword ptr [ESI + 0x29c]
007fc00f  MOV dword ptr [ESI + 0x260],EAX
007fc015  ADD EAX,0x1f
007fc018  AND EAX,0xffffffe0
007fc01b  MOV dword ptr [ESI + 0x25c],EAX
007fc021  CALL 0x007fc81c
007fc026  ADD ESP,0xc
007fc029  MOV EAX,dword ptr [ESI + 0x1a0]
007fc02f  CMP EAX,0xc8
007fc034  PUSH 0x1
007fc036  PUSH 0x4
007fc038  PUSH dword ptr [ESI + 0x148]
007fc03e  PUSH dword ptr [ESI + 0x25c]
007fc044  PUSH dword ptr [ESI + 0x254]
007fc04a  PUSH dword ptr [ESI + 0x6a4]
007fc050  JBE 0x007fc087
007fc052  ADD EAX,0xffffff38
007fc057  PUSH EAX
007fc058  MOVZX EAX,byte ptr [ESI + 0x1ac]
007fc05f  PUSH EAX
007fc060  MOVZX EAX,byte ptr [ESI + 0x19c]
007fc067  PUSH EAX
007fc068  PUSH dword ptr [ESI + 0x29c]
007fc06e  CALL 0x007fcc70
007fc073  LEA EAX,[EBP + -0x4]
007fc076  PUSH EAX
007fc077  CALL 0x007fdd78
007fc07c  PUSH ESI
007fc07d  CALL 0x007ffeb9
007fc082  ADD ESP,0x30
007fc085  JMP 0x007fc0e4
007fc087  CMP EAX,0x64
007fc08a  JBE 0x007fc0bc
007fc08c  ADD EAX,-0x64
007fc08f  PUSH EAX
007fc090  MOVZX EAX,byte ptr [ESI + 0x1ac]
007fc097  PUSH EAX
007fc098  MOVZX EAX,byte ptr [ESI + 0x19c]
007fc09f  PUSH EAX
007fc0a0  PUSH dword ptr [ESI + 0x29c]
007fc0a6  CALL 0x007fcc70
007fc0ab  LEA EAX,[EBP + -0x4]
007fc0ae  PUSH EAX
007fc0af  CALL 0x007fdd78
007fc0b4  PUSH ESI
007fc0b5  CALL 0x007ffe05
007fc0ba  JMP 0x007fc082
007fc0bc  PUSH EAX
007fc0bd  MOVZX EAX,byte ptr [ESI + 0x1ac]
007fc0c4  PUSH EAX
007fc0c5  MOVZX EAX,byte ptr [ESI + 0x19c]
007fc0cc  PUSH EAX
007fc0cd  PUSH dword ptr [ESI + 0x29c]
007fc0d3  CALL 0x007fcc70
007fc0d8  LEA EAX,[EBP + -0x4]
007fc0db  PUSH EAX
007fc0dc  CALL 0x007fdd78
007fc0e1  ADD ESP,0x2c
007fc0e4  MOV ECX,dword ptr [ESI + 0x4940]
007fc0ea  CMP ECX,EDI
007fc0ec  JZ 0x007fc10c
007fc0ee  MOV EAX,dword ptr [ESI + 0x25c]
007fc0f4  PUSH EAX
007fc0f5  PUSH EAX
007fc0f6  PUSH dword ptr [ESI + 0x4944]
007fc0fc  PUSH ECX
007fc0fd  PUSH dword ptr [ESI + 0x29c]
007fc103  CALL dword ptr [0x009c6ac8]
007fc109  ADD ESP,0x14
007fc10c  MOV ECX,dword ptr [ESI + 0x1b0]
007fc112  MOV EAX,dword ptr [ESI + 0x23c]
007fc118  CMP ECX,EAX
007fc11a  PUSH EBX
007fc11b  JC 0x007fc24b
007fc121  MOV EDX,dword ptr [ESI + 0x1b4]
007fc127  CMP EDX,dword ptr [ESI + 0x240]
007fc12d  JC 0x007fc24b
007fc133  MOV EAX,dword ptr [EBP + 0xc]
007fc136  MOV dword ptr [EAX],ECX
007fc138  MOV ECX,dword ptr [ESI + 0x1b4]
007fc13e  MOV dword ptr [EAX + 0x4],ECX
007fc141  MOV ECX,dword ptr [ESI + 0x1b8]
007fc147  MOV dword ptr [EAX + 0x8],ECX
007fc14a  MOV ECX,dword ptr [ESI + 0x1b0]
007fc150  SHR ECX,0x1
007fc152  MOV dword ptr [EAX + 0xc],ECX
007fc155  MOV ECX,dword ptr [ESI + 0x1b4]
007fc15b  SHR ECX,0x1
007fc15d  MOV dword ptr [EAX + 0x10],ECX
007fc160  MOV ECX,dword ptr [ESI + 0x1bc]
007fc166  MOV dword ptr [EAX + 0x14],ECX
007fc169  CMP dword ptr [ESI + 0x1a0],EDI
007fc16f  JNZ 0x007fc1e9
007fc171  CMP dword ptr [ESI + 0x1dc],EDI
007fc177  JZ 0x007fc181
007fc179  CMP dword ptr [ESI + 0x4948],EDI
007fc17f  JNZ 0x007fc1e9
007fc181  MOV ECX,dword ptr [ESI + 0x1b8]
007fc187  INC ECX
007fc188  LEA ECX,[ECX + ECX*0x2]
007fc18b  SHL ECX,0x4
007fc18e  ADD ECX,dword ptr [ESI + 0x254]
007fc194  ADD ECX,dword ptr [ESI + 0x21c]
007fc19a  MOV dword ptr [EAX + 0x18],ECX
007fc19d  MOV ECX,dword ptr [ESI + 0x1bc]
007fc1a3  MOV EDX,dword ptr [ESI + 0x220]
007fc1a9  INC ECX
007fc1aa  LEA ECX,[ECX + ECX*0x2]
007fc1ad  LEA ECX,[EDX + ECX*0x8]
007fc1b0  ADD ECX,dword ptr [ESI + 0x254]
007fc1b6  MOV dword ptr [EAX + 0x1c],ECX
007fc1b9  MOV ECX,dword ptr [ESI + 0x1bc]
007fc1bf  MOV EDX,dword ptr [ESI + 0x224]
007fc1c5  INC ECX
007fc1c6  LEA ECX,[ECX + ECX*0x2]
007fc1c9  LEA ECX,[EDX + ECX*0x8]
007fc1cc  ADD ECX,dword ptr [ESI + 0x254]
007fc1d2  MOV dword ptr [EAX + 0x20],ECX
007fc1d5  MOV ECX,dword ptr [ESI + 0x254]
007fc1db  ADD ECX,dword ptr [ESI + 0x21c]
007fc1e1  MOV dword ptr [EAX + 0x24],ECX
007fc1e4  JMP 0x007fc371
007fc1e9  MOV ECX,dword ptr [ESI + 0x1b8]
007fc1ef  INC ECX
007fc1f0  LEA ECX,[ECX + ECX*0x2]
007fc1f3  SHL ECX,0x4
007fc1f6  ADD ECX,dword ptr [ESI + 0x21c]
007fc1fc  ADD ECX,dword ptr [ESI + 0x25c]
007fc202  MOV dword ptr [EAX + 0x18],ECX
007fc205  MOV ECX,dword ptr [ESI + 0x1bc]
007fc20b  MOV EDX,dword ptr [ESI + 0x220]
007fc211  INC ECX
007fc212  LEA ECX,[ECX + ECX*0x2]
007fc215  LEA ECX,[EDX + ECX*0x8]
007fc218  ADD ECX,dword ptr [ESI + 0x25c]
007fc21e  MOV dword ptr [EAX + 0x1c],ECX
007fc221  MOV ECX,dword ptr [ESI + 0x1bc]
007fc227  MOV EDX,dword ptr [ESI + 0x224]
007fc22d  INC ECX
007fc22e  LEA ECX,[ECX + ECX*0x2]
007fc231  LEA ECX,[EDX + ECX*0x8]
007fc234  ADD ECX,dword ptr [ESI + 0x25c]
007fc23a  MOV dword ptr [EAX + 0x20],ECX
007fc23d  MOV ECX,dword ptr [ESI + 0x21c]
007fc243  ADD ECX,dword ptr [ESI + 0x25c]
007fc249  JMP 0x007fc1e1
007fc24b  MOV EDI,dword ptr [EBP + 0xc]
007fc24e  ADD EAX,0x20
007fc251  MOV dword ptr [EDI],EAX
007fc253  MOV EAX,dword ptr [ESI + 0x240]
007fc259  MOV EBX,dword ptr [EDI]
007fc25b  ADD EAX,0x20
007fc25e  MOV dword ptr [EDI + 0x4],EAX
007fc261  MOV EAX,EBX
007fc263  CDQ
007fc264  SUB EAX,EDX
007fc266  MOV ECX,EAX
007fc268  MOV EAX,dword ptr [EDI + 0x4]
007fc26b  CDQ
007fc26c  SUB EAX,EDX
007fc26e  SAR EAX,0x1
007fc270  MOV dword ptr [EDI + 0x10],EAX
007fc273  MOV dword ptr [EDI + 0x8],EBX
007fc276  SAR ECX,0x1
007fc278  MOV dword ptr [EDI + 0xc],ECX
007fc27b  IMUL EAX,ECX
007fc27e  MOV dword ptr [EDI + 0x14],ECX
007fc281  MOV EDX,dword ptr [ESI + 0x264]
007fc287  MOV dword ptr [EDI + 0x18],EDX
007fc28a  MOV EDX,dword ptr [EDI + 0x4]
007fc28d  IMUL EDX,EBX
007fc290  MOV EBX,dword ptr [ESI + 0x264]
007fc296  ADD EBX,EDX
007fc298  ADD EAX,EDX
007fc29a  MOV dword ptr [EDI + 0x1c],EBX
007fc29d  ADD EAX,dword ptr [ESI + 0x264]
007fc2a3  PUSH EDI
007fc2a4  MOV dword ptr [EDI + 0x20],EAX
007fc2a7  MOV EAX,dword ptr [ESI + 0x264]
007fc2ad  MOV dword ptr [EDI + 0x24],EAX
007fc2b0  CMP dword ptr [ESI + 0x1a0],0x0
007fc2b7  JZ 0x007fc2c1
007fc2b9  PUSH dword ptr [ESI + 0x25c]
007fc2bf  JMP 0x007fc2c7
007fc2c1  PUSH dword ptr [ESI + 0x254]
007fc2c7  PUSH dword ptr [ESI + 0x29c]
007fc2cd  CALL 0x007ffbf0
007fc2d2  MOV EAX,dword ptr [EDI + 0x4]
007fc2d5  SUB EAX,dword ptr [ESI + 0x240]
007fc2db  MOV ECX,dword ptr [EDI]
007fc2dd  SUB ECX,dword ptr [ESI + 0x23c]
007fc2e3  MOV EDX,dword ptr [EDI + 0xc]
007fc2e6  SHR EAX,0x1
007fc2e8  IMUL EAX,dword ptr [EDI + 0x8]
007fc2ec  SHR ECX,0x1
007fc2ee  ADD EAX,ECX
007fc2f0  ADD dword ptr [EDI + 0x18],EAX
007fc2f3  MOV EAX,dword ptr [ESI + 0x23c]
007fc2f9  MOV ECX,dword ptr [EDI + 0x14]
007fc2fc  MOV dword ptr [EDI],EAX
007fc2fe  MOV EAX,dword ptr [ESI + 0x240]
007fc304  MOV dword ptr [EDI + 0x4],EAX
007fc307  MOV EAX,dword ptr [EDI + 0x10]
007fc30a  MOV dword ptr [EBP + 0x8],EDX
007fc30d  MOV EDX,dword ptr [ESI + 0x240]
007fc313  MOV EBX,EAX
007fc315  SHR EDX,0x1
007fc317  SUB EBX,EDX
007fc319  MOV EDX,dword ptr [EBP + 0x8]
007fc31c  SHR EBX,0x1
007fc31e  IMUL EBX,ECX
007fc321  MOV ECX,dword ptr [ESI + 0x23c]
007fc327  SHR ECX,0x1
007fc329  SUB EDX,ECX
007fc32b  SHR EDX,0x1
007fc32d  ADD EBX,EDX
007fc32f  ADD dword ptr [EDI + 0x1c],EBX
007fc332  MOV ECX,dword ptr [ESI + 0x240]
007fc338  MOV EDX,dword ptr [ESI + 0x23c]
007fc33e  SHR ECX,0x1
007fc340  SUB EAX,ECX
007fc342  MOV ECX,dword ptr [EBP + 0x8]
007fc345  SHR EAX,0x1
007fc347  IMUL EAX,dword ptr [EDI + 0x14]
007fc34b  SHR EDX,0x1
007fc34d  SUB ECX,EDX
007fc34f  SHR ECX,0x1
007fc351  ADD EAX,ECX
007fc353  ADD dword ptr [EDI + 0x20],EAX
007fc356  MOV EAX,dword ptr [ESI + 0x23c]
007fc35c  SHR EAX,0x1
007fc35e  MOV dword ptr [EDI + 0xc],EAX
007fc361  MOV EAX,dword ptr [ESI + 0x240]
007fc367  SHR EAX,0x1
007fc369  ADD ESP,0xc
007fc36c  MOV dword ptr [EDI + 0x10],EAX
007fc36f  XOR EDI,EDI
007fc371  CALL dword ptr [0x009c6810]
007fc377  MOV EAX,dword ptr [EBP + -0x4]
007fc37a  SUB EAX,dword ptr [EBP + -0x8]
007fc37d  XOR EDX,EDX
007fc37f  DIV dword ptr [ESI + 0x1a4]
007fc385  PUSH 0xa
007fc387  XOR EDX,EDX
007fc389  POP EBX
007fc38a  MOV ECX,EAX
007fc38c  MOV EAX,dword ptr [ESI + 0x1a0]
007fc392  DIV EBX
007fc394  POP EBX
007fc395  LEA ESI,[ESI + EDX*0x4 + 0x91c]
007fc39c  CMP dword ptr [ESI],EDI
007fc39e  JNZ 0x007fc3a4
007fc3a0  MOV dword ptr [ESI],ECX
007fc3a2  JMP 0x007fc3b0
007fc3a4  MOV EAX,dword ptr [ESI]
007fc3a6  IMUL EAX,EAX,0x7
007fc3a9  ADD EAX,ECX
007fc3ab  SHR EAX,0x3
007fc3ae  MOV dword ptr [ESI],EAX
007fc3b0  POP EDI
007fc3b1  POP ESI
007fc3b2  LEAVE
007fc3b3  RET
