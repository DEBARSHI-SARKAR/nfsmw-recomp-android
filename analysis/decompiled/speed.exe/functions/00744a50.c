/* speed.exe 00744a50 FUN_00744a50; analysis pseudocode, not buildable source.
 * calls 0050c7b0 FUN_0050c7b0
 * calls 005094c0 FUN_005094c0
 * calls 0050af90 FUN_0050af90
 * calls 00744890 FUN_00744890
 * calls 004ff160 FUN_004ff160
 * calls 0045a430 FUN_0045a430
 * calls 006bd900 FUN_006bd900
 * calls 00503c00 FUN_00503c00
 * calls 004ff180 FUN_004ff180
 * calls 00503c30 FUN_00503c30
 * calls 00503b60 FUN_00503b60
 * calls 00503bc0 FUN_00503bc0
 * calls 00463ca0 FUN_00463ca0
 */

void __thiscall
FUN_00744a50(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  int iVar1;
  undefined1 *puVar2;
  int local_70;
  undefined1 local_60 [68];
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_00880bb8;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (param_3 != *(int *)(param_1 + 0x54)) {
    ExceptionList = &local_1c;
    if (*(int *)(param_1 + 0x50) != 0) {
      ExceptionList = &local_1c;
      FUN_004ff180();
      iVar1 = *(int *)(param_1 + 0x50);
      if (iVar1 != 0) {
        FUN_005094c0();
        FUN_00463ca0(DAT_00916068,iVar1);
      }
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    *(int *)(param_1 + 0x54) = param_3;
    if (param_3 == 0) {
      ExceptionList = local_1c;
      return;
    }
    FUN_00744890(param_3,0,0);
    local_14 = 0;
    if (local_70 == 0) {
      local_14 = 0xffffffff;
      FUN_0045a430();
      ExceptionList = local_1c;
      return;
    }
    iVar1 = FUN_0050c7b0(local_70,0x10800000);
    *(int *)(param_1 + 0x50) = iVar1;
    if (iVar1 != 0) {
      FUN_004ff160(param_1,&LAB_00738920);
    }
    local_14 = 0xffffffff;
    FUN_0045a430();
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    if (param_2 == 0) {
      puVar2 = (undefined1 *)(param_1 + 0x10);
    }
    else {
      FUN_006bd900(local_60,param_1 + 0x10,param_2);
      puVar2 = local_60;
    }
    FUN_00503bc0(puVar2);
    FUN_00503c30();
    *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x68) = param_5;
    FUN_00503b60(0);
    if (param_6 != 0) {
      FUN_00503c00(param_6);
    }
    FUN_0050af90(param_4);
  }
  ExceptionList = local_1c;
  return;
}

