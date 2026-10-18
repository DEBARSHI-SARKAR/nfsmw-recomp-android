/* speed.exe 007a13c0 FUN_007a13c0; analysis pseudocode, not buildable source.
 * calls 007a11d0 FUN_007a11d0
 */

void FUN_007a13c0(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_009b4250;
  do {
    if (((puVar1[1] != -1) && (puVar1 != (undefined4 *)0x0)) && (puVar1[4] != 6)) {
      FUN_007a11d0(puVar1[1],1);
    }
    puVar1 = puVar1 + 7;
  } while ((int)puVar1 < 0x9b42a4);
  return;
}

