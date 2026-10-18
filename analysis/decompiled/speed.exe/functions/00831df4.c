/* speed.exe 00831df4 FUN_00831df4; analysis pseudocode, not buildable source.
 */

void FUN_00831df4(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_009c2a64;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
  } while ((int)puVar1 < 0x9c2aa4);
  return;
}

