/* speed.exe 006a6e30 FUN_006a6e30; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 00699ea0 FUN_00699ea0
 * calls 006edb10 FUN_006edb10
 * calls 004522f0 FUN_004522f0
 * calls 00672050 FUN_00672050
 * calls 00696c90 FUN_00696c90
 * calls 004519d0 FUN_004519d0
 */

void __fastcall FUN_006a6e30(int param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087ccf8;
  local_c = ExceptionList;
  local_34 = *(undefined4 *)(*(int *)(param_1 + 0x84) + 0xa8);
  ExceptionList = &local_c;
  FUN_006edb10(&local_34);
  iVar1 = *(int *)(param_1 + 0xfc);
  local_4 = 0;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x2c) != 0)) {
    cVar2 = FUN_00672050(param_1 + 0x68,iVar1,local_20,1);
    if (cVar2 != '\0') {
      local_4 = 0xffffffff;
      FUN_0045a430();
      ExceptionList = local_c;
      return;
    }
  }
  uVar3 = FUN_004522f0("SPHERE");
  FUN_004519d0("SPHERE");
  if ((*(int *)(*(int *)(param_1 + 0x84) + 0xb0) == (int)uVar3) &&
     (*(int *)(*(int *)(param_1 + 0x84) + 0xb4) == (int)((ulonglong)uVar3 >> 0x20))) {
    local_2c = *(float *)(param_1 + 0xe8);
    if (*(float *)(param_1 + 0xe8) < *(float *)(param_1 + 0xe4)) {
      local_2c = *(float *)(param_1 + 0xe4);
    }
    local_30 = *(float *)(param_1 + 0xe0);
    if (local_2c < local_30) {
      local_2c = local_30;
    }
    local_28 = local_2c;
    local_24 = local_2c;
    FUN_00696c90(&local_2c,&DAT_008a2fb4,local_20,2,&DAT_008a2fd0,0x13,&DAT_0091ddbc);
  }
  else {
    FUN_00699ea0(param_1 + 0xe0,&DAT_008a2fb4,local_20,&DAT_008a2fd0,7,&DAT_0091ddbc);
  }
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return;
}

