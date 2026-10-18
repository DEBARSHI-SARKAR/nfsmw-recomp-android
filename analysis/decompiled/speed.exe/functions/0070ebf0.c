/* speed.exe 0070ebf0 FUN_0070ebf0; analysis pseudocode, not buildable source.
 * calls 006f8180 FUN_006f8180
 * calls 00466330 FUN_00466330
 * calls 0070ea70 FUN_0070ea70
 * calls 006e9c90 FUN_006e9c90
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00664cc0 FUN_00664cc0
 * calls 0045a430 FUN_0045a430
 * calls 006f82f0 FUN_006f82f0
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_0070ebf0(undefined4 *param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087fcfd;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_008b24e4;
  param_1[2] = &PTR_LAB_008b24dc;
  param_1[0xb] = &PTR_LAB_008b24c8;
  param_1[0xe] = &PTR_LAB_008b24ac;
  param_1[0x12] = &PTR_LAB_008b24a8;
  DAT_009922b4 = 0;
  local_4 = 7;
  FUN_006e9c90(param_1[0x13]);
  FUN_006e9c90(param_1[0x14]);
  iVar1 = param_1[0x17];
  if (iVar1 != param_1[0x18]) {
    do {
      if (*(undefined4 **)(iVar1 + 4) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(iVar1 + 4))(1);
      }
      iVar1 = iVar1 + 8;
    } while (iVar1 != param_1[0x18]);
  }
  iVar1 = param_1[0x17];
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(param_1[0x19] - iVar1 >> 3) << 3,0);
  }
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  iVar1 = param_1[0x3b];
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(param_1[0x3d] - iVar1 >> 2) * 4,0);
  }
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  if (param_1[0x8e] != 0) {
    FUN_00466330(param_1[0x8e]);
  }
  FUN_006f8180(param_1 + 0x12);
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  if ((undefined4 *)param_1[0x7f] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x7f])(1);
  }
  param_1[0x7f] = 0;
  if ((undefined4 *)param_1[0x80] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x80])(1);
  }
  param_1[0x80] = 0;
  if ((undefined4 *)param_1[0x81] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x81])(1);
  }
  param_1[0x81] = 0;
  if ((undefined4 *)param_1[0x82] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x82])(1);
  }
  param_1[0x82] = 0;
  if ((undefined4 *)param_1[0x83] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x83])(1);
  }
  param_1[0x83] = 0;
  if (param_1[0x8c] != 0) {
    thunk_FUN_007c7250(param_1[0x8c]);
  }
  param_1[0x8c] = 0;
  if (param_1[0x8d] != 0) {
    thunk_FUN_007c7250(param_1[0x8d]);
  }
  param_1[0x8d] = 0;
  if (param_1[0x8f] != 0) {
    FUN_00664cc0(param_1[0x8f]);
  }
  if (param_1[0x90] != 0) {
    FUN_00664cc0(param_1[0x90]);
  }
  if (param_1[0x91] != 0) {
    FUN_00664cc0(param_1[0x91]);
  }
  if (param_1[0x92] != 0) {
    FUN_00664cc0(param_1[0x92]);
  }
  if (param_1[0x94] != 0) {
    FUN_00664cc0(param_1[0x94]);
  }
  if (param_1[0x93] != 0) {
    FUN_00664cc0(param_1[0x93]);
  }
  if (param_1[0x95] != 0) {
    FUN_00664cc0(param_1[0x95]);
  }
  local_4._0_1_ = 6;
  FUN_0045a430();
  local_4._0_1_ = 5;
  FUN_0045a430();
  local_4._0_1_ = 4;
  FUN_0045a430();
  param_1[0x39] = &PTR_LAB_008967fc;
  iVar1 = param_1[0x3b];
  local_4._0_1_ = 3;
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(param_1[0x3d] - iVar1 >> 2) * 4,0);
  }
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  local_4._0_1_ = 2;
  FUN_0070ea70();
  iVar1 = param_1[0x17];
  local_4 = CONCAT31(local_4._1_3_,1);
  if (iVar1 != 0) {
    FUN_005d0370(iVar1,(param_1[0x19] - iVar1 >> 3) << 3,0);
  }
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  DAT_00993cc8 = 0;
  local_4 = 0xffffffff;
  FUN_006f82f0();
  ExceptionList = pvStack_c;
  return;
}

