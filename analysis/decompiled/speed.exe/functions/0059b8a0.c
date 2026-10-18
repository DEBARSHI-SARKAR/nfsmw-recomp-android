/* speed.exe 0059b8a0 FUN_0059b8a0; analysis pseudocode, not buildable source.
 * calls 00524850 FUN_00524850
 * calls 00592bc0 FUN_00592bc0
 * calls 00592ae0 FUN_00592ae0
 * calls 005750d0 FUN_005750d0
 * calls 005af1c0 FUN_005af1c0
 * calls 00514c70 FUN_00514c70
 * calls 00524ee0 FUN_00524ee0
 */

undefined4 * __thiscall
FUN_0059b8a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00872e48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00592ae0(param_2,param_3,param_4,param_5,0);
  local_4 = 0;
  *param_1 = &PTR_FUN_008a1e10;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_005750d0(param_2,"ScrollBar",0,0,1);
  *(undefined2 *)((int)param_1 + 0xba) = 1;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0x3f800000;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2f] = 1;
  param_1[0x32] = 1;
  param_1[0x30] = 4;
  param_1[0x33] = param_6;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0x41100000;
  *(undefined1 *)(param_1 + 0x3b) = 1;
  *(undefined1 *)((int)param_1 + 0xed) = 0;
  *(undefined1 *)((int)param_1 + 0xee) = 0;
  *(undefined1 *)((int)param_1 + 0xef) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0xffffffff;
  param_1[0x3e] = 0xffffff;
  param_1[8] = 0xc0a00000;
  uVar1 = FUN_005af1c0(param_3);
  iVar2 = FUN_00524850(param_2,uVar1);
  if (iVar2 != 0) {
    FUN_00524ee0(iVar2,param_1 + 0x35,param_1 + 0x36);
    FUN_00514c70(iVar2);
  }
  FUN_00592bc0();
  *(undefined2 *)((int)param_1 + 0xba) = 0;
  param_1[0x2d] = 0x3e4ccccd;
  ExceptionList = local_c;
  return param_1;
}

