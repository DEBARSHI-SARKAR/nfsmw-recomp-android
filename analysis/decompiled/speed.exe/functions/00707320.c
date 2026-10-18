/* speed.exe 00707320 FUN_00707320; analysis pseudocode, not buildable source.
 */

void FUN_00707320(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint in_stack_00000034;
  
  while (param_3 < param_2) {
    iVar1 = (param_2 + -1) / 2;
    puVar3 = (undefined4 *)(iVar1 * 0x2c + param_1);
    if (in_stack_00000034 <= (uint)puVar3[9]) break;
    puVar4 = (undefined4 *)(param_2 * 0x2c + param_1);
    for (iVar2 = 0xb; param_2 = iVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  puVar3 = (undefined4 *)&stack0x00000010;
  puVar4 = (undefined4 *)(param_2 * 0x2c + param_1);
  for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}

