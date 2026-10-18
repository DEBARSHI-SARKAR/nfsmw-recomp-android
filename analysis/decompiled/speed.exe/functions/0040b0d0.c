/* speed.exe 0040b0d0 FUN_0040b0d0; analysis pseudocode, not buildable source.
 */

void FUN_0040b0d0(float *param_1)

{
  float fVar1;
  float fVar2;
  
  if (DAT_00919658 == '\0') {
    *param_1 = DAT_008a2fb4;
    param_1[1] = DAT_008a2fb8;
    param_1[2] = DAT_008a2fbc;
    return;
  }
  fVar1 = *(float *)(DAT_00919690 + 0x40);
  fVar2 = *(float *)(DAT_00919690 + 0x48);
  *param_1 = -*(float *)(DAT_00919690 + 0x44);
  param_1[1] = fVar2;
  param_1[2] = fVar1;
  return;
}

