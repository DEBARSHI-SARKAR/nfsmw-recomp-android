/* speed.exe 005cd2d0 FUN_005cd2d0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005cd2d0(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *param_1;
  uVar2 = param_2[2] & param_1[1];
  iVar3 = uVar2 * 0x10;
  if (*(int *)(iVar3 + 0xc + iVar1) != 0) {
    do {
      if ((*(int *)(iVar3 + iVar1) == *param_2) && (((int *)(iVar3 + iVar1))[1] == param_2[1])) {
        return;
      }
      uVar2 = uVar2 + 1 & param_1[1];
      iVar3 = uVar2 * 0x10;
    } while (*(int *)(iVar3 + 0xc + iVar1) != 0);
  }
  return;
}

