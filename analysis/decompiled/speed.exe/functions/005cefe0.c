/* speed.exe 005cefe0 FUN_005cefe0; analysis pseudocode, not buildable source.
 * calls 005c79a0 FUN_005c79a0
 */

int __thiscall FUN_005cefe0(int param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int local_c;
  uint local_8;
  uint local_4;
  
  iVar4 = *(int *)(param_1 + 0xc);
  local_8 = *(uint *)(param_1 + 4) >> 1 & 1;
  local_c = iVar4;
  if (local_8 != 0) {
    local_c = iVar4 * 0x10 + param_1;
  }
  uVar3 = *(uint *)(param_1 + 4) >> 5;
  local_c = uVar3 * 0x10 + local_c;
  if (local_c != 0) {
    iVar1 = *(int *)(param_1 + 8);
    local_4 = uVar3;
    if (param_3 == 0xffffffff) {
      uVar2 = FUN_005c79a0(&local_c,param_2);
      if (uVar2 != param_2) {
        if (local_8 != 0) {
          iVar4 = iVar4 * 0x10 + param_1;
        }
        return (iVar1 + uVar3) * 0x10 + iVar4;
      }
    }
    else {
      uVar3 = FUN_005c79a0(&local_c,param_2 & 0xffff0000 | param_3);
      if (((uVar3 & 0xffff2020 | 0x2020) != param_2) || (param_4 < (uVar3 & 0xffff))) {
        if (local_8 != 0) {
          iVar4 = iVar4 * 0x10 + param_1;
        }
        return (iVar1 + local_4) * 0x10 + iVar4;
      }
    }
  }
  return local_c;
}

