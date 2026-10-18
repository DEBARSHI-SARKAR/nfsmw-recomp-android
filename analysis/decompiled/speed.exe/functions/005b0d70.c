/* speed.exe 005b0d70 FUN_005b0d70; analysis pseudocode, not buildable source.
 * calls 00460a10 FUN_00460a10
 * calls 00466140 FUN_00466140
 * calls 00465a70 FUN_00465a70
 * calls 00465240 FUN_00465240
 */

void FUN_005b0d70(void)

{
  if (DAT_008f578c != 0) {
    DAT_008f578c = FUN_00460a10();
    if (DAT_0091dcfc == 0) {
      DAT_0091dcfc = FUN_00465a70(DAT_008f5790,0);
    }
    FUN_00465240(DAT_008f578c,DAT_0091dcfc,DAT_008f5790,"FEngMemoryPool");
    FUN_00466140(DAT_008f578c,DAT_0091dd00 != 0);
  }
  return;
}

