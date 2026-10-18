/* speed.exe 005cec70 FUN_005cec70; analysis pseudocode, not buildable source.
 * calls 005c79a0 FUN_005c79a0
 */

int __thiscall FUN_005cec70(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int local_8;
  uint local_4;
  
  uVar1 = *(uint *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 0xc);
  uVar4 = uVar1 >> 1 & 1;
  local_8 = iVar3;
  if (uVar4 != 0) {
    local_8 = iVar3 * 0x10 + param_1;
  }
  if (local_8 != 0) {
    local_4 = uVar4;
    if (param_3 == 0xffffffff) {
      uVar2 = FUN_005c79a0(&local_8,param_2);
      if (uVar2 != param_2) {
LAB_005ced09:
        if (uVar4 != 0) {
          iVar3 = iVar3 * 0x10 + param_1;
        }
        return (uVar1 >> 5) * 0x10 + iVar3;
      }
    }
    else {
      uVar2 = FUN_005c79a0(&local_8,param_2 & 0xffff0000 | param_3);
      uVar4 = local_4;
      if (((uVar2 & 0xffff2020 | 0x2020) != param_2) || (param_4 < (uVar2 & 0xffff)))
      goto LAB_005ced09;
    }
  }
  return local_8;
}

