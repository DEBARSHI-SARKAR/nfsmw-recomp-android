/* speed.exe 006fabb0 FUN_006fabb0; analysis pseudocode, not buildable source.
 * calls 006ed200 FUN_006ed200
 * calls 006f8ce0 FUN_006f8ce0
 * calls 00633e70 FUN_00633e70
 * calls 005d0370 FUN_005d0370
 */

void FUN_006fabb0(void)

{
  int iVar1;
  
  if (DAT_009885e0 != (undefined4 *)0x0) {
    (**(code **)*DAT_009885e0)(1);
    DAT_009885e0 = (undefined4 *)0x0;
  }
  FUN_006ed200();
  FUN_00633e70();
  iVar1 = DAT_00988ecc;
  if (DAT_00988ecc != 0) {
    FUN_006f8ce0();
    FUN_005d0370(iVar1,0x20,0);
  }
  DAT_009885d8 = 0;
  return;
}

