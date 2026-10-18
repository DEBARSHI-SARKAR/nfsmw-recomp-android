/* speed.exe 0078a670 FUN_0078a670; analysis pseudocode, not buildable source.
 * calls 00460c70 FUN_00460c70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0078a670(int param_1,undefined4 param_2,float param_3,float param_4,undefined4 param_5)

{
  float fVar1;
  int iVar2;
  
  FUN_00460c70(param_1,param_2);
  *(float *)(param_1 + 0x130) = param_3;
  *(float *)(param_1 + 0x134) = param_4;
  *(undefined4 *)(param_1 + 300) = param_5;
  iVar2 = (1 << ((byte)param_5 & 0x1f)) + -1;
  fVar1 = (float)iVar2;
  if (iVar2 < 0) {
    fVar1 = fVar1 + _DAT_00891214;
  }
  fVar1 = (param_4 - param_3) / fVar1;
  *(undefined4 *)(param_1 + 0x140) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x144) = 0xff7fffff;
  *(undefined1 *)(param_1 + 0x148) = 1;
  *(float *)(param_1 + 0x13c) = fVar1;
  *(float *)(param_1 + 0x138) = fVar1 * _DAT_008933d4;
  return;
}

