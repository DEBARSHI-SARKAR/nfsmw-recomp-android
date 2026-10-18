/* speed.exe 0068d420 FUN_0068d420; analysis pseudocode, not buildable source.
 * calls 00401ae0 FUN_00401ae0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0068d420(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00401ae0(*(undefined4 *)(param_1 + 0xbc),0x41200000,0x428e0000);
  fVar1 = fVar1 + (float10)_DAT_008933d4;
  if (*(short *)(param_1 + 0xcc) == 0) {
    fVar1 = (float10)_DAT_008aac80;
  }
  return fVar1;
}

