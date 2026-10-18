/* speed.exe 005fb770 FUN_005fb770; analysis pseudocode, not buildable source.
 * calls 005fb710 FUN_005fb710
 */

void __thiscall FUN_005fb770(uint *param_1,int *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint local_4;
  
  puVar4 = (undefined4 *)param_1[0xf];
  for (iVar1 = (*param_1 & 0xfffffff) << 2; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined1 *)puVar4 = 0;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  }
  piVar3 = (int *)param_1[0xf];
  uVar2 = 0;
  local_4 = 0;
  if (param_3 != 0) {
    do {
      if (local_4 == *param_1) {
        return;
      }
      if ((*param_2 != 0) && (iVar1 = FUN_005fb710(*param_2), iVar1 != 0)) {
        *piVar3 = *param_2;
        piVar3[1] = param_2[1];
        piVar3[2] = param_2[2];
        piVar3[3] = param_2[3];
        local_4 = local_4 + 1;
        piVar3 = piVar3 + 4;
      }
      param_2 = param_2 + 4;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  return;
}

