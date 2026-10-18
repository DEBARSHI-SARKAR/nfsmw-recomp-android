/* speed.exe 006dbfe0 FUN_006dbfe0; analysis pseudocode, not buildable source.
 * calls 006d2cd0 FUN_006d2cd0
 */

void FUN_006dbfe0(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < DAT_008f9474) {
    do {
      FUN_006d2cd0(DAT_00982994,DAT_00982964,4,&DAT_008f9530,0);
      FUN_006d2cd0(DAT_00982990,DAT_00982968,4,&DAT_008f9500,0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < DAT_008f9474);
  }
  return;
}

