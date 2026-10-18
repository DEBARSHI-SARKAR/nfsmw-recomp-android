/* speed.exe 0072aa70 FUN_0072aa70; analysis pseudocode, not buildable source.
 * calls 007252a0 FUN_007252a0
 * calls 00725410 FUN_00725410
 */

void FUN_0072aa70(void)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_009196b4;
  do {
    if (*(char *)(puVar1 + -0x17) != '\0') {
      FUN_007252a0(0x3d088889);
      if (DAT_009a3ab8 != 0) {
        DAT_009a3ab8 = 0;
        FUN_00725410(&DAT_00993f60);
      }
    }
    puVar1 = puVar1 + 0x1c;
  } while ((int)puVar1 < 0x919725);
  return;
}

