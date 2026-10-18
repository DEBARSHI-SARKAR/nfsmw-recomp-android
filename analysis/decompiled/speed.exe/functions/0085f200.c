/* speed.exe 0085f200 __woutput; analysis pseudocode, not buildable source.
 * calls 0085ff80 write_char
 * calls 007d6cb0 __security_check_cookie
 * calls 007dcac0 __aullrem
 * calls 00860930 _mbtowc
 * calls 007c7290 __free_dbg
 * calls 007dcb40 __aulldiv
 * calls 007ded80 __fptrap
 * calls 00860020 write_string
 * calls 008600b0 get_int64_arg
 * calls 007d0cd0 _strlen
 * calls 007c6700 __malloc_dbg
 * calls 00860090 get_int_arg
 * calls 0085ffe0 write_multi_char
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    __woutput
   
   Library: Visual Studio 2003 Debug */

int __woutput(undefined4 param_1,ushort *param_2,undefined4 *param_3)

{
  wchar_t wVar1;
  short sVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  wchar_t *pwVar7;
  ulonglong uVar8;
  longlong lVar9;
  int local_4b4;
  uint local_4a0;
  size_t local_498;
  wchar_t *local_494;
  int local_48c;
  int local_488;
  int local_484;
  int local_480;
  int local_478;
  undefined4 local_474;
  undefined4 local_470;
  int *local_46c;
  wchar_t *local_468;
  int local_464;
  wchar_t *local_460;
  short *local_45c;
  char local_458 [4];
  int local_454;
  uint local_450;
  wchar_t local_44c [2];
  ushort local_448;
  uint local_444;
  int local_440;
  wchar_t local_43c [255];
  wchar_t local_23d [258];
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  size_t local_28;
  wchar_t *local_24;
  int local_20;
  int local_1c;
  undefined2 local_18;
  short local_16;
  uint local_14;
  int local_10;
  int local_c;
  wchar_t *local_8;
  
  local_38 = DAT_00906980;
  local_28 = 0;
  local_440 = 0;
  local_450 = 0;
  local_24 = (wchar_t *)0x0;
  puVar3 = param_2;
  do {
    param_2 = puVar3;
    local_448 = *param_2;
    puVar3 = param_2 + 1;
    if ((local_448 == 0) || (local_440 < 0)) {
      return local_440;
    }
    if ((local_448 < 0x20) || (0x78 < local_448)) {
      local_4a0 = 0;
    }
    else {
      local_4a0 = (int)"buf.c"[local_448] & 0xf;
    }
    local_444 = local_4a0;
    local_450 = (int)(char)(&DAT_008bcc50)[local_4a0 * 8 + local_450] >> 4;
    uVar4 = local_450;
    switch(local_450) {
    case 0:
switchD_0085f2e8_caseD_0:
      local_10 = 1;
      write_char(CONCAT22((short)(uVar4 >> 0x10),local_448),param_1,&local_440);
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
      switch(local_448) {
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
      if (local_448 == 0x2a) {
        local_1c = get_int_arg(&param_3);
        if (local_1c < 0) {
          local_14 = local_14 | 4;
          local_1c = -local_1c;
        }
      }
      else {
        local_1c = local_1c * 10 + -0x30 + (uint)local_448;
      }
      break;
    case 4:
      local_34 = 0;
      break;
    case 5:
      if (local_448 == 0x2a) {
        local_34 = get_int_arg(&param_3);
        if (local_34 < 0) {
          local_34 = -1;
        }
      }
      else {
        local_34 = local_34 * 10 + -0x30 + (uint)local_448;
      }
      break;
    case 6:
      switch(local_448) {
      case 0x49:
        if ((*puVar3 == 0x36) && (param_2[2] == 0x34)) {
          local_14 = local_14 | 0x8000;
          puVar3 = param_2 + 3;
        }
        else if ((*puVar3 == 0x33) && (param_2[2] == 0x32)) {
          local_14 = local_14 & 0xffff7fff;
          puVar3 = param_2 + 3;
        }
        else if (((((*puVar3 != 100) && (*puVar3 != 0x69)) && (*puVar3 != 0x6f)) &&
                 ((*puVar3 != 0x75 && (uVar4 = (uint)*puVar3, uVar4 != 0x78)))) && (*puVar3 != 0x58)
                ) {
          local_450 = 0;
          goto switchD_0085f2e8_caseD_0;
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
      param_2 = puVar3;
      puVar3 = param_2;
      break;
    case 7:
      pwVar7 = local_8;
      switch(local_448) {
      case 0x43:
        if ((local_14 & 0x830) == 0) {
          local_14 = local_14 | 0x20;
        }
      case 99:
        local_10 = 1;
        local_44c[0] = get_int_arg(&param_3);
        wVar1 = local_44c[0];
        if ((local_14 & 0x20) != 0) {
          local_458[0] = (char)local_44c[0];
          local_458[1] = 0;
          iVar6 = _mbtowc(local_43c,local_458,DAT_00907258);
          wVar1 = local_43c[0];
          if (iVar6 < 0) {
            local_2c = 1;
          }
        }
        local_43c[0] = wVar1;
        local_28 = 1;
        pwVar7 = local_43c;
        break;
      case 0x45:
      case 0x47:
        local_30 = 1;
        local_448 = local_448 + 0x20;
      case 0x65:
      case 0x66:
      case 0x67:
        local_14 = local_14 | 0x40;
        local_8 = local_43c;
        if (local_34 < 0) {
          local_34 = 6;
        }
        else if ((local_34 == 0) && (local_448 == 0x67)) {
          local_34 = 1;
        }
        else if (0x200 < local_34) {
          local_34 = 0x200;
        }
        pwVar7 = local_8;
        if ((0xa3 < local_34) &&
           (local_24 = (wchar_t *)
                       __malloc_dbg(local_34 + 0x15d,2,
                                    "f:\\vs70builds\\3077\\vc\\crtbld\\crt\\src\\output.c",0x300),
           pwVar7 = local_24, local_24 == (wchar_t *)0x0)) {
          local_34 = 0xa3;
          pwVar7 = local_8;
        }
        local_8 = pwVar7;
        local_474 = *param_3;
        local_470 = param_3[1];
        param_3 = param_3 + 2;
        (*(code *)PTR___fptrap_009068d0)(&local_474,local_8,(int)(char)local_448,local_34,local_30);
        if (((local_14 & 0x80) != 0) && (local_34 == 0)) {
          (*(code *)PTR___fptrap_009068dc)(local_8);
        }
        if ((local_448 == 0x67) && ((local_14 & 0x80) == 0)) {
          (*(code *)PTR___fptrap_009068d4)(local_8);
        }
        if ((byte)*local_8 == 0x2d) {
          local_14 = local_14 | 0x100;
          local_8 = (wchar_t *)((int)local_8 + 1);
        }
        local_28 = _strlen((char *)local_8);
        pwVar7 = local_8;
        break;
      case 0x53:
        if ((local_14 & 0x830) == 0) {
          local_14 = local_14 | 0x20;
        }
      case 0x73:
        if (local_34 == -1) {
          local_4b4 = 0x7fffffff;
        }
        else {
          local_4b4 = local_34;
        }
        local_464 = local_4b4;
        local_8 = (wchar_t *)get_int_arg(&param_3);
        if ((local_14 & 0x20) == 0) {
          if (local_8 == (wchar_t *)0x0) {
            local_8 = (wchar_t *)PTR_DAT_00906ab4;
          }
          local_10 = 1;
          for (local_468 = local_8; (local_464 != 0 && (*local_468 != L'\0'));
              local_468 = local_468 + 1) {
            local_464 = local_464 + -1;
          }
          local_28 = (int)local_468 - (int)local_8 >> 1;
          local_464 = local_464 + -1;
          pwVar7 = local_8;
        }
        else {
          if (local_8 == (wchar_t *)0x0) {
            local_8 = (wchar_t *)PTR_DAT_00906ab0;
          }
          local_28 = 0;
          for (local_460 = local_8;
              (pwVar7 = local_8, (int)local_28 < local_464 && ((byte)*local_460 != 0));
              local_460 = (wchar_t *)((int)local_460 + 1)) {
            if ((*(ushort *)(PTR_DAT_00907294 + (uint)(byte)*local_460 * 2) & 0x8000) != 0) {
              local_460 = (wchar_t *)((int)local_460 + 1);
            }
            local_28 = local_28 + 1;
          }
        }
        break;
      case 0x5a:
        local_45c = (short *)get_int_arg(&param_3);
        if ((local_45c == (short *)0x0) || (*(int *)(local_45c + 2) == 0)) {
          local_8 = (wchar_t *)PTR_DAT_00906ab0;
          local_28 = _strlen(PTR_DAT_00906ab0);
          pwVar7 = local_8;
        }
        else if ((local_14 & 0x800) == 0) {
          local_10 = 0;
          local_28 = (size_t)*local_45c;
          pwVar7 = *(wchar_t **)(local_45c + 2);
        }
        else {
          local_28 = (int)*local_45c / 2;
          local_10 = 1;
          pwVar7 = *(wchar_t **)(local_45c + 2);
        }
        break;
      case 100:
      case 0x69:
        local_14 = local_14 | 0x40;
        local_c = 10;
        goto LAB_0085fa3e;
      case 0x6e:
        local_46c = (int *)get_int_arg(&param_3);
        if ((local_14 & 0x20) == 0) {
          *local_46c = local_440;
        }
        else {
          *(undefined2 *)local_46c = (undefined2)local_440;
        }
        local_2c = 1;
        pwVar7 = local_8;
        break;
      case 0x6f:
        local_c = 8;
        if ((local_14 & 0x80) != 0) {
          local_14 = local_14 | 0x200;
        }
        goto LAB_0085fa3e;
      case 0x70:
        local_34 = 8;
      case 0x58:
        local_454 = 7;
        goto LAB_0085f9f4;
      case 0x75:
        local_c = 10;
        goto LAB_0085fa3e;
      case 0x78:
        local_454 = 0x27;
LAB_0085f9f4:
        local_c = 0x10;
        if ((local_14 & 0x80) != 0) {
          local_18 = 0x30;
          local_16 = (short)local_454 + 0x51;
          local_20 = 2;
        }
LAB_0085fa3e:
        if ((local_14 & 0x8000) == 0) {
          if ((local_14 & 0x20) == 0) {
            if ((local_14 & 0x40) == 0) {
              uVar4 = get_int_arg(&param_3);
              uVar8 = (ulonglong)uVar4;
            }
            else {
              iVar6 = get_int_arg(&param_3);
              uVar8 = (ulonglong)iVar6;
            }
          }
          else if ((local_14 & 0x40) == 0) {
            uVar4 = get_int_arg(&param_3);
            uVar8 = (ulonglong)(uVar4 & 0xffff);
          }
          else {
            sVar2 = get_int_arg(&param_3);
            uVar8 = (ulonglong)(int)sVar2;
          }
        }
        else {
          uVar8 = get_int64_arg(&param_3);
        }
        local_480 = (int)(uVar8 >> 0x20);
        local_484 = (int)uVar8;
        if ((((local_14 & 0x40) != 0) && ((longlong)uVar8 < 0x100000000)) && ((longlong)uVar8 < 0))
        {
          uVar8 = CONCAT44(-(local_480 + (uint)(local_484 != 0)),-local_484);
          local_14 = local_14 | 0x100;
        }
        local_488 = (int)(uVar8 >> 0x20);
        local_48c = (int)uVar8;
        if ((local_14 & 0x8000) == 0) {
          local_488 = 0;
        }
        lVar9 = CONCAT44(local_488,local_48c);
        if (local_34 < 0) {
          local_34 = 1;
        }
        else {
          local_14 = local_14 & 0xfffffff7;
          if (0x200 < local_34) {
            local_34 = 0x200;
          }
        }
        if (local_48c == 0 && local_488 == 0) {
          local_20 = 0;
        }
        local_8 = local_23d;
        while ((iVar6 = local_34 + -1, 0 < local_34 || (lVar9 != 0))) {
          local_34 = iVar6;
          local_478 = __aullrem(lVar9,local_c,local_c >> 0x1f);
          local_478 = local_478 + 0x30;
          lVar9 = __aulldiv(lVar9,local_c,local_c >> 0x1f);
          if (0x39 < local_478) {
            local_478 = local_478 + local_454;
          }
          *(byte *)local_8 = (byte)local_478;
          local_8 = (wchar_t *)((int)local_8 + -1);
        }
        local_28 = (int)local_23d - (int)local_8;
        pwVar7 = (wchar_t *)((int)local_8 + 1);
        local_34 = iVar6;
        if (((local_14 & 0x200) != 0) && ((*(byte *)pwVar7 != 0x30 || (local_28 == 0)))) {
          *(byte *)local_8 = 0x30;
          local_28 = local_28 + 1;
          pwVar7 = local_8;
        }
      }
      local_8 = pwVar7;
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
        iVar6 = (local_1c - local_28) - local_20;
        if ((local_14 & 0xc) == 0) {
          write_multi_char(0x20,iVar6,param_1,&local_440);
        }
        write_string(&local_18,local_20,param_1,&local_440);
        if (((local_14 & 8) != 0) && ((local_14 & 4) == 0)) {
          write_multi_char(0x30,iVar6,param_1,&local_440);
        }
        if ((local_10 == 0) && (0 < (int)local_28)) {
          local_494 = local_8;
          local_498 = local_28;
          while ((0 < (int)local_498 &&
                 (iVar5 = _mbtowc(local_44c,(char *)local_494,DAT_00907258), 0 < iVar5))) {
            write_char(local_44c[0],param_1,&local_440);
            local_494 = (wchar_t *)((int)local_494 + iVar5);
            local_498 = local_498 - 1;
          }
        }
        else {
          write_string(local_8,local_28,param_1,&local_440);
        }
        if ((local_14 & 4) != 0) {
          write_multi_char(0x20,iVar6,param_1,&local_440);
        }
      }
      if (local_24 != (wchar_t *)0x0) {
        __free_dbg(local_24,2);
        local_24 = (wchar_t *)0x0;
      }
    }
  } while( true );
}

