/* speed.exe 005cf0d0 FUN_005cf0d0; analysis pseudocode, not buildable source.
 * calls 005c79a0 FUN_005c79a0
 */

int * __thiscall FUN_005cf0d0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *local_8;
  uint local_4;
  
  uVar1 = *(uint *)(param_1 + 4);
  iVar6 = *(int *)(param_1 + 0xc);
  local_4 = uVar1 >> 1 & 1;
  iVar3 = iVar6;
  if (local_4 != 0) {
    iVar3 = iVar6 * 0x10 + param_1;
  }
  uVar5 = uVar1 >> 5;
  local_8 = (int *)(uVar5 * 0x10 + iVar3);
  if (local_8 != (int *)0x0) {
    if ((uVar1 & 8) == 0) {
      if (local_4 != 0) {
        iVar6 = iVar6 * 0x10 + param_1;
      }
      piVar4 = (int *)((*(int *)(param_1 + 8) + uVar5) * 0x10 + iVar6);
      if (local_8 < piVar4) {
        while (*local_8 != param_2) {
          local_8 = local_8 + 4;
          if (piVar4 <= local_8) {
            return local_8;
          }
        }
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 8);
      iVar2 = FUN_005c79a0(&local_8,param_2);
      if (iVar2 != param_2) {
        if (local_4 != 0) {
          iVar6 = iVar6 * 0x10 + param_1;
        }
        return (int *)((iVar3 + uVar5) * 0x10 + iVar6);
      }
    }
  }
  return local_8;
}

