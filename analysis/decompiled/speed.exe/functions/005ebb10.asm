005ebb10  MOV EAX,FS:[0x0]
005ebb16  PUSH -0x1
005ebb18  PUSH 0x87551f
005ebb1d  PUSH EAX
005ebb1e  MOV dword ptr FS:[0x0],ESP
005ebb25  SUB ESP,0x8
005ebb28  PUSH EDI
005ebb29  MOV EDI,ECX
005ebb2b  MOV AL,byte ptr [EDI + 0x2b4]
005ebb31  TEST AL,AL
005ebb33  JZ 0x005ebc5d
005ebb39  MOV ECX,0x9aa9d0
005ebb3e  CALL 0x007303d0
005ebb43  NEG AL
005ebb45  SBB AL,AL
005ebb47  INC AL
005ebb49  MOV byte ptr [ESP + 0x7],AL
005ebb4d  JZ 0x005ebc5d
005ebb53  MOV EAX,dword ptr [EDI + 0x2b8]
005ebb59  TEST EAX,EAX
005ebb5b  JZ 0x005ebc06
005ebb61  PUSH EBX
005ebb62  PUSH EBP
005ebb63  PUSH ESI
005ebb64  PUSH EAX
005ebb65  MOV ECX,EDI
005ebb67  CALL 0x005dd930
005ebb6c  LEA EBP,[EAX + 0x28]
005ebb6f  LEA EBX,[EAX + 0x34]
005ebb72  MOV EAX,[0x0092d884]
005ebb77  TEST EAX,EAX
005ebb79  JZ 0x005ebb84
005ebb7b  MOV EAX,[0x0092d87c]
005ebb80  MOV ECX,dword ptr [EAX]
005ebb82  JMP 0x005ebb86
005ebb84  XOR ECX,ECX
005ebb86  MOV EDX,dword ptr [ECX]
005ebb88  CALL dword ptr [EDX + 0x4]
005ebb8b  MOV ECX,dword ptr [EAX + 0x4]
005ebb8e  PUSH 0x4040e0
005ebb93  CALL 0x005d59f0
005ebb98  MOV ESI,EAX
005ebb9a  TEST ESI,ESI
005ebb9c  JZ 0x005ebbb1
005ebb9e  MOV EAX,dword ptr [ESI]
005ebba0  PUSH EBX
005ebba1  PUSH EBP
005ebba2  MOV ECX,ESI
005ebba4  CALL dword ptr [EAX + 0x68]
005ebba7  MOV EDX,dword ptr [ESI]
005ebba9  MOV ECX,ESI
005ebbab  CALL dword ptr [EDX + 0x80]
005ebbb1  MOV AL,byte ptr [EDI + 0x2b5]
005ebbb7  TEST AL,AL
005ebbb9  POP ESI
005ebbba  POP EBP
005ebbbb  MOV dword ptr [EDI + 0x2b8],0x0
005ebbc5  POP EBX
005ebbc6  JZ 0x005ebc06
005ebbc8  CALL 0x0074d320
005ebbcd  CALL 0x0041ace0
005ebbd2  MOV ECX,dword ptr [0x0092c674]
005ebbd8  MOV EAX,dword ptr [ECX]
005ebbda  PUSH 0x1
005ebbdc  CALL dword ptr [EAX + 0x4]
005ebbdf  MOV ECX,dword ptr [0x0092c67c]
005ebbe5  MOV EDX,dword ptr [ECX]
005ebbe7  PUSH 0x1
005ebbe9  CALL dword ptr [EDX + 0x8]
005ebbec  MOV ECX,dword ptr [0x0092c67c]
005ebbf2  MOV EAX,dword ptr [ECX]
005ebbf4  PUSH 0x0
005ebbf6  CALL dword ptr [EAX + 0x2c]
005ebbf9  MOV ECX,dword ptr [0x0092c67c]
005ebbff  MOV EDX,dword ptr [ECX]
005ebc01  PUSH 0x1
005ebc03  CALL dword ptr [EDX + 0x34]
005ebc06  MOV AL,byte ptr [EDI + 0x2b5]
005ebc0c  TEST AL,AL
005ebc0e  JZ 0x005ebc26
005ebc10  MOV ECX,dword ptr [0x0092c67c]
005ebc16  MOV EAX,dword ptr [ECX]
005ebc18  CALL dword ptr [EAX + 0x20]
005ebc1b  TEST AL,AL
005ebc1d  JZ 0x005ebc6d
005ebc1f  MOV byte ptr [EDI + 0x2b5],0x0
005ebc26  MOV byte ptr [EDI + 0x2b4],0x0
005ebc2d  MOV AL,byte ptr [EDI + 0x2b4]
005ebc33  TEST AL,AL
005ebc35  JNZ 0x005ebc5d
005ebc37  PUSH 0xc
005ebc39  CALL 0x00627400
005ebc3e  ADD ESP,0x4
005ebc41  MOV dword ptr [ESP + 0x8],EAX
005ebc45  TEST EAX,EAX
005ebc47  MOV dword ptr [ESP + 0x14],0x0
005ebc4f  JZ 0x005ebc5d
005ebc51  PUSH 0x161a918
005ebc56  MOV ECX,EAX
005ebc58  CALL 0x00621e80
005ebc5d  MOV ECX,dword ptr [ESP + 0xc]
005ebc61  POP EDI
005ebc62  MOV dword ptr FS:[0x0],ECX
005ebc69  ADD ESP,0x14
005ebc6c  RET
005ebc6d  MOV ECX,dword ptr [0x0092c67c]
005ebc73  MOV EDX,dword ptr [ECX]
005ebc75  PUSH 0x1
005ebc77  CALL dword ptr [EDX + 0x34]
005ebc7a  JMP 0x005ebc2d
