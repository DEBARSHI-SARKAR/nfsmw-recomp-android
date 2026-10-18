/* speed.exe 005dcea0 FUN_005dcea0; analysis pseudocode, not buildable source.
 * calls 00454810 FUN_00454810
 * calls 006269b0 FUN_006269b0
 */

undefined4 FUN_005dcea0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00454810(0x6ce23062,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_006269b0(4);
  }
  return *puVar1;
}

