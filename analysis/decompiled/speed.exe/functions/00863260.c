/* speed.exe 00863260 FUN_00863260; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 * calls 0084af40 FUN_0084af40
 * calls 00863140 FUN_00863140
 * calls 007d6cb0 __security_check_cookie
 * calls 0084b350 FUN_0084b350
 * calls 0084ae70 FUN_0084ae70
 * calls 0084b110 FUN_0084b110
 * calls 007c6610 FUN_007c6610
 * calls 0084b000 FUN_0084b000
 * calls 00863230 FUN_00863230
 * calls 0084af90 FUN_0084af90
 * calls 0084b1e0 FUN_0084b1e0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __fastcall FUN_00863260(int *param_1)

{
  byte *pbVar1;
  char cVar2;
  char *pcVar3;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte bVar10;
  undefined2 local_114;
  undefined1 local_112;
  undefined1 uStack_111;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined1 local_104 [256];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  iVar6 = param_1[0x45];
  if ((((iVar6 != 0) && (iVar6 != 7)) && (iVar6 != 8)) &&
     (DVar4 = GetTickCount(), -1 < (int)(DVar4 - param_1[0x53]))) {
    param_1[0x45] = 8;
    param_1[0x54] = 1;
  }
  if ((param_1[0x45] == 1) && (iVar6 = param_1[1], iVar6 != 0)) {
    iVar5 = (**(code **)(iVar6 + 8))(iVar6);
    iVar6 = param_1[1];
    if (iVar5 < 0) {
      (**(code **)(iVar6 + 0xc))();
      param_1[0x45] = 8;
    }
    else {
      iVar6 = (**(code **)(iVar6 + 8))(iVar6);
      if (iVar6 < 1) goto LAB_008632f9;
      iVar6 = param_1[1];
      param_1[0x43] = *(int *)(iVar6 + 4);
      (**(code **)(iVar6 + 0xc))(iVar6);
    }
    param_1[1] = 0;
  }
LAB_008632f9:
  if ((param_1[0x45] == 1) && (param_1[0x43] != 0)) {
    if (*param_1 != 0) {
      FUN_0084af90(*param_1,2);
      FUN_0084af40(*param_1);
    }
    iVar6 = param_1[0x51];
    *param_1 = 0;
    param_1[0x51] = iVar6 + -1;
    if (iVar6 < 0) {
      param_1[0x45] = 8;
      return 0;
    }
    iVar6 = FUN_0084ae70(2,1,0);
    *param_1 = iVar6;
    if (iVar6 != 0) {
      iVar5 = param_1[0x43];
      local_110 = CONCAT31(CONCAT21(CONCAT11((char)iVar5,(char)((uint)iVar5 >> 8)),
                                    (char)((uint)iVar5 >> 0x10)),(char)((uint)iVar5 >> 0x18));
      local_114 = 2;
      local_10c = 0;
      local_108 = 0;
      _local_112 = CONCAT11((char)param_1[0x44],(char)((uint)param_1[0x44] >> 8));
      FUN_0084b000(iVar6,&local_114,0x10);
      param_1[0x4f] = 0;
      param_1[0x45] = 2;
      DVar4 = GetTickCount();
      param_1[0x53] = DVar4 + param_1[0x52];
    }
  }
  if ((param_1[0x45] == 2) && (iVar6 = FUN_0084b350(*param_1,0x73746174,0,0), 0 < iVar6)) {
    param_1[0x45] = 3;
  }
  if (param_1[0x45] == 3) {
    pcVar3 = (char *)param_1[0x4c];
    pcVar7 = pcVar3;
    do {
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    iVar6 = FUN_0084b110(*param_1,pcVar3,(int)pcVar7 - (int)(pcVar3 + 1),0,0,0);
    if (0 < iVar6) {
      DVar4 = GetTickCount();
      param_1[0x53] = DVar4 + param_1[0x52];
    }
    param_1[0x45] = 4;
  }
  if (param_1[0x45] == 4) {
    iVar6 = FUN_0084b1e0(*param_1,local_104,1,0,0,0);
    if (0 < iVar6) {
      DVar4 = GetTickCount();
      param_1[0x53] = DVar4 + param_1[0x52];
      *(undefined1 *)param_1[0x4c] = local_104[0];
      param_1[0x4f] = 1;
      param_1[0x45] = 5;
    }
    if (iVar6 < 0) {
      param_1[0x45] = 1;
      return 0;
    }
  }
  if (param_1[0x45] == 5) {
    iVar6 = FUN_0084b1e0(*param_1,param_1[0x4c] + param_1[0x4f],param_1[0x4d] - param_1[0x4f],0,0,0)
    ;
    if (0 < iVar6) {
      DVar4 = GetTickCount();
      param_1[0x53] = DVar4 + param_1[0x52];
    }
    if (iVar6 < 0) {
      param_1[0x45] = 8;
      if (*param_1 != 0) {
        FUN_0084af90(*param_1,2);
        FUN_0084af40(*param_1);
      }
      *param_1 = 0;
      return 0;
    }
    param_1[0x4f] = param_1[0x4f] + iVar6;
    if ((param_1[0x45] == 5) && (4 < param_1[0x4f])) {
      pcVar3 = (char *)param_1[0x4c];
      pcVar7 = pcVar3;
      while( true ) {
        if (pcVar7 == pcVar3 + param_1[0x4f] + -3) {
          return 0;
        }
        if ((((*pcVar7 == '\r') && (pcVar7[1] == '\n')) && (pcVar7[2] == '\r')) &&
           (pcVar7[3] == '\n')) break;
        pcVar7 = pcVar7 + 1;
      }
      if (pcVar7 == pcVar3 + param_1[0x4f] + -3) {
        return 0;
      }
      param_1[0x4a] = (int)(pcVar7 + (4 - (int)pcVar3));
      pcVar7[3] = '\0';
      pcVar7[2] = '\0';
      pbVar9 = (byte *)param_1[0x4c];
      if (((*pbVar9 != 0x48) || (pbVar9[1] != 0x54)) || ((pbVar9[2] != 0x54 || (pbVar9[3] != 0x50)))
         ) {
        FUN_00863140();
        param_1[0x45] = 8;
        return 0;
      }
      bVar10 = 0x48;
      pbVar8 = pbVar9;
LAB_00863600:
      if (' ' < (char)bVar10) goto code_r0x00863605;
      bVar10 = *pbVar8;
      while ((bVar10 != 0 && ((char)bVar10 < '!'))) {
        pbVar1 = pbVar8 + 1;
        pbVar8 = pbVar8 + 1;
        bVar10 = *pbVar1;
      }
LAB_00863622:
      param_1[0x47] = 0;
      bVar10 = *pbVar8;
      while (('/' < (char)bVar10 && ((char)bVar10 < ':'))) {
        pbVar8 = pbVar8 + 1;
        param_1[0x47] = (bVar10 & 0xf) + param_1[0x47] * 10;
        bVar10 = *pbVar8;
      }
      param_1[0x4b] = -1;
      iVar6 = FUN_007c6610(pbVar9,"\nContent-Length:");
      if (iVar6 != 0) {
        pbVar9 = (byte *)(iVar6 + 1);
        bVar10 = *(byte *)(iVar6 + 1);
        while (('\x1f' < (char)bVar10 && (((char)bVar10 < '0' || ('9' < (char)bVar10))))) {
          pbVar8 = pbVar9 + 1;
          pbVar9 = pbVar9 + 1;
          bVar10 = *pbVar8;
        }
        param_1[0x4b] = 0;
        bVar10 = *pbVar9;
        while (('/' < (char)bVar10 && ((char)bVar10 < ':'))) {
          pbVar9 = pbVar9 + 1;
          param_1[0x4b] = (bVar10 & 0xf) + param_1[0x4b] * 10;
          bVar10 = *pbVar9;
        }
      }
      param_1[0x48] = 0;
      iVar6 = FUN_007c6610(param_1[0x4c],"\nConnection: close");
      param_1[0x49] = (uint)(iVar6 != 0);
      *(undefined1 *)(param_1[0x4a] + -2 + param_1[0x4c]) = 0xd;
      *(undefined1 *)(param_1[0x4a] + -1 + param_1[0x4c]) = 10;
      if (-1 < param_1[0x4b]) {
        if (param_1[0x4b] == param_1[0x4f] - param_1[0x4a]) {
          param_1[0x4e] = param_1[0x4a];
          param_1[0x45] = 7;
          *(undefined1 *)(param_1[0x4f] + param_1[0x4c]) = 0;
          return param_1[0x4e] + param_1[0x4c];
        }
      }
      param_1[0x45] = 6;
      param_1[0x50] = param_1[0x4f] - param_1[0x4a];
    }
  }
  if (param_1[0x45] != 6) {
    return 0;
  }
  if (param_1[0x4d] == param_1[0x4f] || param_1[0x4d] - param_1[0x4f] < 0) {
    return 0;
  }
  iVar6 = FUN_00863230();
  if (iVar6 == 0) {
    return 0;
  }
  if (iVar6 == -1) {
    if ((param_1[0x4b] == -1) || (param_1[0x4b] == param_1[0x50])) {
      param_1[0x4b] = param_1[0x50];
      FUN_00863140();
      param_1[0x45] = 7;
      goto LAB_0086383a;
    }
  }
  else if (-1 < iVar6) {
    param_1[0x4f] = param_1[0x4f] + iVar6;
    param_1[0x50] = param_1[0x50] + iVar6;
    goto LAB_0086383a;
  }
  param_1[0x45] = 8;
  FUN_00863140();
LAB_0086383a:
  if ((-1 < param_1[0x4b]) && (param_1[0x4b] <= param_1[0x50])) {
    param_1[0x45] = 7;
    *(undefined1 *)(param_1[0x4c] + param_1[0x4f]) = 0;
    return param_1[0x4e] + param_1[0x4c];
  }
  return 0;
code_r0x00863605:
  bVar10 = pbVar8[1];
  pbVar8 = pbVar8 + 1;
  if (bVar10 == 0) goto LAB_00863622;
  goto LAB_00863600;
}

