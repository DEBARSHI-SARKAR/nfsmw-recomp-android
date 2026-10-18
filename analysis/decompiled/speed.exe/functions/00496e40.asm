00496e40  PUSH ECX
00496e41  PUSH ESI
00496e42  MOV ESI,ECX
00496e44  MOV AL,byte ptr [ESI]
00496e46  SHR AL,0x2
00496e49  MOVZX ECX,AL
00496e4c  MOV EAX,dword ptr [ESP + 0xc]
00496e50  MOV dword ptr [ESP + 0x4],ECX
00496e54  PUSH EDI
00496e55  MOV EDI,dword ptr [ESP + 0x14]
00496e59  FILD dword ptr [ESP + 0x8]
00496e5d  FMUL float ptr [EAX + 0x10]
00496e60  FMUL float ptr [0x00895510]
00496e66  FADD float ptr [EAX]
00496e68  FSTP float ptr [EDI]
00496e6a  MOV DL,byte ptr [ESI + 0x1]
00496e6d  SHR DL,0x2
00496e70  MOVZX ECX,DL
00496e73  MOV dword ptr [ESP + 0x10],ECX
00496e77  FILD dword ptr [ESP + 0x10]
00496e7b  FMUL float ptr [EAX + 0x14]
00496e7e  FMUL float ptr [0x00895510]
00496e84  FADD float ptr [EAX + 0x4]
00496e87  FSTP float ptr [EDI + 0x4]
00496e8a  MOV DL,byte ptr [ESI + 0x2]
00496e8d  SHR DL,0x2
00496e90  MOVZX ECX,DL
00496e93  MOV dword ptr [ESP + 0x10],ECX
00496e97  FILD dword ptr [ESP + 0x10]
00496e9b  FMUL float ptr [EAX + 0x18]
00496e9e  FMUL float ptr [0x00895510]
00496ea4  FADD float ptr [EAX + 0x8]
00496ea7  FSTP float ptr [EDI + 0x8]
00496eaa  MOV DL,byte ptr [ESI]
00496eac  MOV CL,byte ptr [ESI + 0x1]
00496eaf  AND DL,0x3
00496eb2  SHL DL,0x2
00496eb5  AND CL,0x3
00496eb8  ADD DL,CL
00496eba  MOV CL,byte ptr [ESI + 0x2]
00496ebd  SHL DL,0x2
00496ec0  AND CL,0x3
00496ec3  ADD DL,CL
00496ec5  MOVZX EDX,DL
00496ec8  MOV dword ptr [ESP + 0x10],EDX
00496ecc  FILD dword ptr [ESP + 0x10]
00496ed0  FMUL float ptr [EAX + 0x1c]
00496ed3  FMUL float ptr [0x00895510]
00496ed9  FADD float ptr [EAX + 0xc]
00496edc  FSTP float ptr [EDI + 0xc]
00496edf  POP EDI
00496ee0  POP ESI
00496ee1  POP ECX
00496ee2  RET 0x8
