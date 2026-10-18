004e1cd0  PUSH ECX
004e1cd1  PUSH ESI
004e1cd2  MOV ESI,ECX
004e1cd4  MOV ECX,dword ptr [ESI + 0x28]
004e1cd7  PUSH EDI
004e1cd8  XOR EDI,EDI
004e1cda  TEST ECX,ECX
004e1cdc  JZ 0x004e1cea
004e1cde  MOV EAX,dword ptr [ESP + 0x10]
004e1ce2  PUSH EAX
004e1ce3  CALL 0x004e1350
004e1ce8  MOV EDI,EAX
004e1cea  CALL 0x0081bccb
004e1cef  FLD float ptr [ESP + 0x14]
004e1cf3  FMUL float ptr [0x00898b98]
004e1cf9  MOV dword ptr [ESI + 0x34],EDI
004e1cfc  FSTP float ptr [ESP + 0x14]
004e1d00  FLD float ptr [ESP + 0x14]
004e1d04  FIST dword ptr [ESP + 0x10]
004e1d08  FISUB dword ptr [ESP + 0x10]
004e1d0c  FSTP float ptr [ESP + 0x8]
004e1d10  MOV ECX,dword ptr [ESP + 0x8]
004e1d14  MOV EDX,dword ptr [ESP + 0x10]
004e1d18  SAR ECX,0x1f
004e1d1b  LEA EAX,[ECX + EDX*0x1 + 0x1]
004e1d1f  MOV dword ptr [ESI + 0x38],EAX
004e1d22  CALL 0x0081bcd9
004e1d27  POP EDI
004e1d28  MOV AL,0x1
004e1d2a  POP ESI
004e1d2b  POP ECX
004e1d2c  RET 0x8
