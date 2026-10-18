/* speed.exe 007bdfe0 FUN_007bdfe0; analysis pseudocode, not buildable source.
 * calls 007bce90 FUN_007bce90
 * calls 007b8680 FUN_007b8680
 */

undefined4 * __thiscall FUN_007bdfe0(undefined4 *param_1,undefined4 param_2)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00883768;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007bce90(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_008b7ef8;
  *(undefined1 *)(param_1 + 0x6f) = 1;
  FUN_007b8680();
  ExceptionList = pvStack_c;
  return param_1;
}

