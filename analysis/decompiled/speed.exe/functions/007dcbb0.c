/* speed.exe 007dcbb0 _signal; analysis pseudocode, not buildable source.
 * calls 007dcdc4 FUN_007dcdc4
 * calls EXTERNAL:0000007d SetConsoleCtrlHandler
 * calls EXTERNAL:0000004a GetLastError
 * calls 007dcdc9 $sigreterror$20139
 * calls 007cd100 __getptd
 * calls 007cb280 FUN_007cb280
 * calls 007dccf0 thunk_FUN_007dcdc4
 * calls 007dcce5 FUN_007dcce5
 * calls 007d0fd0 __lock
 * calls 007d6d30 FID_conflict:_memcpy
 * calls 007dd150 siglookup
 * calls 007c514a __local_unwind2
 * calls 007c6700 __malloc_dbg
 */

/* Library Function - Single Match
    _signal
   
   Library: Visual Studio 2003 Debug */

void _signal(int param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  DWORD *pDVar3;
  _ptiddata p_Var4;
  void *pvVar5;
  int in_stack_00000008;
  void *local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bd7f0;
  puStack_10 = &LAB_007cd5e4;
  local_14 = ExceptionList;
  if ((in_stack_00000008 == 4) || (in_stack_00000008 == 3)) {
    ExceptionList = &local_14;
    _sigreterror_20139();
    return;
  }
  if ((((param_1 == 2) || (param_1 == 0x15)) || (param_1 == 0x16)) || (param_1 == 0xf)) {
    ExceptionList = &local_14;
    __lock(0);
    local_8 = 0;
    if (((param_1 == 2) || (param_1 == 0x15)) && (DAT_009bae80 == 0)) {
      BVar1 = SetConsoleCtrlHandler(ctrlevent_capture,1);
      if (BVar1 != 1) {
        DVar2 = GetLastError();
        pDVar3 = (DWORD *)FUN_007cb280();
        *pDVar3 = DVar2;
        __local_unwind2(&local_14,0xffffffff);
        _sigreterror_20139();
        return;
      }
      DAT_009bae80 = 1;
    }
    switch(param_1) {
    case 2:
      DAT_009bae70 = in_stack_00000008;
      break;
    case 0xf:
      DAT_009bae7c = in_stack_00000008;
      break;
    case 0x15:
      DAT_009bae74 = in_stack_00000008;
      break;
    case 0x16:
      DAT_009bae78 = in_stack_00000008;
    }
    local_8 = 0xffffffff;
    FUN_007dcce5();
    thunk_FUN_007dcdc4();
    return;
  }
  if (((param_1 != 8) && (param_1 != 4)) && (param_1 != 0xb)) {
    ExceptionList = &local_14;
    _sigreterror_20139();
    return;
  }
  ExceptionList = &local_14;
  p_Var4 = __getptd();
  if (p_Var4->_initaddr == &DAT_00906780) {
    pvVar5 = (void *)__malloc_dbg(DAT_00906800,2,"winsig.c",0x144);
    p_Var4->_initaddr = pvVar5;
    if (p_Var4->_initaddr == (void *)0x0) {
      _sigreterror_20139();
      return;
    }
    FID_conflict__memcpy(p_Var4->_initaddr,&DAT_00906780,DAT_00906800);
  }
  local_24 = (void *)siglookup(param_1,p_Var4->_initaddr);
  if (local_24 == (void *)0x0) {
    _sigreterror_20139();
    return;
  }
  do {
    if (*(int *)((int)local_24 + 4) != param_1) {
      ExceptionList = local_14;
      return;
    }
    *(int *)((int)local_24 + 8) = in_stack_00000008;
    local_24 = (void *)((int)local_24 + 0xc);
  } while (local_24 < (void *)(DAT_00906804 * 0xc + (int)p_Var4->_initaddr));
  FUN_007dcdc4();
  return;
}

