/* speed.exe 004260d0 FUN_004260d0; analysis pseudocode, not buildable source.
 * calls 0041e8b0 FUN_0041e8b0
 */

void FUN_004260d0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 auStack_30 [8];
  
  iVar3 = param_2;
  while( true ) {
    iVar1 = iVar3 * 2;
    iVar2 = iVar1 + 2;
    if (param_3 <= iVar2) break;
    if (*(float *)(iVar2 * 0x20 + param_1) < *(float *)((iVar1 + 0x8000001) * 0x20 + param_1)) {
      iVar2 = iVar1 + 1;
    }
    puVar4 = (undefined4 *)(iVar2 * 0x20 + param_1);
    puVar5 = (undefined4 *)(iVar3 * 0x20 + param_1);
    for (iVar1 = 8; iVar3 = iVar2, iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  if (iVar2 == param_3) {
    puVar4 = (undefined4 *)((param_3 + 0x7ffffff) * 0x20 + param_1);
    puVar5 = (undefined4 *)(iVar3 * 0x20 + param_1);
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    iVar3 = param_3 + -1;
  }
  puVar4 = (undefined4 *)&stack0x00000010;
  puVar5 = auStack_30;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_0041e8b0(param_1,iVar3,param_2);
  return;
}

