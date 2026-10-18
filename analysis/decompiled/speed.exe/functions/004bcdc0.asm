004bcdc0  PUSH EBP
004bcdc1  PUSH ESI
004bcdc2  MOV ESI,ECX
004bcdc4  PUSH EDI
004bcdc5  MOV EDI,dword ptr [ESP + 0x10]
004bcdc9  LEA EBP,[ESI + 0x4c]
004bcdcc  PUSH EDI
004bcdcd  MOV ECX,EBP
004bcdcf  CALL 0x004b0320
004bcdd4  PUSH EDI
004bcdd5  MOV ECX,ESI
004bcdd7  CALL 0x004bccd0
004bcddc  PUSH EDI
004bcddd  MOV ECX,ESI
004bcddf  CALL 0x004bcd50
004bcde4  MOV EAX,dword ptr [ESI + 0x84]
004bcdea  TEST EAX,EAX
004bcdec  JZ 0x004bcf4b
004bcdf2  MOV ECX,dword ptr [ESI + 0x18]
004bcdf5  MOV DL,byte ptr [ECX + 0x68]
004bcdf8  TEST DL,DL
004bcdfa  MOV EDI,0x4
004bcdff  JNZ 0x004bce87
004bce05  CMP EAX,EDI
004bce07  JZ 0x004bce87
004bce09  MOV ECX,dword ptr [ESI + 0x90]
004bce0f  PUSH 0x0
004bce11  PUSH 0x49fb8ce5
004bce16  CALL 0x00454810
004bce1b  TEST EAX,EAX
004bce1d  JNZ 0x004bce28
004bce1f  PUSH EDI
004bce20  CALL 0x006269b0
004bce25  ADD ESP,0x4
004bce28  MOV EDX,dword ptr [ESI + 0x18]
004bce2b  MOV ECX,dword ptr [EDX + 0x64]
004bce2e  MOV EDX,dword ptr [EAX]
004bce30  MOV dword ptr [ESP + 0x10],ECX
004bce34  MOV ECX,dword ptr [ESI + 0x28]
004bce37  MOV EAX,dword ptr [ESP + 0x10]
004bce3b  PUSH 0x5
004bce3d  PUSH EDX
004bce3e  MOV EDX,dword ptr [ECX]
004bce40  PUSH EAX
004bce41  CALL dword ptr [EDX + 0x44]
004bce44  PUSH ECX
004bce45  LEA ECX,[ESI + 0x30]
004bce48  FSTP float ptr [ESP]
004bce4b  CALL 0x004b02b0
004bce50  MOV ECX,dword ptr [ESI + 0x90]
004bce56  PUSH 0x0
004bce58  PUSH 0x49fb8ce5
004bce5d  MOV dword ptr [ESI + 0x84],EDI
004bce63  CALL 0x00454810
004bce68  TEST EAX,EAX
004bce6a  JNZ 0x004bce75
004bce6c  PUSH EDI
004bce6d  CALL 0x006269b0
004bce72  ADD ESP,0x4
004bce75  MOV EAX,dword ptr [EAX]
004bce77  MOV ECX,dword ptr [ESI + 0x60]
004bce7a  PUSH 0x0
004bce7c  PUSH EAX
004bce7d  PUSH 0x0
004bce7f  PUSH ECX
004bce80  MOV ECX,EBP
004bce82  CALL 0x004b02b0
004bce87  MOV EAX,dword ptr [ESI + 0x18]
004bce8a  MOV CL,byte ptr [EAX + 0x68]
004bce8d  TEST CL,CL
004bce8f  JNZ 0x004bced2
004bce91  CMP dword ptr [ESI + 0x84],EDI
004bce97  JZ 0x004bced2
004bce99  MOV ECX,dword ptr [ESI + 0x28]
004bce9c  MOV dword ptr [ESI + 0x84],EDI
004bcea2  MOV EDX,dword ptr [EAX + 0x64]
004bcea5  PUSH 0x0
004bcea7  MOV EAX,EDX
004bcea9  PUSH 0x64
004bceab  MOV dword ptr [ESP + 0x18],EDX
004bceaf  MOV EDX,dword ptr [ECX]
004bceb1  PUSH EAX
004bceb2  CALL dword ptr [EDX + 0x44]
004bceb5  PUSH ECX
004bceb6  LEA ECX,[ESI + 0x30]
004bceb9  FSTP float ptr [ESP]
004bcebc  CALL 0x004b02b0
004bcec1  MOV EAX,dword ptr [ESI + 0x60]
004bcec4  PUSH 0x0
004bcec6  PUSH 0x64
004bcec8  PUSH 0x0
004bceca  PUSH EAX
004bcecb  MOV ECX,EBP
004bcecd  CALL 0x004b02b0
004bced2  MOV EAX,dword ptr [ESI + 0x84]
004bced8  DEC EAX
004bced9  CMP EAX,0x3
004bcedc  JA 0x004bcf4b
004bcede  JMP dword ptr [EAX*0x4 + 0x4bcf54]
004bcee5  MOV AL,byte ptr [ESI + 0x48]
004bcee8  TEST AL,AL
004bceea  JZ 0x004bcf4b
004bceec  MOV ECX,dword ptr [ESI + 0x90]
004bcef2  MOV dword ptr [ESI + 0x84],0x3
004bcefc  MOV EDX,dword ptr [ECX + 0x8]
004bceff  MOV EAX,dword ptr [EDX + 0x4]
004bcf02  MOV ECX,dword ptr [ESI + 0x18]
004bcf05  MOV EDX,dword ptr [ECX + 0x64]
004bcf08  PUSH 0x0
004bcf0a  PUSH EAX
004bcf0b  MOV EAX,dword ptr [ESI + 0x44]
004bcf0e  PUSH EDX
004bcf0f  PUSH EAX
004bcf10  LEA ECX,[ESI + 0x30]
004bcf13  CALL 0x004b02b0
004bcf18  MOV ECX,dword ptr [ESI + 0x90]
004bcf1e  MOV EDX,dword ptr [ECX + 0x8]
004bcf21  MOV EAX,dword ptr [EDX + 0x4]
004bcf24  MOV ECX,dword ptr [ESI + 0x60]
004bcf27  PUSH 0x0
004bcf29  PUSH EAX
004bcf2a  PUSH 0x0
004bcf2c  PUSH ECX
004bcf2d  MOV ECX,EBP
004bcf2f  CALL 0x004b02b0
004bcf34  POP EDI
004bcf35  POP ESI
004bcf36  POP EBP
004bcf37  RET 0x4
004bcf3a  MOV AL,byte ptr [ESI + 0x48]
004bcf3d  TEST AL,AL
004bcf3f  JZ 0x004bcf4b
004bcf41  MOV dword ptr [ESI + 0x84],0x0
004bcf4b  POP EDI
004bcf4c  POP ESI
004bcf4d  POP EBP
004bcf4e  RET 0x4
