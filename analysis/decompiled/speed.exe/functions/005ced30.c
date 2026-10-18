/* speed.exe 005ced30 FUN_005ced30; analysis pseudocode, not buildable source.
 * calls 005c79a0 FUN_005c79a0
 */

int * __thiscall FUN_005ced30(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *local_4;
  
  uVar1 = *(uint *)(param_1 + 4);
  piVar4 = *(int **)(param_1 + 0xc);
  uVar3 = uVar1 >> 1 & 1;
  local_4 = piVar4;
  if (uVar3 != 0) {
    local_4 = (int *)((int)piVar4 * 0x10 + param_1);
  }
  if (local_4 != (int *)0x0) {
    if ((uVar1 & 0x10) == 0) {
      if (uVar3 != 0) {
        piVar4 = (int *)((int)piVar4 * 0x10 + param_1);
      }
      if (local_4 < piVar4 + (uVar1 >> 5) * 4) {
        while (*local_4 != param_2) {
          local_4 = local_4 + 4;
          if (piVar4 + (uVar1 >> 5) * 4 <= local_4) {
            return local_4;
          }
        }
      }
    }
    else {
      iVar2 = FUN_005c79a0(&local_4,param_2);
      if (iVar2 != param_2) {
        if (uVar3 != 0) {
          piVar4 = (int *)((int)piVar4 * 0x10 + param_1);
        }
        return piVar4 + (uVar1 >> 5) * 4;
      }
    }
  }
  return local_4;
}

