/* speed.exe 006bd830 FUN_006bd830; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006bd830(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_009880a0;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  _DAT_00987ab0 = 0x3f800000;
  _DAT_00987ab4 = 0;
  _DAT_00987ab8 = 0;
  _DAT_00987abc = 0;
  _DAT_00987ac0 = 0;
  _DAT_00987ac4 = 0x3f800000;
  _DAT_00987ac8 = 0;
  _DAT_00987acc = 0;
  _DAT_00987ad0 = 0;
  _DAT_00987ad4 = 0;
  _DAT_00987ad8 = 0x3f800000;
  _DAT_00987adc = 0;
  _DAT_00987ae0 = 0;
  _DAT_00987ae4 = 0;
  _DAT_00987ae8 = 0;
  _DAT_00987aec = 0x3f800000;
  return;
}

