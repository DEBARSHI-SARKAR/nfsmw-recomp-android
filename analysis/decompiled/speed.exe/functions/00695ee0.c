/* speed.exe 00695ee0 FUN_00695ee0; analysis pseudocode, not buildable source.
 */

void FUN_00695ee0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float in_stack_0000002c;
  
  while (param_3 < param_2) {
    iVar3 = (param_2 + -1) / 2;
    iVar1 = iVar3 * 0x30;
    if (*(float *)(iVar1 + 0x1c + param_1) <= in_stack_0000002c) break;
    puVar4 = (undefined4 *)(iVar1 + param_1);
    puVar5 = (undefined4 *)(param_2 * 0x30 + param_1);
    for (iVar2 = 0xc; param_2 = iVar3, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  puVar4 = (undefined4 *)&stack0x00000010;
  puVar5 = (undefined4 *)(param_2 * 0x30 + param_1);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return;
}

