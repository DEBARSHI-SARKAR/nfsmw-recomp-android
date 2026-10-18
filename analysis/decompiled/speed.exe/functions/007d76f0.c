/* speed.exe 007d76f0 __openfile; analysis pseudocode, not buildable source.
 * calls 007e4840 __sopen
 * calls 007d2670 __CrtDbgReport
 */

/* Library Function - Single Match
    __openfile
   
   Library: Visual Studio 2003 Debug */

FILE * __cdecl __openfile(char *_Filename,char *_Mode,int _ShFlag,FILE *_File)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  FILE *pFVar7;
  uint local_14;
  uint local_10;
  
  local_14 = DAT_009baf4c;
  bVar4 = false;
  bVar5 = false;
  if ((_Filename == (char *)0x0) &&
     (iVar6 = __CrtDbgReport(2,"_open.c",0x44,0,"filename != NULL"), iVar6 == 1)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FILE *)(*pcVar2)();
    return pFVar7;
  }
  if ((_Mode == (char *)0x0) &&
     (iVar6 = __CrtDbgReport(2,"_open.c",0x45,0,"mode != NULL"), iVar6 == 1)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FILE *)(*pcVar2)();
    return pFVar7;
  }
  if ((_File == (FILE *)0x0) &&
     (iVar6 = __CrtDbgReport(2,"_open.c",0x46,0,"str != NULL"), iVar6 == 1)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FILE *)(*pcVar2)();
    return pFVar7;
  }
  cVar1 = *_Mode;
  if (cVar1 == 'a') {
    local_10 = 0x109;
    local_14 = local_14 | 2;
  }
  else if (cVar1 == 'r') {
    local_10 = 0;
    local_14 = local_14 | 1;
  }
  else {
    if (cVar1 != 'w') {
      return (FILE *)0x0;
    }
    local_10 = 0x301;
    local_14 = local_14 | 2;
  }
  bVar3 = true;
  while ((_Mode = _Mode + 1, *_Mode != '\0' && (bVar3))) {
    switch(*_Mode) {
    case '+':
      if ((local_10 & 2) == 0) {
        local_10 = local_10 & 0xfffffffe | 2;
        local_14 = local_14 & 0xfffffffc | 0x80;
      }
      else {
        bVar3 = false;
      }
      break;
    default:
      bVar3 = false;
      break;
    case 'D':
      if ((local_10 & 0x40) == 0) {
        local_10 = local_10 | 0x40;
      }
      else {
        bVar3 = false;
      }
      break;
    case 'R':
      if (bVar5) {
        bVar3 = false;
      }
      else {
        bVar5 = true;
        local_10 = local_10 | 0x10;
      }
      break;
    case 'S':
      if (bVar5) {
        bVar3 = false;
      }
      else {
        bVar5 = true;
        local_10 = local_10 | 0x20;
      }
      break;
    case 'T':
      if ((local_10 & 0x1000) == 0) {
        local_10 = local_10 | 0x1000;
      }
      else {
        bVar3 = false;
      }
      break;
    case 'b':
      if ((local_10 & 0xc000) == 0) {
        local_10 = local_10 | 0x8000;
      }
      else {
        bVar3 = false;
      }
      break;
    case 'c':
      if (bVar4) {
        bVar3 = false;
      }
      else {
        bVar4 = true;
        local_14 = local_14 | 0x4000;
      }
      break;
    case 'n':
      if (bVar4) {
        bVar3 = false;
      }
      else {
        bVar4 = true;
        local_14 = local_14 & 0xffffbfff;
      }
      break;
    case 't':
      if ((local_10 & 0xc000) == 0) {
        local_10 = local_10 | 0x4000;
      }
      else {
        bVar3 = false;
      }
    }
  }
  iVar6 = __sopen(_Filename,local_10,_ShFlag,0x1a4);
  if (iVar6 < 0) {
    _File = (FILE *)0x0;
  }
  else {
    DAT_009baa18 = DAT_009baa18 + 1;
    _File->_flag = local_14;
    _File->_cnt = 0;
    _File->_ptr = (char *)0x0;
    _File->_base = (char *)0x0;
    _File->_tmpfname = (char *)0x0;
    _File->_file = iVar6;
  }
  return _File;
}

