/* speed.exe 007cfc60 ___FrameUnwindToState; analysis pseudocode, not buildable source.
 * calls 007cfd81 FUN_007cfd81
 * calls 007cfd58 FUN_007cfd58
 * calls 007cd100 __getptd
 * calls 007d0ab0 _inconsistency
 * calls 007d09d0 __CallSettingFrame@12
 */

/* Library Function - Single Match
    ___FrameUnwindToState
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void ___FrameUnwindToState(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  _ptiddata p_Var2;
  int local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bcb78;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  iVar1 = *(int *)(param_1 + 8);
  ExceptionList = &pvStack_14;
  p_Var2 = __getptd();
  p_Var2->_purecall = (void *)((int)p_Var2->_purecall + 1);
  while (local_20 = iVar1, local_8 = 0, local_20 != param_4) {
    if ((local_20 < 0) || (*(int *)(param_3 + 4) <= local_20)) {
      _inconsistency();
    }
    iVar1 = *(int *)(*(int *)(param_3 + 8) + local_20 * 8);
    local_8 = 1;
    if (*(int *)(*(int *)(param_3 + 8) + 4 + local_20 * 8) != 0) {
      *(int *)(param_1 + 8) = iVar1;
      __CallSettingFrame_12(*(undefined4 *)(*(int *)(param_3 + 8) + 4 + local_20 * 8),param_1,0x103)
      ;
    }
  }
  local_8 = 0xffffffff;
  FUN_007cfd58();
  FUN_007cfd81();
  return;
}

