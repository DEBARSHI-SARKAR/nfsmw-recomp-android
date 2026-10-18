/* speed.exe 007e4e00 ___strgtold12; analysis pseudocode, not buildable source.
 * calls 007e5d50 ___mtold12
 * calls 007d6cb0 __security_check_cookie
 * calls 007e6e60 ___multtenpow12
 * calls 007ca7e0 _isdigit
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    ___strgtold12
   
   Library: Visual Studio 2003 Debug */

uint __cdecl
___strgtold12(_LDBL12 *pld12,char **p_end_ptr,char *str,int mult12,int scale,int decpt,
             int implicit_E)

{
  int iVar1;
  byte *pbVar2;
  int local_84;
  undefined2 local_80;
  undefined4 local_7e;
  undefined4 local_7a;
  ushort local_76;
  int local_74;
  int local_70;
  byte local_69;
  char *local_68;
  ushort local_64;
  byte *local_60;
  char local_5c [23];
  char local_45;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  undefined4 local_2c;
  uint local_28;
  int local_24;
  undefined2 local_20;
  ushort local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  byte *local_8;
  
  local_40 = DAT_00906980;
  local_68 = local_5c;
  local_64 = 0;
  local_3c = 1;
  local_30 = 0;
  local_18 = 0;
  local_74 = 0;
  local_34 = 0;
  local_24 = 0;
  local_38 = 0;
  local_c = 0;
  local_14 = 0;
  local_28 = 0;
  local_70 = 0;
  local_60 = (byte *)str;
  for (local_8 = (byte *)str;
      (((*local_8 == 0x20 || (*local_8 == 9)) || (*local_8 == 10)) || (*local_8 == 0xd));
      local_8 = local_8 + 1) {
  }
  do {
    if (local_70 == 10) {
      *p_end_ptr = (char *)local_8;
      if (((local_18 != 0) && (local_24 == 0)) && (local_38 == 0)) {
        if (0x18 < local_30) {
          if ('\x04' < local_45) {
            local_45 = local_45 + '\x01';
          }
          local_30 = 0x18;
          local_68 = local_68 + -1;
          local_14 = local_14 + 1;
        }
        if (local_30 == 0) {
          local_20 = 0;
          local_1c = 0;
          local_2c = 0;
          local_10 = local_2c;
        }
        else {
          while (local_68 = local_68 + -1, *local_68 == '\0') {
            local_30 = local_30 - 1;
            local_14 = local_14 + 1;
          }
          ___mtold12(local_5c,local_30,&local_80);
          if (local_3c < 0) {
            local_c = -local_c;
          }
          local_c = local_c + local_14;
          if (local_34 == 0) {
            local_c = local_c + scale;
          }
          if (local_74 == 0) {
            local_c = local_c - decpt;
          }
          if (local_c < 0x1451) {
            if (local_c < -0x1450) {
              local_38 = 1;
            }
            else {
              ___multtenpow12(&local_80,local_c,mult12);
              local_20 = local_80;
              local_10 = local_7e;
              local_2c = local_7a;
              local_1c = local_76;
            }
          }
          else {
            local_24 = 1;
          }
        }
      }
      if (local_18 == 0) {
        local_20 = 0;
        local_1c = 0;
        local_2c = 0;
        local_28 = local_28 | 4;
        local_10 = local_2c;
      }
      else if (local_24 == 0) {
        if (local_38 != 0) {
          local_20 = 0;
          local_1c = 0;
          local_2c = 0;
          local_10 = 0;
          local_28 = local_28 | 1;
        }
      }
      else {
        local_1c = 0x7fff;
        local_2c = 0x80000000;
        local_10 = 0;
        local_20 = 0;
        local_28 = local_28 | 2;
      }
      *(undefined2 *)pld12->ld12 = local_20;
      *(undefined4 *)(pld12->ld12 + 2) = local_10;
      *(undefined4 *)(pld12->ld12 + 6) = local_2c;
      *(ushort *)(pld12->ld12 + 10) = local_1c | local_64;
      return local_28;
    }
    local_69 = *local_8;
    pbVar2 = local_8 + 1;
    switch(local_70) {
    case 0:
      if (((char)local_69 < '1') || ('9' < (char)local_69)) {
        if (local_69 == DAT_0090725c) {
          local_70 = 5;
        }
        else if (local_69 == 0x2b) {
          local_70 = 2;
          local_64 = 0;
        }
        else if (local_69 == 0x2d) {
          local_70 = 2;
          local_64 = 0x8000;
        }
        else if (local_69 == 0x30) {
          local_70 = 1;
        }
        else {
          local_70 = 10;
          pbVar2 = local_8;
        }
      }
      else {
        local_70 = 3;
        pbVar2 = local_8;
      }
      break;
    case 1:
      local_18 = 1;
      if (((char)local_69 < '1') || ('9' < (char)local_69)) {
        if (local_69 == DAT_0090725c) {
          local_70 = 4;
        }
        else {
          switch(local_69) {
          case 0x2b:
          case 0x2d:
            local_70 = 0xb;
            pbVar2 = local_8;
            break;
          default:
            local_70 = 10;
            pbVar2 = local_8;
            break;
          case 0x30:
            local_70 = 1;
            break;
          case 0x44:
          case 0x45:
          case 100:
          case 0x65:
            local_70 = 6;
          }
        }
      }
      else {
        local_70 = 3;
        pbVar2 = local_8;
      }
      break;
    case 2:
      if (((char)local_69 < '1') || ('9' < (char)local_69)) {
        if (local_69 == DAT_0090725c) {
          local_70 = 5;
        }
        else if (local_69 == 0x30) {
          local_70 = 1;
        }
        else {
          local_70 = 10;
          local_8 = local_60;
          pbVar2 = local_8;
        }
      }
      else {
        local_70 = 3;
        pbVar2 = local_8;
      }
      break;
    case 3:
      local_18 = 1;
      local_8 = pbVar2;
      while (iVar1 = _isdigit((uint)local_69), iVar1 != 0) {
        if (local_30 < 0x19) {
          local_30 = local_30 + 1;
          *local_68 = local_69 - 0x30;
          local_68 = local_68 + 1;
        }
        else {
          local_14 = local_14 + 1;
        }
        local_69 = *local_8;
        local_8 = local_8 + 1;
      }
      pbVar2 = local_8;
      if (local_69 == DAT_0090725c) {
        local_70 = 4;
      }
      else {
        switch(local_69) {
        case 0x2b:
        case 0x2d:
          local_70 = 0xb;
          pbVar2 = local_8 + -1;
          break;
        default:
          local_70 = 10;
          pbVar2 = local_8 + -1;
          break;
        case 0x44:
        case 0x45:
        case 100:
        case 0x65:
          local_70 = 6;
        }
      }
      break;
    case 4:
      local_18 = 1;
      local_74 = 1;
      local_8 = pbVar2;
      if (local_30 == 0) {
        while (local_69 == 0x30) {
          local_14 = local_14 + -1;
          local_69 = *local_8;
          local_8 = local_8 + 1;
        }
      }
      while (iVar1 = _isdigit((uint)local_69), iVar1 != 0) {
        if (local_30 < 0x19) {
          local_30 = local_30 + 1;
          *local_68 = local_69 - 0x30;
          local_68 = local_68 + 1;
          local_14 = local_14 + -1;
        }
        local_69 = *local_8;
        local_8 = local_8 + 1;
      }
      switch(local_69) {
      case 0x2b:
      case 0x2d:
        local_70 = 0xb;
        pbVar2 = local_8 + -1;
        break;
      default:
        local_70 = 10;
        pbVar2 = local_8 + -1;
        break;
      case 0x44:
      case 0x45:
      case 100:
      case 0x65:
        local_70 = 6;
        pbVar2 = local_8;
      }
      break;
    case 5:
      local_74 = 1;
      local_8 = pbVar2;
      iVar1 = _isdigit((uint)local_69);
      if (iVar1 == 0) {
        local_70 = 10;
        local_8 = local_60;
        pbVar2 = local_8;
      }
      else {
        local_70 = 4;
        pbVar2 = local_8 + -1;
      }
      break;
    case 6:
      local_60 = local_8 + -1;
      if (((char)local_69 < '1') || ('9' < (char)local_69)) {
        if (local_69 == 0x2b) {
          local_70 = 7;
        }
        else if (local_69 == 0x2d) {
          local_70 = 7;
          local_3c = -1;
        }
        else if (local_69 == 0x30) {
          local_70 = 8;
        }
        else {
          local_70 = 10;
          pbVar2 = local_60;
        }
      }
      else {
        local_70 = 9;
        pbVar2 = local_8;
      }
      break;
    case 7:
      if (((char)local_69 < '1') || ('9' < (char)local_69)) {
        if (local_69 == 0x30) {
          local_70 = 8;
        }
        else {
          local_70 = 10;
          local_8 = local_60;
          pbVar2 = local_8;
        }
      }
      else {
        local_70 = 9;
        pbVar2 = local_8;
      }
      break;
    case 8:
      local_34 = 1;
      local_8 = pbVar2;
      while (local_69 == 0x30) {
        local_69 = *local_8;
        local_8 = local_8 + 1;
      }
      if (((char)local_69 < '1') || ('9' < (char)local_69)) {
        local_70 = 10;
      }
      else {
        local_70 = 9;
      }
      local_8 = local_8 + -1;
      pbVar2 = local_8;
      break;
    case 9:
      local_34 = 1;
      local_84 = 0;
      local_8 = pbVar2;
      while (iVar1 = _isdigit((uint)local_69), iVar1 != 0) {
        local_84 = local_84 * 10 + -0x30 + (int)(char)local_69;
        if (0x1450 < local_84) {
          local_84 = 0x1451;
          break;
        }
        local_69 = *local_8;
        local_8 = local_8 + 1;
      }
      local_c = local_84;
      while (iVar1 = _isdigit((uint)local_69), iVar1 != 0) {
        local_69 = *local_8;
        local_8 = local_8 + 1;
      }
      local_70 = 10;
      pbVar2 = local_8 + -1;
      break;
    case 0xb:
      if (implicit_E == 0) {
        local_70 = 10;
        pbVar2 = local_8;
      }
      else {
        local_60 = local_8;
        if (local_69 == 0x2b) {
          local_70 = 7;
        }
        else if (local_69 == 0x2d) {
          local_70 = 7;
          local_3c = -1;
        }
        else {
          local_70 = 10;
          pbVar2 = local_8;
        }
      }
    }
    local_8 = pbVar2;
  } while( true );
}

