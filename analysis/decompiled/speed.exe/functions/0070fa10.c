/* speed.exe 0070fa10 FUN_0070fa10; analysis pseudocode, not buildable source.
 * calls 007c56b0 __CxxThrowException@8
 * calls 004303b0 FUN_004303b0
 * calls 00432d50 FUN_00432d50
 */

void __thiscall FUN_0070fa10(int param_1,uint param_2)

{
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087fdc8;
  local_c = ExceptionList;
  if (0x3fffffffU - *(int *)(param_1 + 8) < param_2) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    ExceptionList = &local_c;
    FUN_004303b0("list<T> too long",0x10);
    local_4 = 0;
    FUN_00432d50(local_50);
    local_34[0] = &PTR_FUN_008bf290;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_008c9ca8);
  }
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_2;
  return;
}

