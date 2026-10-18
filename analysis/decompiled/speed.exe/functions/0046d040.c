/* speed.exe 0046d040 FUN_0046d040; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0046d040(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_008ee430;
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  DAT_009110a0 = 0;
  return;
}

