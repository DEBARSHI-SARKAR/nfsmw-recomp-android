/* speed.exe 0062cf00 FUN_0062cf00; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 */

undefined4 * FUN_0062cf00(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00454810(0x98b567dc,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = &DAT_009205e0;
  }
  return puVar1;
}

