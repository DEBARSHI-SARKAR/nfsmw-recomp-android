/* speed.exe 00454190 FUN_00454190; analysis pseudocode, not buildable source.
 * calls 00454030 FUN_00454030
 * calls 00453890 FUN_00453890
 */

int FUN_00454190(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_00454030(param_1,&param_1);
  if (iVar2 == 0) {
    return 0;
  }
  bVar1 = *(byte *)(iVar2 + 0xb);
  if ((bVar1 & 2) != 0) {
    if ((bVar1 & 0x10) != 0) {
      iVar2 = FUN_00453890(param_2);
      return iVar2;
    }
    iVar2 = FUN_00453890(param_2);
    return iVar2;
  }
  if ((bVar1 & 0x20) != 0) {
    return iVar2 + 4;
  }
  if ((bVar1 & 0x10) != 0) {
    return *(int *)(param_1 + 0x18) + *(int *)(iVar2 + 4);
  }
  return *(int *)(iVar2 + 4);
}

