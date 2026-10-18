/* speed.exe 00480d20 FUN_00480d20; analysis pseudocode, not buildable source.
 * calls 004522f0 FUN_004522f0
 * calls 00648db0 FUN_00648db0
 * calls 004519d0 FUN_004519d0
 * calls 0046fb00 FUN_0046fb00
 */

undefined4 * __thiscall FUN_00480d20(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086a56b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0046fb00();
  local_4 = 0;
  *param_1 = &PTR_FUN_00895110;
  param_1[2] = param_2;
  uVar2 = FUN_004522f0("CDActionDrive");
  *(undefined8 *)(param_1 + 4) = uVar2;
  uVar1 = FUN_004519d0("CDActionDrive");
  param_1[6] = uVar1;
  param_1[7] = "CDActionDrive";
  param_1[8] = 0;
  FUN_00648db0(0,0x98c7a2f5,"CameraAI",0);
  *(undefined1 *)(param_1 + 0xac) = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  *(undefined1 *)(param_1 + 0xaf) = 0;
  param_1[0xb0] = 0;
  ExceptionList = local_c;
  return param_1;
}

