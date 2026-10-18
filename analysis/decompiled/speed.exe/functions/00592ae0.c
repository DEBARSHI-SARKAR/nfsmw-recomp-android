/* speed.exe 00592ae0 FUN_00592ae0; analysis pseudocode, not buildable source.
 * calls 00524850 FUN_00524850
 * calls 005af190 FUN_005af190
 */

undefined4 * __thiscall
FUN_00592ae0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00872adb;
  local_c = ExceptionList;
  puVar1 = param_1 + 1;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089cde0;
  *puVar1 = puVar1;
  param_1[2] = puVar1;
  local_4 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = param_2;
  param_1[9] = 1;
  *(undefined1 *)((int)param_1 + 0x29) = 1;
  *(undefined1 *)((int)param_1 + 0x2a) = 1;
  *(undefined1 *)((int)param_1 + 0x2b) = 1;
  param_1[7] = param_4;
  param_1[8] = 0x41200000;
  *(undefined1 *)(param_1 + 10) = param_6;
  uVar2 = FUN_005af190(param_3);
  uVar2 = FUN_00524850(param_1[6],uVar2);
  param_1[4] = uVar2;
  uVar2 = FUN_005af190(param_5);
  uVar2 = FUN_00524850(param_1[6],uVar2);
  param_1[5] = uVar2;
  ExceptionList = local_c;
  return param_1;
}

