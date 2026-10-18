/* speed.exe 005c77d0 FUN_005c77d0; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_005c77d0(uint *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  
  if (param_1[3] != 0) {
    if (param_4 != 0) {
      return param_1[3] + param_4;
    }
    return 0;
  }
  uVar2 = (param_2 - *(int *)param_1[2]) + param_3;
  iVar3 = 0;
  if (1 < *param_1) {
    puVar4 = (uint *)param_1[1];
    uVar1 = 1;
    do {
      if (uVar2 < *puVar4) break;
      uVar2 = uVar2 - *puVar4;
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *param_1);
  }
  return ((int *)param_1[2])[iVar3] + uVar2;
}

