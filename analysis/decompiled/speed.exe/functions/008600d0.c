/* speed.exe 008600d0 ___loctotime_t; analysis pseudocode, not buildable source.
 * calls 007dbfc0 ___tzset
 * calls 007dc4e0 __isindst
 */

/* Library Function - Single Match
    ___loctotime_t
   
   Library: Visual Studio 2003 Debug */

int ___loctotime_t(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  tm local_2c;
  int local_8;
  
  uVar1 = param_1 - 0x76c;
  if (((int)uVar1 < 0x46) || (0x8a < (int)uVar1)) {
    iVar2 = -1;
  }
  else {
    local_8 = param_3 + *(int *)(&DAT_009073c4 + param_2 * 4);
    uVar3 = uVar1 & 0x80000003;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
    }
    if ((((uVar3 == 0) && ((int)uVar1 % 100 != 0)) || (param_1 % 400 == 0)) && (2 < param_2)) {
      local_8 = local_8 + 1;
    }
    iVar2 = (param_1 + -0x7b2) * 0x16d + local_8;
    ___tzset();
    iVar2 = ((((((int)(param_1 + -0x76d + (param_1 + -0x76d >> 0x1f & 3U)) >> 2) -
               (param_1 + -0x76d) / 100) + (param_1 + -0x641) / 400 + -0x11 + iVar2) * 0x18 +
             param_4) * 0x3c + param_5) * 0x3c + param_6 + DAT_009070b0;
    local_2c.tm_yday = local_8;
    local_2c.tm_mon = param_2 + -1;
    local_2c.tm_hour = param_4;
    local_2c.tm_min = param_5;
    local_2c.tm_sec = param_6;
    if ((param_7 == 1) ||
       (((param_7 == -1 && (DAT_009070b4 != 0)) &&
        (local_2c.tm_year = uVar1, iVar4 = __isindst(&local_2c), iVar4 != 0)))) {
      iVar2 = iVar2 + DAT_009070b8;
    }
  }
  return iVar2;
}

