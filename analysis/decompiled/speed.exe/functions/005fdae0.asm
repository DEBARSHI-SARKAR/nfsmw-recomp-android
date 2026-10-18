005fdae0  SUB ESP,0x18
005fdae3  PUSH EBX
005fdae4  PUSH EBP
005fdae5  PUSH EDI
005fdae6  MOV EDI,ECX
005fdae8  MOV AL,byte ptr [EDI + 0x2ce]
005fdaee  MOV CL,byte ptr [EDI + 0x2d0]
005fdaf4  MOV byte ptr [EDI + 0x2ca],AL
005fdafa  MOV byte ptr [EDI + 0x2cb],CL
005fdb00  MOV byte ptr [EDI + 0x2cc],AL
005fdb06  MOV EAX,[0x0091e000]
005fdb0b  TEST EAX,EAX
005fdb0d  JZ 0x005fdb2a
005fdb0f  MOV ECX,dword ptr [EAX + 0x1968]
005fdb15  TEST ECX,ECX
005fdb17  JZ 0x005fdb2a
005fdb19  CALL 0x005faa20
005fdb1e  CMP EAX,0x5
005fdb21  JNZ 0x005fdb2a
005fdb23  MOV ECX,0x1
005fdb28  JMP 0x005fdb2c
005fdb2a  XOR ECX,ECX
005fdb2c  MOV byte ptr [EDI + 0x2cd],CL
005fdb32  MOV EDX,dword ptr [0x009885c8]
005fdb38  XOR AL,AL
005fdb3a  TEST EDX,EDX
005fdb3c  MOV byte ptr [ESP + 0xf],0x0
005fdb41  JZ 0x005fdb48
005fdb43  MOV byte ptr [ESP + 0xf],0x1
005fdb48  MOV DL,byte ptr [0x0091e00a]
005fdb4e  TEST DL,DL
005fdb50  JZ 0x005fdb54
005fdb52  MOV AL,0x1
005fdb54  MOV DL,AL
005fdb56  MOV BL,DL
005fdb58  MOV BH,BL
005fdb5a  MOV EDX,EBX
005fdb5c  SHL EDX,0x10
005fdb5f  TEST AL,AL
005fdb61  MOV DX,BX
005fdb64  MOV dword ptr [ESP + 0x10],EDX
005fdb68  MOV dword ptr [ESP + 0x14],EDX
005fdb6c  MOV dword ptr [ESP + 0x18],EDX
005fdb70  MOV dword ptr [ESP + 0x1c],EDX
005fdb74  MOV byte ptr [ESP + 0x20],DL
005fdb78  JNZ 0x005fdbe6
005fdb7a  MOV AL,byte ptr [ESP + 0xf]
005fdb7e  TEST AL,AL
005fdb80  JNZ 0x005fdbe6
005fdb82  MOV AL,byte ptr [EDI + 0x2ca]
005fdb88  MOV DL,byte ptr [EDI + 0x2c9]
005fdb8e  MOV byte ptr [ESP + 0x11],AL
005fdb92  MOV byte ptr [ESP + 0x12],AL
005fdb96  MOV byte ptr [ESP + 0x13],AL
005fdb9a  MOV byte ptr [ESP + 0x14],AL
005fdb9e  MOV byte ptr [ESP + 0x15],AL
005fdba2  MOV byte ptr [ESP + 0x16],AL
005fdba6  MOV byte ptr [ESP + 0x17],AL
005fdbaa  MOV AL,byte ptr [EDI + 0x2cf]
005fdbb0  MOV byte ptr [ESP + 0x18],AL
005fdbb4  MOV AL,byte ptr [EDI + 0x2cb]
005fdbba  MOV byte ptr [ESP + 0x19],AL
005fdbbe  MOV byte ptr [ESP + 0x1a],AL
005fdbc2  MOV AL,byte ptr [EDI + 0x2c8]
005fdbc8  MOV byte ptr [ESP + 0x1b],DL
005fdbcc  MOV DL,byte ptr [EDI + 0x2cc]
005fdbd2  MOV BL,0x1
005fdbd4  MOV byte ptr [ESP + 0x1c],AL
005fdbd8  MOV byte ptr [ESP + 0x1d],DL
005fdbdc  MOV byte ptr [ESP + 0x1e],CL
005fdbe0  MOV byte ptr [ESP + 0x1f],BL
005fdbe4  JMP 0x005fdbe8
005fdbe6  MOV BL,0x1
005fdbe8  MOV EAX,dword ptr [EDI + 0x2bc]
005fdbee  XOR EBP,EBP
005fdbf0  CMP EAX,EBP
005fdbf2  MOV dword ptr [EDI + 0x2c0],EBP
005fdbf8  JBE 0x005fdc88
005fdbfe  PUSH ESI
005fdbff  NOP
005fdc00  MOV EAX,dword ptr [EDI + 0x2c4]
005fdc06  MOV ESI,dword ptr [EAX + EBP*0x4]
005fdc09  MOV CX,word ptr [ESI + 0x2]
005fdc0d  MOV AL,CL
005fdc0f  SHR AL,0x3
005fdc12  MOV DL,CL
005fdc14  AND AL,BL
005fdc16  TEST BL,DL
005fdc18  JZ 0x005fdc8f
005fdc1a  MOVZX EDX,word ptr [ESI]
005fdc1d  CMP byte ptr [ESP + EDX*0x1 + 0x14],0x0
005fdc22  JZ 0x005fdc8f
005fdc24  TEST AL,AL
005fdc26  JNZ 0x005fdc56
005fdc28  SHR CL,0x2
005fdc2b  TEST BL,CL
005fdc2d  JZ 0x005fdc56
005fdc2f  MOV ECX,ESI
005fdc31  CALL 0x005e5a90
005fdc36  MOV EAX,dword ptr [ESI + 0x8]
005fdc39  TEST EAX,EAX
005fdc3b  JZ 0x005fdc46
005fdc3d  MOV byte ptr [EAX + 0x2b],BL
005fdc40  MOV EAX,dword ptr [ESI + 0x8]
005fdc43  MOV byte ptr [EAX + 0x28],BL
005fdc46  MOV ECX,dword ptr [ESI + 0xc]
005fdc49  TEST ECX,ECX
005fdc4b  JZ 0x005fdc52
005fdc4d  CALL 0x00503c30
005fdc52  OR byte ptr [ESI + 0x2],0x8
005fdc56  MOV EAX,dword ptr [EDI + 0x2c4]
005fdc5c  MOV ECX,dword ptr [EDI + 0x2c0]
005fdc62  MOV EDX,dword ptr [EAX + EBP*0x4]
005fdc65  MOV ESI,dword ptr [EAX + ECX*0x4]
005fdc68  LEA ECX,[EAX + ECX*0x4]
005fdc6b  MOV dword ptr [EAX + EBP*0x4],ESI
005fdc6e  MOV dword ptr [ECX],EDX
005fdc70  INC dword ptr [EDI + 0x2c0]
005fdc76  MOV BL,0x1
005fdc78  MOV EAX,dword ptr [EDI + 0x2bc]
005fdc7e  INC EBP
005fdc7f  CMP EBP,EAX
005fdc81  JC 0x005fdc00
005fdc87  POP ESI
005fdc88  POP EDI
005fdc89  POP EBP
005fdc8a  POP EBX
005fdc8b  ADD ESP,0x18
005fdc8e  RET
005fdc8f  TEST AL,AL
005fdc91  JZ 0x005fdc78
005fdc93  MOV EAX,dword ptr [ESI + 0x8]
005fdc96  TEST EAX,EAX
005fdc98  JZ 0x005fdc9e
005fdc9a  MOV byte ptr [EAX + 0x28],0x0
005fdc9e  MOV ECX,dword ptr [ESI + 0xc]
005fdca1  TEST ECX,ECX
005fdca3  JZ 0x005fdcaa
005fdca5  CALL 0x00503c50
005fdcaa  AND byte ptr [ESI + 0x2],0xf7
005fdcae  JMP 0x005fdc78
