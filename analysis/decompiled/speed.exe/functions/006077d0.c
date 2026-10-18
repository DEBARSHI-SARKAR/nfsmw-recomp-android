/* speed.exe 006077d0 FUN_006077d0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_006077d0(float param_1)

{
  int unaff_ESI;
  
  return *(int *)(unaff_ESI + 0x10) +
         ((uint)(param_1 + _DAT_0089096c) % ((1 << (*(byte *)(unaff_ESI + 7) & 0x1f)) - 1U | 1)) *
         0x14;
}

