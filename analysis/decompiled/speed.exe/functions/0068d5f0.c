/* speed.exe 0068d5f0 FUN_0068d5f0; analysis pseudocode, not buildable source.
 * calls 006533b0 FUN_006533b0
 * calls 00401ae0 FUN_00401ae0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0068d5f0(int param_1)

{
  float10 fVar1;
  
  if (*(short *)(param_1 + 200) == 1) {
    return (float10)_DAT_008aac70;
  }
  fVar1 = (float10)FUN_00401ae0(*(undefined4 *)(param_1 + 0xbc),0,0x4217fd7e);
  fVar1 = (float10)FUN_006533b0((float)fVar1);
  return fVar1 * (float10)_DAT_008aac94;
}

