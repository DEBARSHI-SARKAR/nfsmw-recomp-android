/* speed.exe 00792060 FUN_00792060; analysis pseudocode, not buildable source.
 * calls 0078a3a0 FUN_0078a3a0
 * calls 00735d10 FUN_00735d10
 */

void FUN_00792060(undefined4 param_1)

{
  uint local_4;
  
  local_4 = 0;
  FUN_0078a3a0(&local_4,0x20);
  if (DAT_009b4214 < local_4) {
    DAT_009b4214 = local_4;
    FUN_00735d10(param_1);
  }
  return;
}

