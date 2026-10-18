/* speed.exe 0078a5b0 FUN_0078a5b0; analysis pseudocode, not buildable source.
 * calls 00460c70 FUN_00460c70
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0078a5b0(int param_1,undefined4 param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  FUN_00460c70(param_1,param_2);
  *(float *)(param_1 + 0x13c) = param_5 + param_5;
  *(float *)(param_1 + 0x130) = param_3;
  *(float *)(param_1 + 0x134) = param_4;
  *(float *)(param_1 + 0x138) = param_5;
  iVar2 = FUN_007c4b80();
  iVar3 = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  uVar4 = 0;
  if (iVar2 != -1) {
    do {
      iVar3 = iVar3 + 1;
      uVar4 = 1 << ((byte)iVar3 & 0x1f);
    } while (uVar4 < iVar2 + 1U);
    *(int *)(param_1 + 300) = iVar3;
  }
  fVar1 = (float)(int)(uVar4 - 1);
  if ((int)(uVar4 - 1) < 0) {
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

