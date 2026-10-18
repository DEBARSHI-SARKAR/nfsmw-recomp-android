/* speed.exe 007ece0c FUN_007ece0c; analysis pseudocode, not buildable source.
 * calls 007f0e0f FUN_007f0e0f
 * calls 007f0df9 FUN_007f0df9
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_007ece0c(int *param_1)

{
  if (*param_1 < 0x50) {
    FUN_007f0df9(&DAT_009076d8,0x50);
  }
  FUN_007f0e0f(&DAT_009076d8,param_1,*param_1);
  _DAT_0090772c = param_1[0xb];
  return CONCAT31((int3)((uint)param_1[0xb] >> 8),1);
}

