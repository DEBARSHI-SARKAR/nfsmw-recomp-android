/* speed.exe 007cc490 parse_cmdline; analysis pseudocode, not buildable source.
 */

/* Library Function - Single Match
    _parse_cmdline
   
   Library: Visual Studio 2003 Debug */

void __cdecl
parse_cmdline(byte *param_1,undefined4 *param_2,byte *param_3,int *param_4,int *param_5)

{
  bool bVar1;
  byte *pbVar2;
  bool bVar3;
  uint local_18;
  byte local_11;
  byte *local_8;
  
  *param_5 = 0;
  *param_4 = 1;
  local_8 = param_1;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  bVar1 = false;
  do {
    if (*local_8 == 0x22) {
      bVar1 = !bVar1;
      local_11 = *local_8;
      pbVar2 = local_8 + 1;
    }
    else {
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *local_8;
        param_3 = param_3 + 1;
      }
      local_11 = *local_8;
      pbVar2 = local_8 + 1;
      if (((&DAT_009c50c1)[local_11] & 4) != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = local_8[1];
          param_3 = param_3 + 1;
        }
        pbVar2 = local_8 + 2;
      }
    }
    local_8 = pbVar2;
  } while ((local_11 != 0) && ((bVar1 || ((local_11 != 0x20 && (local_11 != 9))))));
  if (local_11 == 0) {
    local_8 = local_8 + -1;
  }
  else if (param_3 != (byte *)0x0) {
    param_3[-1] = 0;
  }
  bVar1 = false;
  while( true ) {
    if (*local_8 != 0) {
      for (; (*local_8 == 0x20 || (*local_8 == 9)); local_8 = local_8 + 1) {
      }
    }
    if (*local_8 == 0) break;
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar3 = true;
      local_18 = 0;
      for (; *local_8 == 0x5c; local_8 = local_8 + 1) {
        local_18 = local_18 + 1;
      }
      if (*local_8 == 0x22) {
        if (local_18 % 2 == 0) {
          if (bVar1) {
            bVar3 = local_8[1] == 0x22;
            if (bVar3) {
              local_8 = local_8 + 1;
            }
          }
          else {
            bVar3 = false;
          }
          bVar1 = !bVar1;
        }
        local_18 = local_18 >> 1;
      }
      while (local_18 != 0) {
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
        local_18 = local_18 - 1;
      }
      if ((*local_8 == 0) || ((!bVar1 && ((*local_8 == 0x20 || (*local_8 == 9)))))) break;
      if (bVar3) {
        if (param_3 == (byte *)0x0) {
          if (((&DAT_009c50c1)[*local_8] & 4) != 0) {
            local_8 = local_8 + 1;
            *param_5 = *param_5 + 1;
          }
        }
        else {
          if (((&DAT_009c50c1)[*local_8] & 4) != 0) {
            *param_3 = *local_8;
            param_3 = param_3 + 1;
            local_8 = local_8 + 1;
            *param_5 = *param_5 + 1;
          }
          *param_3 = *local_8;
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      local_8 = local_8 + 1;
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}

