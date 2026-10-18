/* speed.exe 00515690 FUN_00515690; analysis pseudocode, not buildable source.
 * calls 00503400 FUN_00503400
 */

void FUN_00515690(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = FUN_00503400(*(undefined4 *)(param_1 + 0x24),1,0);
    *param_2 = (float)(int)*(short *)(iVar1 + 0x44) * *(float *)(*(int *)(param_1 + 0x2c) + 0x4c);
    *param_3 = (float)(int)*(short *)(iVar1 + 0x46) * *(float *)(*(int *)(param_1 + 0x2c) + 0x50);
  }
  return;
}

