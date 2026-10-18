/* speed.exe 005b5f10 FUN_005b5f10; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00652b10 thunk_FUN_007c7250
 */

void __thiscall FUN_005b5f10(int param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = (*(int *)(param_1 + 0x8c) * *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x88)) * 0x30;
  iVar2 = *(int *)(iVar6 + 0x20 + *(int *)(param_1 + 0x90));
  iVar6 = iVar6 + *(int *)(param_1 + 0x90);
  if (iVar2 != 0) {
    thunk_FUN_007c7250(iVar2);
    *(undefined4 *)(iVar6 + 0x20) = 0;
  }
  if (param_2 != (short *)0x0) {
    iVar2 = 0;
    sVar1 = *param_2;
    while (sVar1 != 0) {
      iVar2 = iVar2 + 1;
      sVar1 = param_2[iVar2];
    }
    uVar5 = iVar2 * 2 + 2;
    puVar3 = _malloc(uVar5);
    *(undefined4 **)(iVar6 + 0x20) = puVar3;
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar3 = *(undefined4 *)param_2;
      param_2 = param_2 + 2;
      puVar3 = puVar3 + 1;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(char *)puVar3 = (char)*param_2;
      param_2 = (short *)((int)param_2 + 1);
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  return;
}

