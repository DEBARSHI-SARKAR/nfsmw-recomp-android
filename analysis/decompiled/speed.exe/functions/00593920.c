/* speed.exe 00593920 FUN_00593920; analysis pseudocode, not buildable source.
 * calls 00524850 FUN_00524850
 * calls 00586290 FUN_00586290
 * calls 005251e0 FUN_005251e0
 * calls 005750d0 FUN_005750d0
 * calls 00573dd0 FUN_00573dd0
 */

undefined4 * __thiscall FUN_00593920(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00872b53;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  puVar1 = param_1 + 0xb;
  *param_1 = &PTR_FUN_0089cef4;
  *puVar1 = puVar1;
  param_1[0xc] = puVar1;
  local_4 = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  FUN_005750d0(param_1[4],"scrollbar",1,0,0);
  param_1[0x2c] = "OPTION_NAME_";
  param_1[0x2d] = "OPTION_DATA_";
  param_1[0x2e] = "OPTION_IMAGE_";
  param_1[0x2f] = "OPTION_BACKING_";
  param_1[0x30] = "LEFT_ARROW_";
  param_1[0x31] = "RIGHT_ARROW_";
  param_1[0x32] = "SLIDER_";
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0x432f0000;
  param_1[0x3a] = 0x41c00000;
  param_1[0x3b] = 0x432f0000;
  param_1[0x3c] = 0x41c00000;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0x40800000;
  param_1[0x40] = 0;
  param_1[0x41] = 1;
  param_1[0x42] = 1;
  param_1[0x43] = 7;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined1 *)(param_1 + 0x47) = 1;
  *(undefined1 *)((int)param_1 + 0x11d) = 0;
  *(undefined1 *)((int)param_1 + 0x11e) = 1;
  *(undefined1 *)((int)param_1 + 0x11f) = 0;
  *(undefined1 *)(param_1 + 0x48) = 1;
  uVar2 = FUN_00524850(param_1[4],0xa753c46c);
  param_1[0xf] = uVar2;
  uVar2 = FUN_00524850(param_1[4],0xc128b184);
  param_1[0x10] = uVar2;
  uVar2 = FUN_00524850(param_1[4],0x6745352);
  param_1[0x14] = uVar2;
  uVar2 = FUN_005251e0(param_1[4],0xf16cf3a9);
  param_1[0x12] = uVar2;
  uVar2 = FUN_00524850(param_1[4],0xd79b07a0);
  param_1[0x13] = uVar2;
  if ((param_1[0xf] != 0) && (param_1[0x10] != 0)) {
    FUN_00573dd0();
    *(undefined1 *)(param_1 + 1) = 0;
  }
  ExceptionList = local_c;
  return param_1;
}

