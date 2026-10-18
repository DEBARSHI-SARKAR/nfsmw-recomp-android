/* speed.exe 0085dba0 _localtime; analysis pseudocode, not buildable source.
 * calls 007dbfc0 ___tzset
 * calls 0085f000 _gmtime
 * calls 007dc4e0 __isindst
 */

/* Library Function - Single Match
    _localtime
   
   Library: Visual Studio 2003 Debug */

tm * __cdecl _localtime(time_t *_Time)

{
  int iVar1;
  int local_c;
  tm *local_8;
  
  if ((int)*_Time < 0) {
    local_8 = (tm *)0x0;
  }
  else {
    ___tzset();
    if (((int)*_Time < 0x3f481) || (0x7ffc0b7e < (int)*_Time)) {
      local_8 = _gmtime(_Time);
      if ((DAT_009070b4 == 0) || (iVar1 = __isindst(local_8), iVar1 == 0)) {
        local_c = local_8->tm_sec - DAT_009070b0;
      }
      else {
        local_c = local_8->tm_sec - (DAT_009070b0 + DAT_009070b8);
        local_8->tm_isdst = 1;
      }
      local_8->tm_sec = local_c % 0x3c;
      if (local_8->tm_sec < 0) {
        local_8->tm_sec = local_8->tm_sec + 0x3c;
        local_c = local_c + -0x3c;
      }
      local_c = local_c / 0x3c + local_8->tm_min;
      local_8->tm_min = local_c % 0x3c;
      if (local_8->tm_min < 0) {
        local_8->tm_min = local_8->tm_min + 0x3c;
        local_c = local_c + -0x3c;
      }
      local_c = local_c / 0x3c + local_8->tm_hour;
      local_8->tm_hour = local_c % 0x18;
      if (local_8->tm_hour < 0) {
        local_8->tm_hour = local_8->tm_hour + 0x18;
        local_c = local_c + -0x18;
      }
      local_c = local_c / 0x18;
      if (local_c < 1) {
        if (local_c < 0) {
          local_8->tm_wday = (local_8->tm_wday + 7 + local_c) % 7;
          local_8->tm_mday = local_8->tm_mday + local_c;
          if (local_8->tm_mday < 1) {
            local_8->tm_mday = local_8->tm_mday + 0x1f;
            local_8->tm_yday = 0x16c;
            local_8->tm_mon = 0xb;
            local_8->tm_year = local_8->tm_year + -1;
          }
          else {
            local_8->tm_yday = local_8->tm_yday + local_c;
          }
        }
      }
      else {
        local_8->tm_wday = (local_8->tm_wday + local_c) % 7;
        local_8->tm_mday = local_8->tm_mday + local_c;
        local_8->tm_yday = local_8->tm_yday + local_c;
      }
    }
    else {
      local_c = (int)*_Time - DAT_009070b0;
      local_8 = _gmtime((time_t *)&local_c);
      if ((DAT_009070b4 != 0) && (iVar1 = __isindst(local_8), iVar1 != 0)) {
        local_c = local_c - DAT_009070b8;
        local_8 = _gmtime((time_t *)&local_c);
        local_8->tm_isdst = 1;
      }
    }
  }
  return local_8;
}

