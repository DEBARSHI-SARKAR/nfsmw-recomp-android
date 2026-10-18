006c58c0  PUSH EBP
006c58c1  MOV EBP,ESP
006c58c3  AND ESP,0xfffffff0
006c58c6  SUB ESP,0x44
006c58c9  PUSH EBX
006c58ca  PUSH ESI
006c58cb  PUSH EDI
006c58cc  PUSH 0x0
006c58ce  PUSH 0x1
006c58d0  PUSH 0x8af2ac
006c58d5  MOV ESI,ECX
006c58d7  CALL 0x00460bf0
006c58dc  ADD ESP,0x4
006c58df  PUSH EAX
006c58e0  CALL 0x00503400
006c58e5  MOV EDX,dword ptr [0x00982c80]
006c58eb  MOV EAX,dword ptr [EAX]
006c58ed  MOV ECX,dword ptr [EDX + 0x48]
006c58f0  MOV EAX,dword ptr [EAX + 0x18]
006c58f3  MOV EDX,dword ptr [EDX + 0x44]
006c58f6  MOV EDI,dword ptr [ECX]
006c58f8  ADD ESP,0xc
006c58fb  PUSH EAX
006c58fc  MOV EAX,dword ptr [EDX + 0x7f4]
006c5902  PUSH EAX
006c5903  PUSH ECX
006c5904  CALL dword ptr [EDI + 0xd0]
006c590a  MOV ECX,dword ptr [0x00982c80]
006c5910  MOV EAX,dword ptr [ECX + 0x48]
006c5913  MOV EDI,dword ptr [0x0093d068]
006c5919  MOV ECX,dword ptr [ECX + 0x44]
006c591c  MOV ECX,dword ptr [ECX + 0x7a4]
006c5922  MOV EDX,dword ptr [EAX]
006c5924  PUSH EDI
006c5925  PUSH ECX
006c5926  PUSH EAX
006c5927  CALL dword ptr [EDX + 0xd0]
006c592d  MOV ECX,dword ptr [0x00982c80]
006c5933  MOV EAX,dword ptr [ECX + 0x48]
006c5936  MOV EDI,dword ptr [0x00982a6c]
006c593c  MOV ECX,dword ptr [ECX + 0x44]
006c593f  MOV ECX,dword ptr [ECX + 0xaec]
006c5945  MOV EDX,dword ptr [EAX]
006c5947  PUSH EDI
006c5948  PUSH ECX
006c5949  PUSH EAX
006c594a  CALL dword ptr [EDX + 0xd0]
006c5950  MOV AL,byte ptr [ESI + 0x40]
006c5953  TEST AL,AL
006c5955  JNZ 0x006c5a9a
006c595b  MOV EDX,dword ptr [0x00982a20]
006c5961  MOV dword ptr [ESP + 0x14],0x0
006c5969  MOV dword ptr [ESP + 0x18],0x0
006c5971  MOV dword ptr [ESP + 0x1c],0x0
006c5979  MOV dword ptr [ESP + 0x20],0x0
006c5981  MOV dword ptr [ESP + 0x28],0x0
006c5989  MOV dword ptr [ESP + 0x2c],0x0
006c5991  MOV dword ptr [ESP + 0x30],0x0
006c5999  MOV dword ptr [ESP + 0x34],0x0
006c59a1  MOV dword ptr [ESP + 0x38],0x3f800000
006c59a9  MOV dword ptr [ESP + 0x3c],0x0
006c59b1  MOV dword ptr [ESP + 0x48],0x0
006c59b9  MOV dword ptr [ESP + 0x4c],0x3f800000
006c59c1  MOV dword ptr [ESP + 0x10],0x3f000000
006c59c9  MOV dword ptr [ESP + 0x24],0xbf000000
006c59d1  MOV dword ptr [ESP + 0x40],0x3f000000
006c59d9  MOV dword ptr [ESP + 0x44],0x3f000000
006c59e1  MOV EAX,dword ptr [EDX + 0x4]
006c59e4  IMUL EAX,EAX,0x70
006c59e7  ADD EAX,0x9195e0
006c59ec  JZ 0x006c5a42
006c59ee  MOV EDX,dword ptr [EAX]
006c59f0  LEA ECX,[ESP + 0x10]
006c59f4  PUSH ECX
006c59f5  ADD EDX,0x40
006c59f8  PUSH EDX
006c59f9  MOV EAX,ECX
006c59fb  PUSH EAX
006c59fc  CALL 0x007e7d5e
006c5a01  MOV ECX,dword ptr [ESP + 0x1c]
006c5a05  MOV EDX,dword ptr [ESP + 0x2c]
006c5a09  MOV EAX,dword ptr [ESP + 0x3c]
006c5a0d  MOV dword ptr [ESP + 0x18],ECX
006c5a11  MOV ECX,dword ptr [ESP + 0x4c]
006c5a15  MOV dword ptr [ESP + 0x48],ECX
006c5a19  MOV ECX,dword ptr [0x00982c80]
006c5a1f  MOV dword ptr [ESP + 0x28],EDX
006c5a23  MOV dword ptr [ESP + 0x38],EAX
006c5a27  MOV EAX,dword ptr [ECX + 0x48]
006c5a2a  MOV ECX,dword ptr [ECX + 0x44]
006c5a2d  MOV ECX,dword ptr [ECX + 0xac4]
006c5a33  MOV EDX,dword ptr [EAX]
006c5a35  LEA ESI,[ESP + 0x10]
006c5a39  PUSH ESI
006c5a3a  PUSH ECX
006c5a3b  PUSH EAX
006c5a3c  CALL dword ptr [EDX + 0x98]
006c5a42  FLD float ptr [0x008fae88]
006c5a48  MOV ESI,dword ptr [0x00982bdc]
006c5a4e  FMUL float ptr [0x00899dd8]
006c5a54  MOV EDI,dword ptr [ESI]
006c5a56  CALL 0x007c4b80
006c5a5b  FLD float ptr [0x008fae8c]
006c5a61  FMUL float ptr [0x00899dd8]
006c5a67  MOV EBX,EAX
006c5a69  SHL EBX,0x8
006c5a6c  CALL 0x007c4b80
006c5a71  FLD float ptr [0x008fae90]
006c5a77  FMUL float ptr [0x00899dd8]
006c5a7d  OR EBX,EAX
006c5a7f  SHL EBX,0x8
006c5a82  CALL 0x007c4b80
006c5a87  OR EBX,EAX
006c5a89  PUSH EBX
006c5a8a  PUSH 0x3c
006c5a8c  PUSH ESI
006c5a8d  CALL dword ptr [EDI + 0xe4]
006c5a93  POP EDI
006c5a94  POP ESI
006c5a95  POP EBX
006c5a96  MOV ESP,EBP
006c5a98  POP EBP
006c5a99  RET
006c5a9a  PUSH 0x0
006c5a9c  PUSH 0x1
006c5a9e  PUSH 0x8af2ac
006c5aa3  CALL 0x00460bf0
006c5aa8  ADD ESP,0x4
006c5aab  PUSH EAX
006c5aac  CALL 0x00503400
006c5ab1  MOV EDX,dword ptr [0x00982c80]
006c5ab7  MOV EAX,dword ptr [EAX]
006c5ab9  MOV ECX,dword ptr [EDX + 0x48]
006c5abc  MOV EAX,dword ptr [EAX + 0x18]
006c5abf  MOV EDX,dword ptr [EDX + 0x44]
006c5ac2  MOV ESI,dword ptr [ECX]
006c5ac4  ADD ESP,0xc
006c5ac7  PUSH EAX
006c5ac8  MOV EAX,dword ptr [EDX + 0x7f4]
006c5ace  PUSH EAX
006c5acf  PUSH ECX
006c5ad0  CALL dword ptr [ESI + 0xd0]
006c5ad6  MOV ECX,dword ptr [0x00982c80]
006c5adc  MOV EAX,dword ptr [ECX + 0x48]
006c5adf  MOV ESI,dword ptr [0x0093d068]
006c5ae5  MOV ECX,dword ptr [ECX + 0x44]
006c5ae8  MOV ECX,dword ptr [ECX + 0x7a4]
006c5aee  MOV EDX,dword ptr [EAX]
006c5af0  PUSH ESI
006c5af1  PUSH ECX
006c5af2  PUSH EAX
006c5af3  CALL dword ptr [EDX + 0xd0]
006c5af9  MOV ECX,dword ptr [0x00982c80]
006c5aff  MOV EAX,dword ptr [ECX + 0x48]
006c5b02  MOV ESI,dword ptr [0x00982a6c]
006c5b08  MOV ECX,dword ptr [ECX + 0x44]
006c5b0b  MOV ECX,dword ptr [ECX + 0xaec]
006c5b11  MOV EDX,dword ptr [EAX]
006c5b13  PUSH ESI
006c5b14  PUSH ECX
006c5b15  PUSH EAX
006c5b16  CALL dword ptr [EDX + 0xd0]
006c5b1c  MOV ECX,dword ptr [0x00982c80]
006c5b22  MOV EAX,dword ptr [ECX + 0x48]
006c5b25  MOV ECX,dword ptr [ECX + 0x44]
006c5b28  MOV ECX,dword ptr [ECX + 0xb14]
006c5b2e  MOV EDX,dword ptr [EAX]
006c5b30  PUSH 0x3dcccccd
006c5b35  PUSH ECX
006c5b36  PUSH EAX
006c5b37  CALL dword ptr [EDX + 0x78]
006c5b3a  POP EDI
006c5b3b  POP ESI
006c5b3c  POP EBX
006c5b3d  MOV ESP,EBP
006c5b3f  POP EBP
006c5b40  RET
