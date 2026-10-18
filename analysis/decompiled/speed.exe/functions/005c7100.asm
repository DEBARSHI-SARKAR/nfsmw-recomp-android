005c7100  SUB ESP,0x20
005c7103  MOV ECX,dword ptr [ESP + 0x24]
005c7107  LEA EAX,[ESP + 0x14]
005c710b  PUSH EAX
005c710c  PUSH ECX
005c710d  CALL 0x005c67f0
005c7112  FLD float ptr [ESP + 0x30]
005c7116  FMUL float ptr [0x008a2f94]
005c711c  MOV EAX,dword ptr [ESP + 0x34]
005c7120  XOR ECX,ECX
005c7122  MOV dword ptr [EAX + 0xc],ECX
005c7125  FLD ST0
005c7127  MOV dword ptr [EAX + 0x1c],ECX
005c712a  FSIN
005c712c  MOV dword ptr [EAX + 0x2c],ECX
005c712f  MOV dword ptr [EAX + 0x30],ECX
005c7132  MOV dword ptr [EAX + 0x34],ECX
005c7135  MOV dword ptr [EAX + 0x38],ECX
005c7138  MOV dword ptr [EAX + 0x3c],0x3f800000
005c713f  FXCH
005c7141  FCOS
005c7143  FSTP float ptr [ESP + 0x30]
005c7147  FLD float ptr [0x0089096c]
005c714d  FSUB float ptr [ESP + 0x30]
005c7151  FSTP float ptr [ESP + 0xc]
005c7155  FLD float ptr [ESP + 0x1c]
005c7159  FMUL float ptr [ESP + 0xc]
005c715d  FSTP float ptr [ESP + 0x8]
005c7161  FLD float ptr [ESP + 0x20]
005c7165  FMUL float ptr [ESP + 0xc]
005c7169  FSTP float ptr [ESP + 0x10]
005c716d  FLD float ptr [ESP + 0x1c]
005c7171  FMUL ST1
005c7173  FSTP float ptr [ESP + 0x18]
005c7177  FLD float ptr [ESP + 0x20]
005c717b  FMUL ST1
005c717d  FSTP float ptr [ESP + 0x14]
005c7181  FMUL float ptr [ESP + 0x24]
005c7185  FLD float ptr [ESP + 0x1c]
005c7189  FMUL float ptr [ESP + 0x8]
005c718d  FADD float ptr [ESP + 0x30]
005c7191  FSTP float ptr [EAX]
005c7193  FLD float ptr [ESP + 0x20]
005c7197  FMUL float ptr [ESP + 0x8]
005c719b  FLD ST0
005c719d  FADD ST0,ST2
005c719f  FSTP float ptr [EAX + 0x4]
005c71a2  FLD float ptr [ESP + 0x24]
005c71a6  FMUL float ptr [ESP + 0x8]
005c71aa  FST float ptr [ESP + 0x34]
005c71ae  FSUB float ptr [ESP + 0x14]
005c71b2  FSTP float ptr [EAX + 0x8]
005c71b5  FSUB ST0,ST1
005c71b7  FSTP float ptr [EAX + 0x10]
005c71ba  FSTP ST0
005c71bc  FLD float ptr [ESP + 0x20]
005c71c0  FMUL float ptr [ESP + 0x10]
005c71c4  FADD float ptr [ESP + 0x30]
005c71c8  FSTP float ptr [EAX + 0x14]
005c71cb  FLD float ptr [ESP + 0x24]
005c71cf  FMUL float ptr [ESP + 0x10]
005c71d3  FLD float ptr [ESP + 0x18]
005c71d7  FADD ST0,ST1
005c71d9  FSTP float ptr [EAX + 0x18]
005c71dc  FLD float ptr [ESP + 0x34]
005c71e0  FADD float ptr [ESP + 0x14]
005c71e4  FSTP float ptr [EAX + 0x20]
005c71e7  FSUB float ptr [ESP + 0x18]
005c71eb  FSTP float ptr [EAX + 0x24]
005c71ee  FLD float ptr [ESP + 0x24]
005c71f2  FMUL float ptr [ESP + 0xc]
005c71f6  FMUL float ptr [ESP + 0x24]
005c71fa  FADD float ptr [ESP + 0x30]
005c71fe  FSTP float ptr [EAX + 0x28]
005c7201  ADD ESP,0x28
005c7204  RET
