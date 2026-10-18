/* speed.exe 0085ecf0 __make_time_t; analysis pseudocode, not buildable source.
 * calls 007dbfc0 ___tzset
 * calls 0085f000 _gmtime
 * calls 0085dba0 _localtime
 */

/* Library Function - Single Match
    __make_time_t
   
   Library: Visual Studio 2003 Debug */

int __make_time_t(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_14;
  int local_10;
  tm *local_c;
  int local_8;
  
  local_14 = param_1[5];
  if ((0x44 < (int)local_14) && ((int)local_14 < 0x8c)) {
    if ((param_1[4] < 0) || (0xb < param_1[4])) {
      local_14 = param_1[4] / 0xc + local_14;
      param_1[4] = param_1[4] % 0xc;
      if (param_1[4] < 0) {
        param_1[4] = param_1[4] + 0xc;
        local_14 = local_14 - 1;
      }
      if ((int)local_14 < 0x45) {
        return -1;
      }
      if (0x8b < (int)local_14) {
        return -1;
      }
    }
    local_10 = *(int *)(&DAT_009073c8 + param_1[4] * 4);
    if (((local_14 & 3) == 0) && (1 < param_1[4])) {
      local_10 = local_10 + 1;
    }
    local_10 = (local_14 - 0x46) * 0x16d + -0x11 + ((int)(local_14 - 1) >> 2) + local_10;
    iVar2 = param_1[3];
    iVar1 = local_10 + iVar2;
    if ((((local_10 < 0) || (iVar2 < 0)) || (-1 < iVar1)) &&
       ((((-1 < local_10 || (-1 < iVar2)) || (iVar1 < 0)) &&
        (iVar2 = iVar1 * 0x18, iVar1 == 0 || iVar2 / iVar1 == 0x18)))) {
      iVar1 = param_1[2];
      iVar3 = iVar2 + iVar1;
      if ((((iVar2 < 0) || (iVar1 < 0)) || (-1 < iVar3)) &&
         ((((-1 < iVar2 || (-1 < iVar1)) || (iVar3 < 0)) &&
          (iVar2 = iVar3 * 0x3c, iVar3 == 0 || iVar2 / iVar3 == 0x3c)))) {
        iVar1 = param_1[1];
        iVar3 = iVar2 + iVar1;
        if ((((iVar2 < 0) || (iVar1 < 0)) || (-1 < iVar3)) &&
           ((((-1 < iVar2 || (-1 < iVar1)) || (iVar3 < 0)) &&
            (local_10 = iVar3 * 0x3c, iVar3 == 0 || local_10 / iVar3 == 0x3c)))) {
          local_8 = *param_1;
          local_14 = local_10 + local_8;
          if ((((local_10 < 0) || (local_8 < 0)) || (-1 < (int)local_14)) &&
             (((-1 < local_10 || (-1 < local_8)) || ((int)local_14 < 0)))) {
            if (param_2 == 0) {
              local_c = _gmtime((time_t *)&local_14);
              if (local_c != (tm *)0x0) goto LAB_0085efe2;
            }
            else {
              ___tzset();
              local_14 = local_14 + DAT_009070b0;
              local_c = _localtime((time_t *)&local_14);
              if (local_c != (tm *)0x0) {
                if ((0 < param_1[8]) || ((param_1[8] < 0 && (0 < local_c->tm_isdst)))) {
                  local_14 = local_14 + DAT_009070b8;
                  local_c = _localtime((time_t *)&local_14);
                  if (local_c == (tm *)0x0) {
                    return -1;
                  }
                }
LAB_0085efe2:
                for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
                  *param_1 = local_c->tm_sec;
                  local_c = (tm *)&local_c->tm_min;
                  param_1 = param_1 + 1;
                }
                return local_14;
              }
            }
          }
        }
      }
    }
  }
  return -1;
}

