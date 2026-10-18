/* speed.exe 00757710 FUN_00757710; analysis pseudocode, not buildable source.
 * calls 00466330 FUN_00466330
 * calls 00753650 FUN_00753650
 * calls 00463ca0 FUN_00463ca0
 */

void FUN_00757710(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_009b0f90;
  if ((undefined4 **)DAT_009b0f90 != &DAT_009b0f90) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        FUN_00753650();
        FUN_00463ca0(DAT_009b0a2c,puVar1);
        puVar1 = DAT_009b0f90;
      }
    } while ((undefined4 **)puVar1 != &DAT_009b0f90);
  }
  FUN_00466330(DAT_009b0a2c);
  DAT_009b0a2c = 0;
  return;
}

