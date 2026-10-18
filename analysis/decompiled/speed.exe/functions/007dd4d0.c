/* speed.exe 007dd4d0 __setmbcp_lk; analysis pseudocode, not buildable source.
 * calls 007dd7c0 _CPtoLCID
 * calls 007d6cb0 __security_check_cookie
 * calls 007dd8c0 setSBUpLow
 * calls 007dd840 setSBCS
 * calls EXTERNAL:00000079 GetCPInfo
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __setmbcp_lk
   
   Library: Visual Studio 2003 Debug */

undefined4 __setmbcp_lk(UINT param_1)

{
  undefined4 uVar1;
  BOOL BVar2;
  BYTE *local_30;
  _cpinfo local_2c;
  undefined4 local_18;
  uint local_14;
  byte *local_10;
  uint local_c;
  uint local_8;
  
  local_18 = DAT_00906980;
  if (param_1 == 0) {
    setSBCS();
    setSBUpLow();
    uVar1 = 0;
  }
  else {
    for (local_c = 0; local_c < 5; local_c = local_c + 1) {
      if (*(UINT *)(&DAT_00907168 + local_c * 0x30) == param_1) {
        for (local_14 = 0; local_14 < 0x101; local_14 = local_14 + 1) {
          (&DAT_009c50c0)[local_14] = 0;
        }
        for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
          for (local_10 = &DAT_00907178 + local_8 * 8 + local_c * 0x30;
              (*local_10 != 0 && (local_10[1] != 0)); local_10 = local_10 + 2) {
            for (local_14 = (uint)*local_10; local_14 <= local_10[1]; local_14 = local_14 + 1) {
              (&DAT_009c50c1)[local_14] = (&DAT_009c50c1)[local_14] | (&DAT_00907160)[local_8];
            }
          }
        }
        DAT_009c51c4 = param_1;
        DAT_009c50a8 = 1;
        DAT_009c50a0 = _CPtoLCID(param_1);
        for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
          *(undefined2 *)(&DAT_009c51d0 + local_8 * 2) =
               *(undefined2 *)(&DAT_0090716c + local_8 * 2 + local_c * 0x30);
        }
        setSBUpLow();
        return 0;
      }
    }
    BVar2 = GetCPInfo(param_1,&local_2c);
    if (BVar2 == 1) {
      for (local_14 = 0; local_14 < 0x101; local_14 = local_14 + 1) {
        (&DAT_009c50c0)[local_14] = 0;
      }
      DAT_009c51c4 = param_1;
      DAT_009c50a0 = 0;
      if (local_2c.MaxCharSize < 2) {
        DAT_009c50a8 = 0;
      }
      else {
        for (local_30 = local_2c.LeadByte; (*local_30 != 0 && (local_30[1] != 0));
            local_30 = local_30 + 2) {
          for (local_14 = (uint)*local_30; local_14 <= local_30[1]; local_14 = local_14 + 1) {
            (&DAT_009c50c1)[local_14] = (&DAT_009c50c1)[local_14] | 4;
          }
        }
        for (local_14 = 1; local_14 < 0xff; local_14 = local_14 + 1) {
          (&DAT_009c50c1)[local_14] = (&DAT_009c50c1)[local_14] | 8;
        }
        DAT_009c50a0 = _CPtoLCID(DAT_009c51c4);
        DAT_009c50a8 = 1;
      }
      for (local_8 = 0; local_8 < 6; local_8 = local_8 + 1) {
        *(undefined2 *)(&DAT_009c51d0 + local_8 * 2) = 0;
      }
      setSBUpLow();
      uVar1 = 0;
    }
    else if (DAT_009bae84 == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      setSBCS();
      setSBUpLow();
      uVar1 = 0;
    }
  }
  return uVar1;
}

