/* speed.exe 00738300 FUN_00738300; analysis pseudocode, not buildable source.
 * calls 0045dbd0 FUN_0045dbd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00738300(float param_1,int param_2)

{
  DAT_009b3714 = (DAT_009b3714 + 1) % DAT_0090353c;
  FUN_0045dbd0(((float)param_2 * _DAT_00903538 + param_1) * _DAT_00903534 + _DAT_00891654);
  return;
}

