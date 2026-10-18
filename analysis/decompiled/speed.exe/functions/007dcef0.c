/* speed.exe 007dcef0 _raise; analysis pseudocode, not buildable source.
 * calls 007dd0aa FUN_007dd0aa
 * calls 007d0fd0 __lock
 * calls 007cd100 __getptd
 * calls 007dd150 siglookup
 * calls 007ca340 __exit
 * calls 007dd0bb FUN_007dd0bb
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    _raise
   
   Library: Visual Studio 2003 Debug */

int __cdecl _raise(int _SigNum)

{
  bool bVar1;
  int iVar2;
  int *local_34;
  int local_30;
  _ptiddata local_24;
  int local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008bd810;
  puStack_10 = &LAB_007cd5e4;
  pvStack_14 = ExceptionList;
  bVar1 = false;
  switch(_SigNum) {
  case 2:
    local_34 = &DAT_009bae70;
    local_20 = DAT_009bae70;
    bVar1 = true;
    ExceptionList = &pvStack_14;
    break;
  default:
    return -1;
  case 4:
  case 8:
  case 0xb:
    ExceptionList = &pvStack_14;
    local_24 = __getptd();
    iVar2 = siglookup(_SigNum,local_24->_initaddr);
    local_34 = (int *)(iVar2 + 8);
    local_20 = *local_34;
    break;
  case 0xf:
    local_34 = &DAT_009bae7c;
    local_20 = DAT_009bae7c;
    bVar1 = true;
    ExceptionList = &pvStack_14;
    break;
  case 0x15:
    local_34 = &DAT_009bae74;
    local_20 = DAT_009bae74;
    bVar1 = true;
    ExceptionList = &pvStack_14;
    break;
  case 0x16:
    local_34 = &DAT_009bae78;
    local_20 = DAT_009bae78;
    bVar1 = true;
    ExceptionList = &pvStack_14;
  }
  if (local_20 == 1) {
    ExceptionList = pvStack_14;
    return 0;
  }
  if (local_20 == 0) {
    __exit(3);
  }
  if (bVar1) {
    __lock(0);
  }
  if ((((_SigNum == 8) || (_SigNum == 0xb)) || (_SigNum == 4)) &&
     (local_24->_initarg = (void *)0x0, _SigNum == 8)) {
    local_24->_pxcptacttab = (void *)0x8c;
  }
  if (_SigNum == 8) {
    for (local_30 = DAT_009067f8; local_30 < DAT_009067f8 + _DAT_009067fc; local_30 = local_30 + 1)
    {
      *(undefined4 *)((int)local_24->_initaddr + local_30 * 0xc + 8) = 0;
    }
  }
  else {
    *local_34 = 0;
  }
  local_8 = 0xffffffff;
  FUN_007dd0aa();
  iVar2 = FUN_007dd0bb();
  return iVar2;
}

