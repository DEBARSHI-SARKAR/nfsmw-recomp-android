/* speed.exe 0085e790 strtoxl; analysis pseudocode, not buildable source.
 * calls 007d4650 __chvalidator
 * calls 007cd100 __getptd
 * calls 007cb270 FUN_007cb270
 * calls 007d4710 ___isctype_mt
 * calls 007d4690 __chvalidator_mt
 * calls 007d2f80 ___updatetlocinfo
 */

/* Library Function - Single Match
    _strtoxl
   
   Library: Visual Studio 2003 Debug */

uint __cdecl strtoxl(char *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  char *pcVar1;
  _ptiddata p_Var2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_24;
  int local_20;
  uint local_1c;
  char local_15;
  uint local_10;
  pthreadlocinfo local_c;
  char *local_8;
  
  p_Var2 = __getptd();
  local_c = (pthreadlocinfo)p_Var2->_tfpecode;
  if (local_c != (pthreadlocinfo)PTR_DAT_00906b3c) {
    local_c = ___updatetlocinfo();
  }
  local_1c = 0;
  local_15 = *param_1;
  pcVar1 = param_1;
  while( true ) {
    local_8 = pcVar1 + 1;
    if ((int)local_c->lc_category[1].refcount < 2) {
      local_20 = __chvalidator_mt(local_c,local_15,8);
    }
    else {
      local_20 = ___isctype_mt(local_c,local_15,8);
    }
    if (local_20 == 0) break;
    local_15 = *local_8;
    pcVar1 = local_8;
  }
  if (local_15 == '-') {
    param_4 = param_4 | 2;
    local_15 = *local_8;
    local_8 = pcVar1 + 2;
  }
  else if (local_15 == '+') {
    local_15 = *local_8;
    local_8 = pcVar1 + 2;
  }
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  if (param_3 == 0) {
    if (local_15 == '0') {
      if ((*local_8 == 'x') || (*local_8 == 'X')) {
        param_3 = 0x10;
      }
      else {
        param_3 = 8;
      }
    }
    else {
      param_3 = 10;
    }
  }
  if (((param_3 == 0x10) && (local_15 == '0')) && ((*local_8 == 'x' || (*local_8 == 'X')))) {
    local_15 = local_8[1];
    local_8 = local_8 + 2;
  }
  uVar3 = (uint)(0xffffffff / (ulonglong)param_3);
  do {
    iVar4 = __chvalidator(local_15,4);
    if (iVar4 == 0) {
      iVar4 = __chvalidator(local_15,0x103);
      if (iVar4 == 0) {
LAB_0085e9d5:
        local_8 = local_8 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (undefined4 *)0x0) {
            local_8 = param_1;
          }
          local_1c = 0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && (0x80000000 < local_1c)) ||
                  (((param_4 & 2) == 0 && (0x7fffffff < local_1c)))))))) {
          puVar5 = (undefined4 *)FUN_007cb270();
          *puVar5 = 0x22;
          if ((param_4 & 1) == 0) {
            if ((param_4 & 2) == 0) {
              local_1c = 0x7fffffff;
            }
            else {
              local_1c = 0x80000000;
            }
          }
          else {
            local_1c = 0xffffffff;
          }
        }
        if (param_2 != (undefined4 *)0x0) {
          *param_2 = local_8;
        }
        if ((param_4 & 2) == 0) {
          return local_1c;
        }
        return -local_1c;
      }
      if ((local_15 < 'a') || ('z' < local_15)) {
        local_24 = (int)local_15;
      }
      else {
        local_24 = local_15 + -0x20;
      }
      local_10 = local_24 - 0x37;
    }
    else {
      local_10 = (int)local_15 - 0x30;
    }
    if (param_3 <= local_10) goto LAB_0085e9d5;
    if ((local_1c < uVar3) ||
       ((local_1c == uVar3 && (local_10 <= (uint)(0xffffffff % (ulonglong)param_3))))) {
      local_1c = local_1c * param_3 + local_10;
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
    }
    local_15 = *local_8;
    local_8 = local_8 + 1;
  } while( true );
}

