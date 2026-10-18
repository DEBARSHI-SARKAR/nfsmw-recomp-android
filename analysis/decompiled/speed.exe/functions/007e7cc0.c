/* speed.exe 007e7cc0 FUN_007e7cc0; analysis pseudocode, not buildable source.
 * calls 00432e00 FUN_00432e00
 * calls 007c56b0 __CxxThrowException@8
 * calls 00433d70 FUN_00433d70
 */

void FUN_007e7cc0(void)

{
  undefined1 local_54 [28];
  undefined1 local_38 [40];
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00883c68;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  FUN_00433d70("invalid string position");
  local_8 = 0;
  FUN_00432e00(local_54);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_38,&DAT_008c9f78);
}

