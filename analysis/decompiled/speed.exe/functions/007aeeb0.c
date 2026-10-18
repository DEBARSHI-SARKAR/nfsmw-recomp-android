/* speed.exe 007aeeb0 FUN_007aeeb0; analysis pseudocode, not buildable source.
 */

uint __fastcall FUN_007aeeb0(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x1b4) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(int *)(param_1 + 0x1b4) - 4;
  }
  while( true ) {
    if (param_1 == -0x1b4) {
      uVar2 = 0;
    }
    else {
      uVar2 = param_1 + 0x1b0;
    }
    if (uVar4 == uVar2) {
      return uVar2 & 0xffffff00;
    }
    iVar3 = *(int *)(uVar4 + 0xc);
    if ((iVar3 == 0) || (*(char *)(iVar3 + 0x1c) != '\0')) break;
    puVar1 = (undefined4 *)(iVar3 + 0x10);
    iVar3 = 0;
    switch(*puVar1) {
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x85:
    case 0x86:
    case 0x87:
switchD_007aeef7_caseD_4f:
      if (*(int *)(uVar4 + 4) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(int *)(uVar4 + 4) - 4;
      }
      break;
    default:
      goto switchD_007aeef7_caseD_53;
    }
  }
switchD_007aeef7_caseD_53:
  if (*(char *)(uVar4 + 0x14) != '\0') {
    return CONCAT31((int3)((uint)iVar3 >> 8),1);
  }
  goto switchD_007aeef7_caseD_4f;
}

