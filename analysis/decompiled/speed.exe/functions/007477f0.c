/* speed.exe 007477f0 FUN_007477f0; analysis pseudocode, not buildable source.
 * calls 0045ecf0 FUN_0045ecf0
 * calls 0045ed20 thunk_FUN_006bd940
 * calls 00444fe0 FUN_00444fe0
 * calls 007477f0 FUN_007477f0
 */

void __fastcall FUN_007477f0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar3 = *(int *)(param_1 + 0xf0);
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 0xf4) != 0) {
      FUN_007477f0();
    }
    FUN_0045ecf0(param_1 + 0x20,iVar3 + 0x20,param_1 + 0x60);
    iVar3 = *(int *)(param_1 + 0xf0);
    if (*(int *)(iVar3 + 0xf4) != 0) {
      FUN_007477f0();
    }
    thunk_FUN_006bd940(&local_20,iVar3 + 0x20,param_1 + 0xb0);
    iVar3 = *(int *)(param_1 + 0xf0);
    if (*(int *)(iVar3 + 0xf4) != 0) {
      FUN_007477f0();
    }
    local_20 = local_20 - *(float *)(iVar3 + 0x50);
    iVar4 = *(int *)(param_1 + 0xf0);
    local_1c = local_1c - *(float *)(iVar3 + 0x54);
    local_18 = local_18 - *(float *)(iVar3 + 0x58);
    if (*(int *)(iVar4 + 0xf4) != 0) {
      FUN_007477f0();
    }
    fVar1 = *(float *)(iVar4 + 0xa0);
    fVar2 = *(float *)(iVar4 + 0xa4);
    *(float *)(param_1 + 0xa8) = local_18 + *(float *)(iVar4 + 0xa8);
    *(float *)(param_1 + 0xa0) = local_20 + fVar1;
    *(float *)(param_1 + 0xa4) = local_1c + fVar2;
    *(undefined4 *)(param_1 + 0xf4) = 0;
    return;
  }
  FUN_00444fe0(param_1 + 0x20,param_1 + 0x60);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xf4) = 0;
  return;
}

