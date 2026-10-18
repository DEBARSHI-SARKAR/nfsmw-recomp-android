/* speed.exe 0066c940 FUN_0066c940; analysis pseudocode, not buildable source.
 * calls 00401ae0 FUN_00401ae0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0066c940(undefined4 *param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00401ae0(param_1[2],DAT_0092c580,DAT_009261a4);
  param_1[4] = (float)fVar1;
  fVar1 = (float10)FUN_00401ae0(*param_1,DAT_0092c578,DAT_0092619c);
  param_1[5] = (float)((float10)_DAT_0089096c - fVar1);
  fVar1 = (float10)FUN_00401ae0(param_1[1],DAT_0092c57c,DAT_009261a0);
  param_1[3] = (float)fVar1;
  return;
}

