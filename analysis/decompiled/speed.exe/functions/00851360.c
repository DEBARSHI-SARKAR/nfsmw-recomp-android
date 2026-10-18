/* speed.exe 00851360 FUN_00851360; analysis pseudocode, not buildable source.
 */

uint FUN_00851360(int param_1,uint *param_2,uint param_3,uint *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  if (*(int *)(param_1 + 0xa8) == *(int *)(param_1 + 0xa4)) {
    return 0xfffffff9;
  }
  puVar1 = (uint *)(*(int *)(param_1 + 0xac) + *(int *)(param_1 + 0xa8));
  uVar3 = *puVar1;
  if ((int)param_3 <= (int)*puVar1) {
    uVar3 = param_3;
  }
  puVar4 = puVar1 + 4;
  for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *param_2 = *puVar4;
    puVar4 = puVar4 + 1;
    param_2 = param_2 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)param_2 = (char)*puVar4;
    puVar4 = (uint *)((int)puVar4 + 1);
    param_2 = (uint *)((int)param_2 + 1);
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = puVar1[1];
  }
  return *puVar1;
}

