/* speed.exe 00738f50 FUN_00738f50; analysis pseudocode, not buildable source.
 * calls 00768200 FUN_00768200
 * calls 00789c90 FUN_00789c90
 * calls 006e9660 FUN_006e9660
 * calls 0045a430 FUN_0045a430
 * calls 00738d50 FUN_00738d50
 */

void __thiscall FUN_00738f50(int param_1,undefined4 param_2,char param_3,char param_4)

{
  undefined4 uVar1;
  float10 fVar2;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00880988;
  local_c = ExceptionList;
  local_30 = *(undefined4 *)(param_1 + 0x60);
  local_38 = -*(float *)(param_1 + 100);
  local_34 = *(undefined4 *)(param_1 + 0x68);
  ExceptionList = &local_c;
  FUN_00789c90(param_2,&local_38,1);
  if (((*(int *)(param_1 + 0x8c) != *(int *)(param_1 + 0x58)) ||
      (*(char *)(param_1 + 0x84) != param_3)) || (*(char *)(param_1 + 0x85) != param_4)) {
    *(char *)(param_1 + 0x85) = param_4;
    *(char *)(param_1 + 0x84) = param_3;
    uVar1 = FUN_006e9660(*(int *)(param_1 + 0x58));
    local_4 = 0;
    FUN_00738d50(uVar1);
    local_4 = 0xffffffff;
    FUN_0045a430();
  }
  local_2c = local_38;
  local_28 = local_34;
  local_24 = local_30;
  fVar2 = (float10)FUN_00768200(&local_2c);
  *(float *)(param_1 + 0x74) = -local_2c;
  *(float *)(param_1 + 0x78) = (float)fVar2;
  *(undefined4 *)(param_1 + 0x70) = local_24;
  ExceptionList = local_c;
  return;
}

