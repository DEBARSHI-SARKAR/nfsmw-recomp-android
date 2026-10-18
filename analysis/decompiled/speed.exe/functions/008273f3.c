/* speed.exe 008273f3 FUN_008273f3; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008273f3(void)

{
  float fVar1;
  uint uVar2;
  uint local_8;
  
  local_8 = 0xffffff80;
  do {
    fVar1 = (float)(int)local_8;
    uVar2 = local_8 & 0xff;
    local_8 = local_8 + 1;
    *(float *)(&DAT_009c2550 + uVar2 * 4) = fVar1 * _DAT_00899d24;
  } while ((int)local_8 < 0x80);
  return;
}

