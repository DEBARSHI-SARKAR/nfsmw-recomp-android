/* speed.exe 006e9490 FUN_006e9490; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006e9490(void)

{
  float10 fVar1;
  int local_4;
  
  if (DAT_00988e08 == '\0') {
    local_4 = 0;
    do {
      fVar1 = (float10)local_4;
      local_4 = local_4 + 1;
      fVar1 = (float10)fsin(fVar1 * (float10)_DAT_008b00c0 * (float10)_DAT_008b019c);
      *(float *)(&DAT_009885e4 + local_4 * 4) = (float)fVar1;
    } while (local_4 < 0x200);
    DAT_00988e08 = '\x01';
  }
  return;
}

