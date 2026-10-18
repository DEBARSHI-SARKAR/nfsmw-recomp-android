/* speed.exe 007c01f0 FUN_007c01f0; analysis pseudocode, not buildable source.
 * calls 007bce90 FUN_007bce90
 * calls 007bd6e0 FUN_007bd6e0
 */

undefined4 * __thiscall FUN_007c01f0(undefined4 *param_1,undefined4 param_2)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008839a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007bce90(param_2);
  param_1[0x6f] = 0;
  *param_1 = &PTR_FUN_008b7fbc;
  local_4 = 0;
  param_1[0x70] = 1;
  param_1[0x71] = 1;
  param_1[0x72] = 1;
  param_1[0x73] = 1;
  FUN_007bd6e0();
  ExceptionList = pvStack_c;
  return param_1;
}

