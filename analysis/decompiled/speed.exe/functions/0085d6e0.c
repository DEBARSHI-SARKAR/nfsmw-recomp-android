/* speed.exe 0085d6e0 __threadstartex@4; analysis pseudocode, not buildable source.
 * calls EXTERNAL:00000069 GetCurrentThreadId
 * calls 007c7290 __free_dbg
 * calls 007c4240 __amsg_exit
 * calls 0085d7f0 __endthreadex
 * calls 007c4390 FUN_007c4390
 */

/* Library Function - Single Match
    __threadstartex@4
   
   Library: Visual Studio 2003 Debug */

undefined4 __threadstartex_4(DWORD *param_1)

{
  DWORD *pDVar1;
  int iVar2;
  DWORD DVar3;
  uint _Retval;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008c7b00;
  puStack_10 = &LAB_007cd5e4;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  pDVar1 = (DWORD *)(*DAT_009bac08)(DAT_0090682c);
  if (pDVar1 == (DWORD *)0x0) {
    iVar2 = (*DAT_009bac0c)(DAT_0090682c,param_1);
    if (iVar2 == 0) {
      __amsg_exit(0x10);
    }
    DVar3 = GetCurrentThreadId();
    *param_1 = DVar3;
  }
  else {
    pDVar1[0x13] = param_1[0x13];
    pDVar1[0x14] = param_1[0x14];
    __free_dbg(param_1,2);
    param_1 = pDVar1;
  }
  if (PTR_FUN_00906240 != (undefined *)0x0) {
    (*(code *)PTR_FUN_00906240)();
  }
  local_8 = 0;
  _Retval = (*(code *)param_1[0x13])(param_1[0x14]);
  __endthreadex(_Retval);
  ExceptionList = local_14;
  return 0;
}

