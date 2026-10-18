/* speed.exe 005dcf60 thunk_FUN_005d97a0; analysis pseudocode, not buildable source.
 */

undefined4 thunk_FUN_005d97a0(void)

{
  undefined4 uVar1;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00874bd8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004546c0(auStack_1c,0xd5a174aa);
  uStack_4 = 0;
  uVar1 = FUN_00452d40();
  uStack_4 = 0xffffffff;
  FUN_00452bd0();
  ExceptionList = pvStack_c;
  return uVar1;
}

