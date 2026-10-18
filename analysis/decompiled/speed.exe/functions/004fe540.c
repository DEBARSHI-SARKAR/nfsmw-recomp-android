/* speed.exe 004fe540 FUN_004fe540; analysis pseudocode, not buildable source.
 */

/* WARNING: Removing unreachable block (ram,0x004fe5a4) */
/* WARNING: Removing unreachable block (ram,0x004fe57e) */
/* WARNING: Removing unreachable block (ram,0x004fe5c4) */
/* WARNING: Removing unreachable block (ram,0x004fe555) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004fe540(uint param_1,float *param_2)

{
  *param_2 = (float)(param_1 >> 0x18) * _DAT_00899dd0;
  param_2[1] = (float)(param_1 >> 0x10 & 0xff) * _DAT_00899dd0;
  param_2[2] = (float)(param_1 >> 8 & 0xff) * _DAT_00899dd0;
  param_2[3] = (float)(param_1 & 0xff) * _DAT_00899dd0;
  return;
}

