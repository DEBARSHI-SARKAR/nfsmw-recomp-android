/* speed.exe 004b8c40 FUN_004b8c40; analysis pseudocode, not buildable source.
 */

uint FUN_004b8c40(void)

{
  uint uVar1;
  
  uVar1 = DAT_0091236c;
  if ((((DAT_0091236c == 0) && (uVar1 = DAT_00912378, DAT_00912378 == 0)) &&
      (uVar1 = 0, DAT_0091237d == '\0')) && (uVar1 = DAT_00912310 - 1, (int)uVar1 <= DAT_0091230c))
  {
    return uVar1 & 0xffffff00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}

