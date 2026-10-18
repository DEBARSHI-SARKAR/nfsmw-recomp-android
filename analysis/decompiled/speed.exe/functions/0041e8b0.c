/* speed.exe 0041e8b0 FUN_0041e8b0; analysis pseudocode, not buildable source.
 */

void FUN_0041e8b0(int param_1,int param_2,int param_3,float param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  while (param_3 < param_2) {
    iVar3 = (param_2 + -1) / 2;
    iVar1 = iVar3 * 0x20;
    if (param_4 <= *(float *)(iVar1 + param_1)) break;
    puVar4 = (undefined4 *)(iVar1 + param_1);
    puVar5 = (undefined4 *)(param_2 * 0x20 + param_1);
    for (iVar2 = 8; param_2 = iVar3, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  puVar4 = &param_4;
  puVar5 = (undefined4 *)(param_2 * 0x20 + param_1);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return;
}

