004bbc10  SUB ESP,0x8
004bbc13  PUSH EBX
004bbc14  XOR EBX,EBX
004bbc16  PUSH ESI
004bbc17  MOV ESI,ECX
004bbc19  MOV ECX,dword ptr [ESI + 0x28]
004bbc1c  MOV dword ptr [ESI + 0x148],EBX
004bbc22  MOV dword ptr [ESI + 0x40],EBX
004bbc25  MOV dword ptr [ESI + 0x44],EBX
004bbc28  MOV dword ptr [ESI + 0x48],EBX
004bbc2b  MOV dword ptr [ESI + 0x4c],EBX
004bbc2e  MOV dword ptr [ESI + 0x50],EBX
004bbc31  MOV dword ptr [ESI + 0x54],EBX
004bbc34  MOV dword ptr [ESI + 0x38],EBX
004bbc37  MOV dword ptr [ESI + 0x3c],EBX
004bbc3a  MOV EAX,dword ptr [ECX + 0x30]
004bbc3d  FLD float ptr [EAX + 0x2c]
004bbc40  FCOMP float ptr [0x00894b60]
004bbc46  FNSTSW AX
004bbc48  TEST AH,0x5
004bbc4b  JNP 0x004bbf06
004bbc51  MOV EAX,0x1
004bbc56  MOV dword ptr [ESI + 0x38],EAX
004bbc59  MOV dword ptr [ESI + 0x3c],EAX
004bbc5c  FLD float ptr [ECX + 0x11c]
004bbc62  FST float ptr [ESI + 0x68]
004bbc65  MOV EDX,dword ptr [ECX + 0x118]
004bbc6b  FST float ptr [ECX + 0x118]
004bbc71  PUSH EBP
004bbc72  FMUL float ptr [0x00890ea8]
004bbc78  MOV dword ptr [ECX + 0x11c],EDX
004bbc7e  FLD float ptr [ECX + 0x120]
004bbc84  PUSH EBX
004bbc85  FMUL float ptr [0x00896b58]
004bbc8b  PUSH 0xf040e6b0
004bbc90  FADDP
004bbc92  FSTP float ptr [ECX + 0x120]
004bbc98  MOV EAX,[0x009142dc]
004bbc9d  MOV ECX,dword ptr [ESI + 0x34]
004bbca0  MOV dword ptr [ESI + 0x64],EAX
004bbca3  CALL 0x00454810
004bbca8  CMP EAX,EBX
004bbcaa  JNZ 0x004bbcb6
004bbcac  PUSH 0x40
004bbcae  CALL 0x006269b0
004bbcb3  ADD ESP,0x4
004bbcb6  MOV ECX,dword ptr [ESI + 0x34]
004bbcb9  PUSH EDI
004bbcba  PUSH EBX
004bbcbb  PUSH 0xf2d90101
004bbcc0  MOV EBP,EAX
004bbcc2  CALL 0x00454810
004bbcc7  CMP EAX,EBX
004bbcc9  JNZ 0x004bbcd5
004bbccb  PUSH 0x4
004bbccd  CALL 0x006269b0
004bbcd2  ADD ESP,0x4
004bbcd5  MOV ECX,dword ptr [ESI + 0x34]
004bbcd8  PUSH EBX
004bbcd9  PUSH 0xf2d90101
004bbcde  MOV EDI,EAX
004bbce0  CALL 0x00454810
004bbce5  CMP EAX,EBX
004bbce7  JNZ 0x004bbcf3
004bbce9  PUSH 0x4
004bbceb  CALL 0x006269b0
004bbcf0  ADD ESP,0x4
004bbcf3  MOVSX ECX,word ptr [EDI]
004bbcf6  MOVSX EDX,word ptr [EAX + 0x2]
004bbcfa  MOV dword ptr [ESP + 0x10],ECX
004bbcfe  SUB ESP,0x8
004bbd01  LEA EAX,[ESI + 0xc8]
004bbd07  FILD dword ptr [ESP + 0x18]
004bbd0b  MOV dword ptr [ESP + 0x18],EDX
004bbd0f  FSTP float ptr [ESP + 0x4]
004bbd13  FILD dword ptr [ESP + 0x18]
004bbd17  FSTP float ptr [ESP]
004bbd1a  PUSH 0x7
004bbd1c  PUSH EAX
004bbd1d  PUSH EBP
004bbd1e  CALL 0x004b3860
004bbd23  FLD float ptr [ESI + 0x68]
004bbd26  ADD ESP,0x14
004bbd29  MOV dword ptr [ESI + 0x100],EBX
004bbd2f  MOV byte ptr [ESI + 0x104],BL
004bbd35  CALL 0x007c4b80
004bbd3a  FLD float ptr [ESI + 0x68]
004bbd3d  FLD float ptr [ESI + 0x68]
004bbd40  MOV word ptr [ESI + 0x106],AX
004bbd47  MOV dword ptr [ESI + 0x98],EBX
004bbd4d  FXCH
004bbd4f  FSTP float ptr [ESI + 0x94]
004bbd55  MOV byte ptr [ESI + 0xa0],BL
004bbd5b  MOV dword ptr [ESI + 0x88],EBX
004bbd61  FST float ptr [ESI + 0x90]
004bbd67  MOV EBP,0x3c23d70a
004bbd6c  FSTP float ptr [ESI + 0x9c]
004bbd72  MOV dword ptr [ESI + 0x8c],EBP
004bbd78  MOV dword ptr [ESI + 0xa8],0x3a83126f
004bbd82  MOV dword ptr [ESI + 0xb0],EBX
004bbd88  MOV dword ptr [ESI + 0xac],EBX
004bbd8e  MOV dword ptr [ESI + 0xb4],EBX
004bbd94  MOV byte ptr [ESI + 0xbc],BL
004bbd9a  MOV dword ptr [ESI + 0xb8],EBX
004bbda0  MOV dword ptr [ESI + 0xa4],EBX
004bbda6  MOV ECX,dword ptr [ESI + 0x28]
004bbda9  MOV ECX,dword ptr [ECX + 0x30]
004bbdac  MOV EDX,dword ptr [ECX]
004bbdae  CALL dword ptr [EDX + 0x34]
004bbdb1  FST float ptr [ESI + 0x74]
004bbdb4  FSTP float ptr [ESI + 0x80]
004bbdba  MOV dword ptr [ESI + 0x70],0x3dcccccd
004bbdc1  MOV dword ptr [ESI + 0x78],EBX
004bbdc4  MOV dword ptr [ESI + 0x7c],EBX
004bbdc7  MOV byte ptr [ESI + 0x84],BL
004bbdcd  MOV dword ptr [ESI + 0x6c],EBX
004bbdd0  MOV ECX,dword ptr [ESI + 0x34]
004bbdd3  CALL 0x004ad280
004bbdd8  CMP EAX,0x1
004bbddb  MOV ECX,dword ptr [ESI + 0x34]
004bbdde  PUSH EBX
004bbddf  PUSH 0xf2d90101
004bbde4  JNZ 0x004bbe07
004bbde6  CALL 0x00454810
004bbdeb  CMP EAX,EBX
004bbded  JNZ 0x004bbdf9
004bbdef  PUSH 0x4
004bbdf1  CALL 0x006269b0
004bbdf6  ADD ESP,0x4
004bbdf9  MOVSX EAX,word ptr [EAX + 0x2]
004bbdfd  MOV dword ptr [ESP + 0x10],EAX
004bbe01  FILD dword ptr [ESP + 0x10]
004bbe05  JMP 0x004bbe51
004bbe07  CALL 0x00454810
004bbe0c  CMP EAX,EBX
004bbe0e  JNZ 0x004bbe1a
004bbe10  PUSH 0x4
004bbe12  CALL 0x006269b0
004bbe17  ADD ESP,0x4
004bbe1a  MOV ECX,dword ptr [ESI + 0x34]
004bbe1d  PUSH 0x1
004bbe1f  PUSH 0xf2d90101
004bbe24  MOV EDI,EAX
004bbe26  CALL 0x00454810
004bbe2b  CMP EAX,EBX
004bbe2d  JNZ 0x004bbe39
004bbe2f  PUSH 0x4
004bbe31  CALL 0x006269b0
004bbe36  ADD ESP,0x4
004bbe39  MOVSX ECX,word ptr [EAX + 0x2]
004bbe3d  MOVSX EDX,word ptr [EDI + 0x2]
004bbe41  MOV dword ptr [ESP + 0x10],ECX
004bbe45  FILD dword ptr [ESP + 0x10]
004bbe49  MOV dword ptr [ESP + 0x10],EDX
004bbe4d  FIADD dword ptr [ESP + 0x10]
004bbe51  MOV ECX,dword ptr [ESI + 0x34]
004bbe54  FSTP float ptr [ESP + 0x10]
004bbe58  PUSH EBX
004bbe59  PUSH 0xcb89b8c8
004bbe5e  CALL 0x00454810
004bbe63  CMP EAX,EBX
004bbe65  POP EDI
004bbe66  JNZ 0x004bbe72
004bbe68  PUSH 0x4
004bbe6a  CALL 0x006269b0
004bbe6f  ADD ESP,0x4
004bbe72  MOVSX EAX,word ptr [EAX + 0x2]
004bbe76  FLD float ptr [ESI + 0x68]
004bbe79  FSUB float ptr [0x008970bc]
004bbe7f  MOV dword ptr [ESP + 0x10],EAX
004bbe83  FLD float ptr [ESI + 0x68]
004bbe86  FILD dword ptr [ESP + 0x10]
004bbe8a  FADD float ptr [ESP + 0xc]
004bbe8e  CALL 0x007c4b80
004bbe93  MOV dword ptr [ESP + 0x10],EAX
004bbe97  FILD dword ptr [ESP + 0x10]
004bbe9b  FMUL float ptr [0x00890d60]
004bbea1  FST float ptr [ESI + 0x150]
004bbea7  FCOMP float ptr [0x00890968]
004bbead  FNSTSW AX
004bbeaf  TEST AH,0x41
004bbeb2  JP 0x004bbeba
004bbeb4  MOV dword ptr [ESI + 0x150],EBP
004bbeba  MOV dword ptr [ESI + 0x15c],0x5
004bbec4  FXCH
004bbec6  FSTP float ptr [ESI + 0x158]
004bbecc  MOV byte ptr [ESI + 0x164],BL
004bbed2  MOV dword ptr [ESI + 0x14c],EBX
004bbed8  FST float ptr [ESI + 0x154]
004bbede  POP EBP
004bbedf  FSTP float ptr [ESI + 0x160]
004bbee5  MOV ECX,dword ptr [ESI + 0x34]
004bbee8  MOV EDX,dword ptr [ECX + 0x8]
004bbeeb  FLD float ptr [0x009142dc]
004bbef1  FADD float ptr [EDX + 0x34]
004bbef4  MOV byte ptr [ESI + 0x58],0x1
004bbef8  MOV dword ptr [ESI + 0x5c],0x1
004bbeff  MOV byte ptr [ESI + 0x2d],0x1
004bbf03  FSTP float ptr [ESI + 0x60]
004bbf06  POP ESI
004bbf07  POP EBX
004bbf08  ADD ESP,0x8
004bbf0b  RET
