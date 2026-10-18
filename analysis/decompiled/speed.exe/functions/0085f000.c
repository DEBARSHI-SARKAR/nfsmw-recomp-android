/* speed.exe 0085f000 _gmtime; analysis pseudocode, not buildable source.
 * calls 007cd100 __getptd
 * calls 007c6700 __malloc_dbg
 */

/* Library Function - Single Match
    _gmtime
   
   Library: Visual Studio 2003 Debug */

tm * __cdecl _gmtime(time_t *_Time)

{
  int iVar1;
  bool bVar2;
  _ptiddata p_Var3;
  void *pvVar4;
  int iVar5;
  tm *local_1c;
  int local_18;
  int local_10;
  undefined *local_8;
  
  iVar1 = (int)*_Time;
  bVar2 = false;
  p_Var3 = __getptd();
  if (iVar1 < 0) {
    return (tm *)0x0;
  }
  if (p_Var3->_gmtimebuf == (void *)0x0) {
    pvVar4 = (void *)__malloc_dbg(0x24,2,"gmtime.c",0x47);
    p_Var3->_gmtimebuf = pvVar4;
    if (p_Var3->_gmtimebuf == (void *)0x0) {
      local_1c = (tm *)&DAT_009c3e24;
      goto LAB_0085f067;
    }
  }
  local_1c = p_Var3->_gmtimebuf;
LAB_0085f067:
  iVar5 = iVar1 % 0x7861f80;
  iVar1 = (iVar1 / 0x7861f80) * 4;
  local_18 = iVar1 + 0x46;
  local_10 = iVar5;
  if (0x1e1337f < iVar5) {
    local_18 = iVar1 + 0x47;
    local_10 = iVar5 + -0x1e13380;
    if (0x1e1337f < local_10) {
      local_18 = iVar1 + 0x48;
      local_10 = iVar5 + -0x3c26700;
      if (local_10 < 0x1e28500) {
        bVar2 = true;
      }
      else {
        local_18 = iVar1 + 0x49;
        local_10 = iVar5 + -0x5a4ec00;
      }
    }
  }
  local_1c->tm_year = local_18;
  local_1c->tm_yday = local_10 / 0x15180;
  local_10 = local_10 + local_1c->tm_yday * -0x15180;
  if (bVar2) {
    local_8 = &DAT_00907394;
  }
  else {
    local_8 = &DAT_009073c8;
  }
  for (local_18 = 1; *(int *)(local_8 + local_18 * 4) < local_1c->tm_yday; local_18 = local_18 + 1)
  {
  }
  local_1c->tm_mon = local_18 + -1;
  local_1c->tm_mday = local_1c->tm_yday - *(int *)(local_8 + (local_18 + -1) * 4);
  local_1c->tm_wday = ((int)*_Time / 0x15180 + 4) % 7;
  local_1c->tm_hour = local_10 / 0xe10;
  local_10 = local_10 + local_1c->tm_hour * -0xe10;
  local_1c->tm_min = local_10 / 0x3c;
  local_1c->tm_sec = local_10 + local_1c->tm_min * -0x3c;
  local_1c->tm_isdst = 0;
  return local_1c;
}

