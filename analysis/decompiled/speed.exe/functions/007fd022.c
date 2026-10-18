/* speed.exe 007fd022 FUN_007fd022; analysis pseudocode, not buildable source.
 */

void FUN_007fd022(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = &DAT_008c38b8;
  puVar3 = (undefined4 *)(param_1 + 0x3c);
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}

