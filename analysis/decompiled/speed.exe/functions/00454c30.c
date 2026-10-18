/* speed.exe 00454c30 FUN_00454c30; analysis pseudocode, not buildable source.
 * calls 00453890 FUN_00453890
 */

int __thiscall FUN_00454c30(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if (iVar1 != 0) {
    if ((*(byte *)(iVar1 + 0xb) & 2) != 0) {
      if ((*(byte *)(iVar1 + 0xb) & 0x10) != 0) {
        iVar1 = FUN_00453890();
        return iVar1;
      }
      iVar1 = FUN_00453890();
      return iVar1;
    }
    if (param_2 == 0) {
      if ((*(byte *)(iVar1 + 0xb) & 0x20) != 0) {
        return iVar1 + 4;
      }
      if ((*(byte *)(iVar1 + 0xb) & 0x10) != 0) {
        return *(int *)(*param_1 + 8) + *(int *)(iVar1 + 4);
      }
      return *(int *)(iVar1 + 4);
    }
  }
  return 0;
}

