/* speed.exe 0069d900 FUN_0069d900; analysis pseudocode, not buildable source.
 * calls 0068df60 FUN_0068df60
 * calls 0065c5a0 FUN_0065c5a0
 */

undefined4 __fastcall FUN_0069d900(undefined4 param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087c506;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0065c5a0(0x3f0ccccd,0x42700000);
  local_4 = 0;
  FUN_0065c5a0(0x3e19999a,0x42700000);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0068df60();
  ExceptionList = local_c;
  return param_1;
}

