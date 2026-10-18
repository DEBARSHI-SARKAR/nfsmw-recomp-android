/* speed.exe 004cd6f0 FUN_004cd6f0; analysis pseudocode, not buildable source.
 * calls 00432d50 FUN_00432d50
 * calls 004303b0 FUN_004303b0
 * calls 007c56b0 __CxxThrowException@8
 */

void FUN_004cd6f0(void)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086c648;
  pvStack_c = ExceptionList;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = 0;
  ExceptionList = &pvStack_c;
  FUN_004303b0("vector<T> too long",0x12);
  local_4 = 0;
  FUN_00432d50(local_50);
  local_34[0] = &PTR_FUN_008bf290;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_34,&DAT_008c9ca8);
}

