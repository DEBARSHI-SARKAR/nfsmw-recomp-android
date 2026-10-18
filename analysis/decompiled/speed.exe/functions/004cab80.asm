004cab80  PUSH ESI
004cab81  MOV ESI,ECX
004cab83  PUSH EDI
004cab84  MOV EDI,dword ptr [ESI + 0xc]
004cab87  TEST EDI,EDI
004cab89  JZ 0x004cab9f
004cab8b  MOV ECX,dword ptr [EDI]
004cab8d  TEST ECX,ECX
004cab8f  JZ 0x004cab96
004cab91  CALL 0x00831782
004cab96  PUSH EDI
004cab97  CALL 0x00831682
004cab9c  ADD ESP,0x4
004cab9f  MOV EDI,dword ptr [ESI + 0x8]
004caba2  TEST EDI,EDI
004caba4  MOV dword ptr [ESI + 0xc],0x0
004cabab  JZ 0x004cabc1
004cabad  MOV ECX,dword ptr [EDI]
004cabaf  TEST ECX,ECX
004cabb1  JZ 0x004cabb8
004cabb3  CALL 0x00831782
004cabb8  PUSH EDI
004cabb9  CALL 0x00831682
004cabbe  ADD ESP,0x4
004cabc1  MOV EDI,dword ptr [ESI + 0x10]
004cabc4  TEST EDI,EDI
004cabc6  MOV dword ptr [ESI + 0x8],0x0
004cabcd  JZ 0x004cabe3
004cabcf  MOV ECX,dword ptr [EDI]
004cabd1  TEST ECX,ECX
004cabd3  JZ 0x004cabda
004cabd5  CALL 0x00831782
004cabda  PUSH EDI
004cabdb  CALL 0x00831682
004cabe0  ADD ESP,0x4
004cabe3  CMP dword ptr [ESI],0x2
004cabe6  MOV dword ptr [ESI + 0x10],0x0
004cabed  JNZ 0x004cac02
004cabef  MOV EAX,dword ptr [ESI + 0x4]
004cabf2  MOVSX ECX,byte ptr [EAX + 0x1]
004cabf6  PUSH ECX
004cabf7  PUSH ESI
004cabf8  MOV ECX,0x913c50
004cabfd  CALL 0x004c6e00
004cac02  POP EDI
004cac03  MOV dword ptr [ESI],0x0
004cac09  POP ESI
004cac0a  RET
