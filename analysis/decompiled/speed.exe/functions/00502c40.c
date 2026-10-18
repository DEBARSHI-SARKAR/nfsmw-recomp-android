/* speed.exe 00502c40 FUN_00502c40; analysis pseudocode, not buildable source.
 */

void FUN_00502c40(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x14 + param_1);
  puVar3 = (undefined4 *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x20) = 1;
  }
  *(int *)(param_1 + 0x24) = iVar1 + *(int *)(param_1 + 0xc) + 0x18 + param_1;
  *DAT_0091c17c = puVar3;
  puVar2 = puVar3;
  *(undefined4 **)(param_1 + 0x14) = DAT_0091c17c;
  DAT_0091c17c = puVar2;
  *puVar3 = &DAT_0091c178;
  return;
}

