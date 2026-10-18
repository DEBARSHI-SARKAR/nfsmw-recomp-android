/* speed.exe 007e05d0 __store_winword; analysis pseudocode, not buildable source.
 * calls 007c7290 __free_dbg
 * calls 007dfe40 __expandtime
 * calls 007c94b0 __chkstk
 * calls EXTERNAL:00000085 GetDateFormatA
 * calls 007c6700 __malloc_dbg
 * calls 007d2670 __CrtDbgReport
 * calls 007e6380 ___ascii_stricmp
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* Library Function - Single Match
    __store_winword
   
   Library: Visual Studio 2003 Debug */

undefined4
__store_winword(int param_1,int param_2,undefined2 *param_3,int *param_4,uint *param_5,int param_6)

{
  code *pcVar1;
  bool bVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *local_54;
  code *local_4c;
  short local_48;
  short local_46;
  undefined2 local_42;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  int local_38;
  undefined4 local_34;
  char local_2d;
  byte *local_2c;
  byte *local_28;
  uint local_24;
  byte *local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_008be078;
  puStack_10 = &LAB_007cd5e4;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff78;
  if (param_2 == 0) {
    local_28 = *(byte **)(param_6 + 0xa0);
  }
  else if (param_2 == 1) {
    local_28 = *(byte **)(param_6 + 0xa4);
  }
  else {
    local_28 = *(byte **)(param_6 + 0xa8);
  }
  ExceptionList = &local_14;
  pbVar3 = local_28;
  puVar4 = &stack0xffffff78;
  if (*(int *)(param_6 + 0xb0) != 1) {
    if (param_2 == 2) {
      local_4c = GetTimeFormatA_exref;
    }
    else {
      local_4c = GetDateFormatA_exref;
    }
    local_48 = (short)*(undefined4 *)(param_3 + 10) + 0x76c;
    local_46 = (short)*(undefined4 *)(param_3 + 8) + 1;
    local_42 = param_3[6];
    local_40 = param_3[4];
    local_3e = param_3[2];
    local_3c = *param_3;
    local_3a = 0;
    ExceptionList = &local_14;
    local_38 = (*local_4c)(*(undefined4 *)(param_6 + 0xac),0,&local_48,local_28,0,0);
    pbVar3 = local_28;
    puVar4 = local_1c;
    if (local_38 != 0) {
      bVar2 = false;
      local_54 = &stack0xffffff78;
      local_1c = &stack0xffffff78;
      local_8 = 0xffffffff;
      puVar4 = &stack0xffffff78;
      if ((&stack0x00000000 == (undefined1 *)0x88) &&
         (local_54 = (undefined1 *)__malloc_dbg(local_38,2,"strftime.c",0x3c8), puVar4 = local_1c,
         local_54 != (undefined1 *)0x0)) {
        bVar2 = true;
      }
      local_1c = puVar4;
      pbVar3 = local_28;
      puVar4 = local_1c;
      if (local_54 != (undefined1 *)0x0) {
        local_38 = (*local_4c)(*(undefined4 *)(param_6 + 0xac),0,&local_48,local_28,local_54,
                               local_38);
        local_20 = local_54;
        while ((local_38 = local_38 + -1, 0 < local_38 && (*param_5 != 0))) {
          *(byte *)*param_4 = *local_20;
          *param_4 = *param_4 + 1;
          local_20 = local_20 + 1;
          *param_5 = *param_5 - 1;
        }
        if (bVar2) {
          __free_dbg(local_54,2);
        }
        ExceptionList = local_14;
        return 1;
      }
    }
  }
LAB_007e07e4:
  do {
    local_1c = puVar4;
    local_28 = pbVar3;
    if ((*local_28 == 0) || (*param_5 == 0)) {
      ExceptionList = local_14;
      return 1;
    }
    local_2d = '\0';
    local_34 = 0;
    local_24 = 0;
    local_20 = local_28;
    while (*local_20 == *local_28) {
      local_24 = local_24 + 1;
      local_20 = local_20 + 1;
    }
    puVar4 = local_1c;
    switch(*local_28) {
    case 0x27:
      if ((local_24 & 1) == 0) {
        pbVar3 = local_28 + local_24;
      }
      else {
        local_28 = local_28 + local_24;
        while( true ) {
          pbVar3 = local_28;
          if ((*local_28 == 0) || (*param_5 == 0)) goto LAB_007e07e4;
          if (*local_28 == 0x27) break;
          if (((*(ushort *)(*(int *)(param_1 + 0x48) + (uint)*local_28 * 2) & 0x8000) != 0) &&
             (1 < *param_5)) {
            if (local_28[1] == 0) {
              iVar5 = __CrtDbgReport(2,"strftime.c",0x472,0,
                                     "(\"Invalid MBCS character sequence passed into strftime\",0)")
              ;
              if (iVar5 != 1) {
                ExceptionList = local_14;
                return 0;
              }
              pcVar1 = (code *)swi(3);
              uVar6 = (*pcVar1)();
              return uVar6;
            }
            *(byte *)*param_4 = *local_28;
            *param_4 = *param_4 + 1;
            local_28 = local_28 + 1;
            *param_5 = *param_5 - 1;
          }
          *(byte *)*param_4 = *local_28;
          *param_4 = *param_4 + 1;
          local_28 = local_28 + 1;
          *param_5 = *param_5 - 1;
        }
        pbVar3 = local_28 + 1;
      }
      goto LAB_007e07e4;
    case 0x41:
    case 0x61:
      iVar5 = ___ascii_stricmp((char *)local_28,"am/pm");
      if (iVar5 == 0) {
        local_20 = local_28 + 5;
      }
      else {
        iVar5 = ___ascii_stricmp((char *)local_28,(char *)&PTR_LAB_008be06c);
        if (iVar5 == 0) {
          local_20 = local_28 + 3;
        }
      }
      local_2d = 'p';
      break;
    case 0x48:
      if (local_24 == 1) {
        local_34 = 1;
      }
      else if (local_24 != 2) break;
      local_2d = 'H';
      break;
    case 0x4d:
      switch(local_24) {
      case 1:
        local_34 = 1;
      case 2:
        local_2d = 'm';
        break;
      case 3:
        local_2d = 'b';
        break;
      case 4:
        local_2d = 'B';
      }
      break;
    case 100:
      switch(local_24) {
      case 1:
        local_34 = 1;
      case 2:
        local_2d = 'd';
        break;
      case 3:
        local_2d = 'a';
        break;
      case 4:
        local_2d = 'A';
      }
      break;
    case 0x68:
      if (local_24 == 1) {
        local_34 = 1;
      }
      else if (local_24 != 2) break;
      local_2d = 'I';
      break;
    case 0x6d:
      if (local_24 == 1) {
        local_34 = 1;
      }
      else if (local_24 != 2) break;
      local_2d = 'M';
      break;
    case 0x73:
      if (local_24 == 1) {
        local_34 = 1;
      }
      else if (local_24 != 2) break;
      local_2d = 'S';
      break;
    case 0x74:
      goto switchD_007e086b_caseD_74;
    case 0x79:
      if (local_24 == 2) {
        local_2d = 'y';
      }
      else if (local_24 == 4) {
        local_2d = 'Y';
      }
    }
    if (local_2d == '\0') {
      if (((*(ushort *)(*(int *)(param_1 + 0x48) + (uint)*local_28 * 2) & 0x8000) != 0) &&
         (1 < *param_5)) {
        if (local_28[1] == 0) {
          iVar5 = __CrtDbgReport(2,"strftime.c",0x49f,0,
                                 "(\"Invalid MBCS character sequence passed into strftime\",0)");
          if (iVar5 != 1) {
            ExceptionList = local_14;
            return 0;
          }
          pcVar1 = (code *)swi(3);
          uVar6 = (*pcVar1)();
          return uVar6;
        }
        *(byte *)*param_4 = *local_28;
        *param_4 = *param_4 + 1;
        local_28 = local_28 + 1;
        *param_5 = *param_5 - 1;
      }
      *(byte *)*param_4 = *local_28;
      *param_4 = *param_4 + 1;
      *param_5 = *param_5 - 1;
      pbVar3 = local_28 + 1;
      puVar4 = local_1c;
    }
    else {
      iVar5 = __expandtime(param_1,local_2d,param_3,param_4,param_5,param_6,local_34);
      if (iVar5 == 0) {
        ExceptionList = local_14;
        return 0;
      }
      local_28 = local_20;
      pbVar3 = local_28;
      puVar4 = local_1c;
    }
  } while( true );
switchD_007e086b_caseD_74:
  if (*(int *)(param_3 + 4) < 0xc) {
    local_2c = *(byte **)(param_6 + 0x98);
  }
  else {
    local_2c = *(byte **)(param_6 + 0x9c);
  }
  pbVar3 = local_20;
  if ((local_24 == 1) && (*param_5 != 0)) {
    if (((*(ushort *)(*(int *)(param_1 + 0x48) + (uint)*local_2c * 2) & 0x8000) != 0) &&
       (1 < *param_5)) {
      if (local_2c[1] == 0) {
        iVar5 = __CrtDbgReport(2,"strftime.c",0x438,0,
                               "(\"Invalid MBCS character sequence found in locale AMPM string\",0)"
                              );
        if (iVar5 != 1) {
          ExceptionList = local_14;
          return 0;
        }
        pcVar1 = (code *)swi(3);
        uVar6 = (*pcVar1)();
        return uVar6;
      }
      *(byte *)*param_4 = *local_2c;
      *param_4 = *param_4 + 1;
      local_2c = local_2c + 1;
      *param_5 = *param_5 - 1;
    }
    *(byte *)*param_4 = *local_2c;
    *param_4 = *param_4 + 1;
    local_2c = local_2c + 1;
    *param_5 = *param_5 - 1;
  }
  else {
    while ((*local_2c != 0 && (*param_5 != 0))) {
      if (((*(ushort *)(*(int *)(param_1 + 0x48) + (uint)*local_2c * 2) & 0x8000) != 0) &&
         (1 < *param_5)) {
        if (local_2c[1] == 0) {
          iVar5 = __CrtDbgReport(2,"strftime.c",0x44f,0,
                                 "(\"Invalid MBCS character sequence found in locale AMPM string\",0)"
                                );
          if (iVar5 != 1) {
            ExceptionList = local_14;
            return 0;
          }
          pcVar1 = (code *)swi(3);
          uVar6 = (*pcVar1)();
          return uVar6;
        }
        *(byte *)*param_4 = *local_2c;
        *param_4 = *param_4 + 1;
        local_2c = local_2c + 1;
        *param_5 = *param_5 - 1;
      }
      *(byte *)*param_4 = *local_2c;
      *param_4 = *param_4 + 1;
      local_2c = local_2c + 1;
      *param_5 = *param_5 - 1;
    }
  }
  goto LAB_007e07e4;
}

