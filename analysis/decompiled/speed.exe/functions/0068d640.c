/* speed.exe 0068d640 FUN_0068d640; analysis pseudocode, not buildable source.
 * calls 006533b0 FUN_006533b0
 * calls 00401ae0 FUN_00401ae0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0068d640(int param_1)

{
  float10 fVar1;
  
  if (*(short *)(param_1 + 200) == 1) {
    fVar1 = (float10)_DAT_008aac8c;
  }
  else {
    fVar1 = (float10)FUN_00401ae0(*(undefined4 *)(param_1 + 0xbc),0,0x4217fd7e);
    fVar1 = (float10)FUN_006533b0((float)fVar1);
    fVar1 = fVar1 * (float10)_DAT_008aac8c;
  }
  if (*(short *)(param_1 + 0xcc) == 0) {
    fVar1 = (float10)_DAT_008aac9c;
  }
  return fVar1;
}

