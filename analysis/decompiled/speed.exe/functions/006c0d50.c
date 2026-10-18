/* speed.exe 006c0d50 FUN_006c0d50; analysis pseudocode, not buildable source.
 * calls 004fb6e0 FUN_004fb6e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006c0d50(int param_1)

{
  _DAT_009017a4 = DAT_0093e868;
  _DAT_00901798 = DAT_0093e864;
  if (*(int *)(&DAT_00982878 + param_1 * 8) != DAT_0090179c) {
    DAT_0090179c = *(int *)(&DAT_00982878 + param_1 * 8);
  }
  if (*(int *)(&DAT_0098287c + param_1 * 8) != DAT_009017a8) {
    DAT_009017a8 = *(int *)(&DAT_0098287c + param_1 * 8);
  }
  _DAT_009017a0 = 0xffffffff;
  _DAT_009017ac = 0xffffffff;
  FUN_004fb6e0(&DAT_00901798,2,0);
  return;
}

