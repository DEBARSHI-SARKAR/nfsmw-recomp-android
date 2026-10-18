/* speed.exe 00510300 FUN_00510300; analysis pseudocode, not buildable source.
 * calls 006c1f10 FUN_006c1f10
 * calls 006c1b60 FUN_006c1b60
 */

void __fastcall FUN_00510300(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = *(undefined4 **)(param_1 + 0x144);
  puVar3 = &DAT_009017b0;
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if (*(char *)(param_1 + 0x154) == '\0') {
    if (*(int *)(param_1 + 0x150) != *(int *)(param_1 + 0x148)) {
      DAT_00982c00 = *(int *)(param_1 + 0x148);
      FUN_006c1b60();
    }
    DAT_0090181c = *(undefined4 *)(*(int *)(param_1 + 0x144) + 0x6c);
  }
  FUN_006c1f10();
  DAT_00982c39 = 1;
  return;
}

