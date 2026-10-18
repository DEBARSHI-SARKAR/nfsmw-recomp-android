/* speed.exe 004fb840 FUN_004fb840; analysis pseudocode, not buildable source.
 * calls 004fbd30 FUN_004fbd30
 */

undefined4 FUN_004fb840(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_400 [256];
  
  if (((param_1 != 0) && (param_2 < 0x100)) && (-1 < param_2)) {
    if (param_2 != 0) {
      iVar4 = 0;
      iVar3 = 0;
      if (0 < param_2) {
        do {
          iVar1 = *(int *)(param_1 + iVar3 * 4);
          if (((iVar1 != 0) && (iVar1 = *(int *)(iVar1 + 0xc), iVar1 != 0)) &&
             (*(int *)(iVar1 + 0x84) != 0)) {
            local_400[iVar4] = iVar1;
            iVar4 = iVar4 + 1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < param_2);
      }
      uVar2 = FUN_004fbd30(local_400,iVar4);
      return uVar2;
    }
    return 1;
  }
  return 0;
}

