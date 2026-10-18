/* speed.exe 006e2f50 FUN_006e2f50; analysis pseudocode, not buildable source.
 * calls 006e0200 FUN_006e0200
 * calls 006e2ac0 FUN_006e2ac0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006e2f50(void)

{
  int iVar1;
  
  if (DAT_00982cdc == 0) {
    _DAT_00982cd4 = DAT_00982cdc;
    return;
  }
  iVar1 = DAT_009877b4 + DAT_00982cdc * 8;
  FUN_006e2ac0(DAT_009877b4,iVar1,iVar1 - DAT_009877b4 >> 3);
  FUN_006e0200();
  DAT_008fae70 = 0xffffffff;
  return;
}

