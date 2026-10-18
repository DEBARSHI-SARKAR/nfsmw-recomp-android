/* speed.exe 00512e40 FUN_00512e40; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00512e40(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 < 0) {
    if (4 < iVar1) goto LAB_00512e57;
    if (9 < iVar1) goto LAB_00512e67;
    if (0xe < iVar1) goto LAB_00512e77;
    if (iVar1 < 0x14) {
      if (iVar1 < 0x19) {
        return 6;
      }
      goto LAB_00512e97;
    }
  }
  else {
    if (iVar1 < 5) {
      return 0;
    }
LAB_00512e57:
    if (iVar1 < 10) {
      return 1;
    }
LAB_00512e67:
    if (iVar1 < 0xf) {
      return 2;
    }
LAB_00512e77:
    if (iVar1 < 0x14) {
      return 3;
    }
  }
  if (iVar1 < 0x19) {
    return 4;
  }
LAB_00512e97:
  if (0x31 < iVar1) {
    return 6;
  }
  return 5;
}

