/* speed.exe 007c0350 FUN_007c0350; analysis pseudocode, not buildable source.
 * calls 007bce90 FUN_007bce90
 * calls 007bdb60 FUN_007bdb60
 */

undefined4 * __thiscall FUN_007c0350(undefined4 *param_1,undefined4 param_2)

{
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008839e8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_007bce90(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_008b7fdc;
  param_1[0x6f] = 0xf;
  param_1[0x70] = 0xf;
  param_1[0x71] = 0xf;
  FUN_007bdb60();
  ExceptionList = pvStack_c;
  return param_1;
}

