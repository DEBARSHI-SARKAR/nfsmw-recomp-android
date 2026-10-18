/* speed.exe 0088ea70 FUN_0088ea70; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0088ea70(void)

{
  if (DAT_009877b4 != 0) {
    FUN_005d0370(DAT_009877b4,(DAT_009877bc - DAT_009877b4 >> 3) << 3,&PTR_LAB_004c5452_1_00890f10);
  }
  DAT_009877b4 = 0;
  _DAT_009877b8 = 0;
  DAT_009877bc = 0;
  return;
}

