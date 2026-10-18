/* speed.exe 00515520 FUN_00515520; analysis pseudocode, not buildable source.
 * calls 00585b50 FUN_00585b50
 * calls 00591fd0 FUN_00591fd0
 * calls 00586210 FUN_00586210
 */

void FUN_00515520(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  switch(*(undefined4 *)(param_1 + 0x18)) {
  case 1:
  case 7:
  case 9:
  case 0xc:
    *param_2 = *(float *)(iVar1 + 0x38);
    *param_3 = *(float *)(iVar1 + 0x3c);
    return;
  case 2:
    break;
  default:
    *param_2 = 0.0;
    *param_3 = 0.0;
    return;
  }
  iVar2 = FUN_00585b50(*(undefined4 *)(param_1 + 0x24));
  if (iVar2 == 0) {
    return;
  }
  fVar3 = (float10)FUN_00586210(*(undefined4 *)(param_1 + 100),0);
  *param_2 = (float)(fVar3 * (float10)*(float *)(iVar1 + 0x38));
  fVar3 = (float10)FUN_00591fd0(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x70),0,0,0
                               );
  *param_3 = (float)(fVar3 * (float10)*(float *)(iVar1 + 0x3c));
  return;
}

