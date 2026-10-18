/* speed.exe 007d1390 __output; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls 007d2200 write_multi_char
 * calls 007d2160 write_char
 * calls 007ded80 __fptrap
 * calls 007d22f0 get_short_arg
 * calls 007dcb40 __aulldiv
 * calls 007dcac0 __aullrem
 * calls 007d2670 __CrtDbgReport
 * calls 007d22d0 get_int64_arg
 * calls 007c7290 __free_dbg
 * calls 007d2240 write_string
 * calls 007df050 _wctomb
 * calls 007d22b0 get_int_arg
 * calls 007d0cd0 _strlen
 * calls 007c6700 __malloc_dbg
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    __output
   
   Library: Visual Studio 2003 Debug */

int __output(undefined4 param_1,byte *param_2,undefined4 *param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  short sVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  size_t sVar7;
  wchar_t *pwVar8;
  bool bVar9;
  ulonglong uVar10;
  longlong lVar11;
  int local_2bc;
  uint local_2a8;
  char local_2a4 [8];
  int local_29c;
  size_t local_298;
  wchar_t *local_294;
  int local_290;
  undefined8 local_28c;
  undefined8 local_284;
  int local_278;
  undefined4 local_274;
  undefined4 local_270;
  int *local_26c;
  wchar_t *local_268;
  int local_264;
  wchar_t *local_260;
  short *local_25c;
  undefined2 local_258;
  int local_254;
  int local_250;
  wchar_t local_24c;
  byte local_245;
  uint local_244;
  int local_240;
  wchar_t local_23c [255];
  wchar_t awStack_3d [2];
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  size_t local_28;
  wchar_t *local_24;
  int local_20;
  int local_1c;
  undefined1 local_18;
  char local_17;
  uint local_14;
  int local_10;
  int local_c;
  wchar_t *local_8;
  
  local_38 = DAT_00906980;
  local_28 = 0;
  local_240 = 0;
  local_250 = 0;
  local_24 = (wchar_t *)0x0;
  pbVar4 = param_2;
  do {
    param_2 = pbVar4;
    local_245 = *param_2;
    pbVar4 = param_2 + 1;
    if ((local_245 == 0) || (local_240 < 0)) {
      return local_240;
    }
    if (((char)local_245 < ' ') || ('x' < (char)local_245)) {
      local_2a8 = 0;
    }
    else {
      local_2a8 = (int)"buf.c"[(char)local_245] & 0xf;
    }
    local_244 = local_2a8;
    local_250 = (int)(char)(&DAT_008bcc50)[local_2a8 * 8 + local_250] >> 4;
    switch(local_250) {
    case 0:
switchD_007d1476_caseD_0:
      local_10 = 0;
      if ((*(ushort *)(PTR_DAT_00907294 + (uint)local_245 * 2) & 0x8000) != 0) {
        write_char(CONCAT11((char)(*(ushort *)(PTR_DAT_00907294 + (uint)local_245 * 2) >> 8),
                            local_245) & 0x80ff,param_1,&local_240);
        local_245 = *pbVar4;
        pbVar4 = param_2 + 2;
        if (local_245 == 0) {
          iVar5 = __CrtDbgReport(2,"output.c",0x192,0,"ch != _T(\'\\0\')");
          if (iVar5 == 1) {
            pcVar1 = (code *)swi(3);
            iVar5 = (*pcVar1)();
            return iVar5;
          }
        }
      }
      param_2 = pbVar4;
      write_char(local_245,param_1,&local_240);
      pbVar4 = param_2;
      break;
    case 1:
      local_30 = 0;
      local_2c = 0;
      local_1c = 0;
      local_20 = 0;
      local_14 = 0;
      local_34 = -1;
      local_10 = 0;
      break;
    case 2:
      switch(local_245) {
      case 0x20:
        local_14 = local_14 | 2;
        break;
      case 0x23:
        local_14 = local_14 | 0x80;
        break;
      case 0x2b:
        local_14 = local_14 | 1;
        break;
      case 0x2d:
        local_14 = local_14 | 4;
        break;
      case 0x30:
        local_14 = local_14 | 8;
      }
      break;
    case 3:
      if (local_245 == 0x2a) {
        local_1c = get_int_arg(&param_3);
        if (local_1c < 0) {
          local_14 = local_14 | 4;
          local_1c = -local_1c;
        }
      }
      else {
        local_1c = local_1c * 10 + -0x30 + (int)(char)local_245;
      }
      break;
    case 4:
      local_34 = 0;
      break;
    case 5:
      if (local_245 == 0x2a) {
        local_34 = get_int_arg(&param_3);
        if (local_34 < 0) {
          local_34 = -1;
        }
      }
      else {
        local_34 = local_34 * 10 + -0x30 + (int)(char)local_245;
      }
      break;
    case 6:
      switch(local_245) {
      case 0x49:
        if ((*pbVar4 == 0x36) && (param_2[2] == 0x34)) {
          local_14 = local_14 | 0x8000;
          pbVar4 = param_2 + 3;
        }
        else if ((*pbVar4 == 0x33) && (param_2[2] == 0x32)) {
          local_14 = local_14 & 0xffff7fff;
          pbVar4 = param_2 + 3;
        }
        else if (((((*pbVar4 != 100) && (*pbVar4 != 0x69)) && (*pbVar4 != 0x6f)) &&
                 ((*pbVar4 != 0x75 && (*pbVar4 != 0x78)))) && (*pbVar4 != 0x58)) {
          local_250 = 0;
          goto switchD_007d1476_caseD_0;
        }
        break;
      case 0x68:
        local_14 = local_14 | 0x20;
        break;
      case 0x6c:
        local_14 = local_14 | 0x10;
        break;
      case 0x77:
        local_14 = local_14 | 0x800;
      }
      param_2 = pbVar4;
      pbVar4 = param_2;
      break;
    case 7:
      pwVar8 = local_8;
      switch(local_245) {
      case 0x43:
        if ((local_14 & 0x830) == 0) {
          local_14 = local_14 | 0x800;
        }
      case 99:
        if ((local_14 & 0x810) == 0) {
          local_258 = get_int_arg(&param_3);
          local_23c[0]._0_1_ = (char)local_258;
          local_28 = 1;
        }
        else {
          local_24c = get_short_arg(&param_3);
          local_28 = _wctomb((char *)local_23c,local_24c);
          if ((int)local_28 < 0) {
            local_2c = 1;
          }
        }
        pwVar8 = local_23c;
        break;
      case 0x45:
      case 0x47:
        local_30 = 1;
        local_245 = local_245 + 0x20;
      case 0x65:
      case 0x66:
      case 0x67:
        local_14 = local_14 | 0x40;
        local_8 = local_23c;
        if (local_34 < 0) {
          local_34 = 6;
        }
        else if ((local_34 == 0) && (local_245 == 0x67)) {
          local_34 = 1;
        }
        else if (0x200 < local_34) {
          local_34 = 0x200;
        }
        pwVar8 = local_8;
        if (0xa3 < local_34) {
          local_24 = (wchar_t *)__malloc_dbg(local_34 + 0x15d,2,"output.c",0x300);
          pwVar8 = local_24;
          if (local_24 == (wchar_t *)0x0) {
            local_34 = 0xa3;
            pwVar8 = local_8;
          }
        }
        local_8 = pwVar8;
        local_274 = *param_3;
        local_270 = param_3[1];
        param_3 = param_3 + 2;
        (*(code *)PTR___fptrap_009068d0)(&local_274,local_8,(int)(char)local_245,local_34,local_30);
        if (((local_14 & 0x80) != 0) && (local_34 == 0)) {
          (*(code *)PTR___fptrap_009068dc)(local_8);
        }
        if ((local_245 == 0x67) && ((local_14 & 0x80) == 0)) {
          (*(code *)PTR___fptrap_009068d4)(local_8);
        }
        if ((char)*local_8 == '-') {
          local_14 = local_14 | 0x100;
          local_8 = (wchar_t *)((int)local_8 + 1);
        }
        local_28 = _strlen((char *)local_8);
        pwVar8 = local_8;
        break;
      case 0x53:
        if ((local_14 & 0x830) == 0) {
          local_14 = local_14 | 0x800;
        }
      case 0x73:
        if (local_34 == -1) {
          local_2bc = 0x7fffffff;
        }
        else {
          local_2bc = local_34;
        }
        local_264 = local_2bc;
        local_8 = (wchar_t *)get_int_arg(&param_3);
        if ((local_14 & 0x810) == 0) {
          if (local_8 == (wchar_t *)0x0) {
            local_8 = (wchar_t *)PTR_DAT_00906ab0;
          }
          for (local_260 = local_8; (local_264 != 0 && ((char)*local_260 != '\0'));
              local_260 = (wchar_t *)((int)local_260 + 1)) {
            local_264 = local_264 + -1;
          }
          local_28 = (int)local_260 - (int)local_8;
          local_264 = local_264 + -1;
          pwVar8 = local_8;
        }
        else {
          if (local_8 == (wchar_t *)0x0) {
            local_8 = (wchar_t *)PTR_DAT_00906ab4;
          }
          local_10 = 1;
          for (local_268 = local_8; (local_264 != 0 && (*local_268 != L'\0'));
              local_268 = local_268 + 1) {
            local_264 = local_264 + -1;
          }
          local_28 = (int)local_268 - (int)local_8 >> 1;
          local_264 = local_264 + -1;
          pwVar8 = local_8;
        }
        break;
      case 0x5a:
        local_25c = (short *)get_int_arg(&param_3);
        if ((local_25c == (short *)0x0) || (*(int *)(local_25c + 2) == 0)) {
          local_8 = (wchar_t *)PTR_DAT_00906ab0;
          local_28 = _strlen(PTR_DAT_00906ab0);
          pwVar8 = local_8;
        }
        else if ((local_14 & 0x800) == 0) {
          local_10 = 0;
          local_28 = (size_t)*local_25c;
          pwVar8 = *(wchar_t **)(local_25c + 2);
        }
        else {
          local_28 = (int)*local_25c / 2;
          local_10 = 1;
          pwVar8 = *(wchar_t **)(local_25c + 2);
        }
        break;
      case 100:
      case 0x69:
        local_14 = local_14 | 0x40;
        local_c = 10;
        goto LAB_007d1c14;
      case 0x6e:
        local_26c = (int *)get_int_arg(&param_3);
        if ((local_14 & 0x20) == 0) {
          *local_26c = local_240;
        }
        else {
          *(undefined2 *)local_26c = (undefined2)local_240;
        }
        local_2c = 1;
        pwVar8 = local_8;
        break;
      case 0x6f:
        local_c = 8;
        if ((local_14 & 0x80) != 0) {
          local_14 = local_14 | 0x200;
        }
        goto LAB_007d1c14;
      case 0x70:
        local_34 = 8;
      case 0x58:
        local_254 = 7;
        goto LAB_007d1bcd;
      case 0x75:
        local_c = 10;
        goto LAB_007d1c14;
      case 0x78:
        local_254 = 0x27;
LAB_007d1bcd:
        local_c = 0x10;
        if ((local_14 & 0x80) != 0) {
          local_18 = 0x30;
          local_17 = (char)local_254 + 'Q';
          local_20 = 2;
        }
LAB_007d1c14:
        if ((local_14 & 0x8000) == 0) {
          if ((local_14 & 0x20) == 0) {
            if ((local_14 & 0x40) == 0) {
              uVar6 = get_int_arg(&param_3);
              uVar10 = (ulonglong)uVar6;
            }
            else {
              iVar5 = get_int_arg(&param_3);
              uVar10 = (ulonglong)iVar5;
            }
          }
          else if ((local_14 & 0x40) == 0) {
            uVar6 = get_int_arg(&param_3);
            uVar10 = (ulonglong)(uVar6 & 0xffff);
          }
          else {
            sVar3 = get_int_arg(&param_3);
            uVar10 = (ulonglong)(int)sVar3;
          }
        }
        else {
          uVar10 = get_int64_arg(&param_3);
        }
        local_284._4_4_ = (int)(uVar10 >> 0x20);
        local_284._0_4_ = (int)uVar10;
        uVar2 = uVar10;
        if ((((local_14 & 0x40) != 0) && ((longlong)uVar10 < 0x100000000)) && ((longlong)uVar10 < 0)
           ) {
          local_14 = local_14 | 0x100;
          uVar2 = CONCAT44(-(local_284._4_4_ + (uint)((int)local_284 != 0)),-(int)local_284);
        }
        local_28c._4_4_ = (int)(uVar2 >> 0x20);
        local_28c._0_4_ = (int)uVar2;
        if ((local_14 & 0x8000) == 0) {
          local_28c._4_4_ = 0;
        }
        lVar11 = CONCAT44(local_28c._4_4_,(int)local_28c);
        if (local_34 < 0) {
          local_34 = 1;
        }
        else {
          local_14 = local_14 & 0xfffffff7;
          if (0x200 < local_34) {
            local_34 = 0x200;
          }
        }
        if ((int)local_28c == 0 && local_28c._4_4_ == 0) {
          local_20 = 0;
        }
        local_8 = awStack_3d;
        local_284 = uVar10;
        while ((iVar5 = local_34 + -1, 0 < local_34 || (lVar11 != 0))) {
          local_34 = iVar5;
          local_28c = lVar11;
          local_278 = __aullrem(lVar11,local_c,local_c >> 0x1f);
          local_278 = local_278 + 0x30;
          lVar11 = __aulldiv(local_28c,local_c,local_c >> 0x1f);
          if (0x39 < local_278) {
            local_278 = local_278 + local_254;
          }
          *(char *)local_8 = (char)local_278;
          local_8 = (wchar_t *)((int)local_8 + -1);
        }
        local_28 = (int)awStack_3d - (int)local_8;
        pwVar8 = (wchar_t *)((int)local_8 + 1);
        local_28c = 0;
        local_34 = iVar5;
        if (((local_14 & 0x200) != 0) && ((*(char *)pwVar8 != '0' || (local_28 == 0)))) {
          *(char *)local_8 = '0';
          local_28 = local_28 + 1;
          pwVar8 = local_8;
        }
      }
      local_8 = pwVar8;
      if (local_2c == 0) {
        if ((local_14 & 0x40) != 0) {
          if ((local_14 & 0x100) == 0) {
            if ((local_14 & 1) == 0) {
              if ((local_14 & 2) != 0) {
                local_18 = 0x20;
                local_20 = 1;
              }
            }
            else {
              local_18 = 0x2b;
              local_20 = 1;
            }
          }
          else {
            local_18 = 0x2d;
            local_20 = 1;
          }
        }
        local_290 = (local_1c - local_28) - local_20;
        if ((local_14 & 0xc) == 0) {
          write_multi_char(0x20,local_290,param_1,&local_240);
        }
        write_string(&local_18,local_20,param_1,&local_240);
        if (((local_14 & 8) != 0) && ((local_14 & 4) == 0)) {
          write_multi_char(0x30,local_290,param_1,&local_240);
        }
        if ((local_10 == 0) || ((int)local_28 < 1)) {
          write_string(local_8,local_28,param_1,&local_240);
        }
        else {
          local_294 = local_8;
          local_298 = local_28;
          while (sVar7 = local_298 - 1, bVar9 = local_298 != 0, local_298 = sVar7, bVar9) {
            local_29c = _wctomb(local_2a4,*local_294);
            local_294 = local_294 + 1;
            if (local_29c < 1) break;
            write_string(local_2a4,local_29c,param_1,&local_240);
          }
        }
        if ((local_14 & 4) != 0) {
          write_multi_char(0x20,local_290,param_1,&local_240);
        }
      }
      if (local_24 != (wchar_t *)0x0) {
        __free_dbg(local_24,2);
        local_24 = (wchar_t *)0x0;
      }
    }
  } while( true );
}

