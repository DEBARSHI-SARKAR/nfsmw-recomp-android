/* speed.exe 005ae600 FUN_005ae600; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00652b10 thunk_FUN_007c7250
 */

void __thiscall FUN_005ae600(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_8;
  
  puVar1 = _malloc((*param_1 + 1) * 0xc);
  iVar4 = 0;
  iVar3 = 0;
  if (0 < *param_1) {
    local_8 = 0;
    puVar2 = puVar1;
    do {
      if (iVar3 == param_2) {
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 3;
      }
      puVar5 = (undefined4 *)(param_1[1] + local_8);
      *puVar2 = *puVar5;
      puVar2[1] = puVar5[1];
      puVar2[2] = puVar5[2];
      local_8 = local_8 + 0xc;
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 3;
    } while (iVar4 < *param_1);
  }
  *param_1 = *param_1 + 1;
  thunk_FUN_007c7250(param_1[1]);
  param_1[1] = (int)puVar1;
  return;
}

