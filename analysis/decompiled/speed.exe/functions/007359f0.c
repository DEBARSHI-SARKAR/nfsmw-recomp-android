/* speed.exe 007359f0 FUN_007359f0; analysis pseudocode, not buildable source.
 * calls 0045ce70 FUN_0045ce70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_007359f0(int param_1,undefined4 param_2)

{
  float10 fVar1;
  
  if (*(char *)(param_1 + 0x2c) != '\0') {
    fVar1 = (float10)FUN_0045ce70(*(undefined4 *)(param_1 + 0x30),param_2);
    return (float10)*(float *)(param_1 + 0x34) - fVar1 * (float10)_DAT_00890d60;
  }
  return (float10)_DAT_00890d3c;
}

