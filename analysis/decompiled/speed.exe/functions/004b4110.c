/* speed.exe 004b4110 FUN_004b4110; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 0045db30 FUN_0045db30
 */

void __fastcall FUN_004b4110(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  short sVar3;
  float10 fVar4;
  int local_18;
  int local_10;
  int local_8;
  
  iVar1 = *(int *)(param_1 + 0x28);
  local_18 = 0;
  local_8 = 0;
  local_10 = 0;
  if ((iVar1 == 0) || ((*(int *)(iVar1 + 0x38) != 3 && (*(int *)(iVar1 + 0x38) == 0)))) {
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(undefined2 *)(param_1 + 0x14c) = 0x4097;
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined2 *)(param_1 + 0x148) = 0x4097;
    *(undefined4 *)(param_1 + 0x144) = 0;
    *(undefined2 *)(param_1 + 0x14a) = 0x4097;
  }
  else {
    local_18 = *(int *)(iVar1 + 0x40);
    local_8 = *(int *)(iVar1 + 0x48);
    local_10 = *(int *)(iVar1 + 0x50);
  }
  if (local_10 != 0) {
    sVar3 = FUN_007c4b80();
    uVar2 = (ulonglong)(ushort)(*(short *)(param_1 + 0x148) - sVar3) % 0xffff;
    *(short *)(param_1 + 0x148) = (short)uVar2;
    fVar4 = (float10)FUN_0045db30((int)uVar2);
    *(float *)(param_1 + 0x140) = (float)(fVar4 * (float10)local_10);
  }
  if (local_8 != 0) {
    sVar3 = FUN_007c4b80();
    uVar2 = (ulonglong)(ushort)(*(short *)(param_1 + 0x14a) - sVar3) % 0xffff;
    *(short *)(param_1 + 0x14a) = (short)uVar2;
    fVar4 = (float10)FUN_0045db30((int)uVar2);
    *(float *)(param_1 + 0x144) = (float)(fVar4 * (float10)local_8);
  }
  if (local_18 != 0) {
    sVar3 = FUN_007c4b80();
    uVar2 = (ulonglong)(ushort)(*(short *)(param_1 + 0x14c) - sVar3) % 0xffff;
    *(short *)(param_1 + 0x14c) = (short)uVar2;
    fVar4 = (float10)FUN_0045db30((int)uVar2);
    *(float *)(param_1 + 0x13c) = (float)(fVar4 * (float10)local_18);
  }
  return;
}

