/* speed.exe 004fd4f0 FUN_004fd4f0; analysis pseudocode, not buildable source.
 */

void FUN_004fd4f0(int param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  float fVar3;
  
  if (DAT_00916054 != 0) {
    if (param_1 != 0) {
      iVar2 = *(int *)(param_1 + 0x40);
      fVar1 = *(float *)(iVar2 + 0x44);
      fVar3 = *(float *)(iVar2 + 0x48);
      *param_2 = *(float *)(iVar2 + 0x40) + *(float *)(DAT_00916054 + 0x20);
      *param_3 = fVar1 + *(float *)(DAT_00916054 + 0x24);
      *param_4 = fVar3 + *(float *)(DAT_00916054 + 0x28);
      return;
    }
    *param_2 = *(float *)(DAT_00916054 + 0x20);
    *param_3 = *(float *)(DAT_00916054 + 0x24);
    *param_4 = *(float *)(DAT_00916054 + 0x28);
  }
  return;
}

