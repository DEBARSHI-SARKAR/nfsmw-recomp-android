/* speed.exe 007c02a0 FUN_007c02a0; analysis pseudocode, not buildable source.
 * calls 007bce90 FUN_007bce90
 * calls 007bda00 FUN_007bda00
 * calls 00524850 FUN_00524850
 */

undefined4 * __thiscall FUN_007c02a0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008839d6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007bce90(param_2);
  puVar1 = param_1 + 0x6f;
  *param_1 = &PTR_FUN_008b7ec4;
  *puVar1 = puVar1;
  param_1[0x70] = puVar1;
  local_4 = 1;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined1 *)(param_1 + 0x73) = 0;
  uVar2 = FUN_00524850(param_1[4],0xb893252a);
  param_1[0x72] = uVar2;
  FUN_007bda00();
  ExceptionList = pvStack_c;
  return param_1;
}

