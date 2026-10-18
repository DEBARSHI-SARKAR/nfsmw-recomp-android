/* speed.exe 006c6e90 FUN_006c6e90; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c6e90(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  _DAT_00987b2c = DAT_00987b00;
  puVar2 = &DAT_00987af8;
  for (iVar1 = 0x17; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return;
}

