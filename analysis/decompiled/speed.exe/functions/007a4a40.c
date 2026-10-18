/* speed.exe 007a4a40 FUN_007a4a40; analysis pseudocode, not buildable source.
 */

uint FUN_007a4a40(uint param_1)

{
  undefined4 *puVar1;
  
  if (*(char *)(param_1 + 0x1c) != '\0') {
switchD_007a4a5d_caseD_4c:
    return param_1 & 0xffffff00;
  }
  puVar1 = (undefined4 *)(param_1 + 0x10);
  param_1 = 0;
  switch(*puVar1) {
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x5b:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x7b:
  case 0x83:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
    goto switchD_007a4a5d_caseD_4c;
  default:
    return 1;
  }
}

