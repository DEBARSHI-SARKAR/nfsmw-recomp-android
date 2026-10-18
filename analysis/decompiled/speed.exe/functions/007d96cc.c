/* speed.exe 007d96cc FUN_007d96cc; analysis pseudocode, not buildable source.
 * calls 007d94c6 FUN_007d94c6
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_007d96cc(void)

{
  float10 in_ST0;
  float10 fVar1;
  float10 in_ST1;
  
  if (((uint)((unkuint10)in_ST1 >> 0x30) & 0x7fff0000) != 0) {
    fVar1 = (float10)FUN_007d94c6();
    return fVar1;
  }
  if (SUB104(in_ST1,0) != 0 || (int)((unkuint10)in_ST1 >> 0x20) != 0) {
    fVar1 = (float10)FUN_007d94c6(in_ST1 * (float10)_DAT_00906d94);
    return fVar1;
  }
  return in_ST0 - (float10)(unkint10)(in_ST0 / in_ST1) * in_ST1;
}

