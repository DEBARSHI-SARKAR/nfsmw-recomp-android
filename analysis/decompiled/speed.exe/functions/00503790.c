/* speed.exe 00503790 FUN_00503790; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 * calls 00768ca0 FUN_00768ca0
 * calls 00503400 FUN_00503400
 * calls 004fd370 FUN_004fd370
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00503790(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00460bf0("MIDDAY");
  iVar2 = FUN_00768ca0();
  if (iVar2 == 1) {
    uVar1 = FUN_00460bf0("SUNSET");
  }
  FUN_004fd370(uVar1);
  _DAT_00915a18 = FUN_00503400(0x47beb4b6,1,0);
  _DAT_00915a1c = FUN_00503400(0xd4d26c59,1,0);
  _DAT_00915a20 = FUN_00503400(0x1744b82d,1,0);
  _DAT_00915a24 = FUN_00503400(0xad3c5239,1,0);
  _DAT_00915a28 = FUN_00503400(0xd4d80a65,1,0);
  return;
}

