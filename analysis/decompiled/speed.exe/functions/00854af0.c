/* speed.exe 00854af0 FUN_00854af0; analysis pseudocode, not buildable source.
 * calls 00846010 FUN_00846010
 * calls 007d6cb0 __security_check_cookie
 * calls 007c6100 _sprintf
 * calls 00854920 FUN_00854920
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_00854af0(int param_1,char *param_2,undefined4 param_3,int param_4,char *param_5,
            undefined4 param_6)

{
  char cVar1;
  undefined2 *puVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined2 *puVar10;
  char local_494 [16];
  undefined4 local_484;
  undefined4 local_4;
  
  local_494[1] = '\0';
  local_494[2] = '\0';
  local_494[3] = '\0';
  local_494[4] = '\0';
  local_494[5] = '\0';
  local_494[6] = '\0';
  local_494[7] = '\0';
  local_494[8] = '\0';
  local_4 = DAT_00906980;
  local_494[9] = '\0';
  local_494[10] = '\0';
  local_494[0xb] = '\0';
  local_494[0xc] = '\0';
  local_494[0xd] = '\0';
  local_494[0xe] = '\0';
  local_494[0] = '\0';
  local_494[0xf] = 0;
  if (param_4 != 0) {
    _sprintf(local_494,":%d",param_4);
  }
  pcVar3 = "Connection: Close\r\n";
  if (*(int *)(param_1 + 0x654) != 0) {
    pcVar3 = "";
  }
  FUN_00846010(&local_484,0x480,
               " HTTP/1.1\r\nHost: %s%s\r\nContent-Length: %d\r\n%sUser-Agent: Custom/1.1\r\nAccept: */*\r\n\r\n"
               ,param_3,local_494,param_6,pcVar3);
  pcVar3 = (char *)(param_1 + 0x404);
  if ((*(char *)(param_1 + 0x404) != '\0') && (iVar4 = FUN_00854920(), iVar4 != 0)) {
    iVar9 = iVar4 - (int)pcVar3;
    do {
      cVar1 = *pcVar3;
      pcVar3[iVar9] = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    puVar2 = (undefined2 *)(iVar4 + -1);
    do {
      puVar10 = puVar2;
      puVar2 = (undefined2 *)((int)puVar10 + 1);
    } while (*(char *)((int)puVar10 + 1) != '\0');
    *(undefined2 *)((int)puVar10 + 1) = DAT_008af2d8;
    *(undefined1 *)((int)puVar10 + 3) = DAT_008af2da;
  }
  pcVar3 = param_5;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar5 = param_2;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar6 = (char *)&local_484;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  if (pcVar3 + (int)(pcVar5 + (int)(pcVar6 + (((-((int)&local_484 + 1) - (int)(param_2 + 1)) + 1) -
                                             (int)(param_5 + 1)))) <= *(char **)(param_1 + 0x62c)) {
    pcVar3 = *(char **)(param_1 + 0x628);
    do {
      cVar1 = *param_5;
      param_5 = param_5 + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
      pcVar5 = param_2;
    } while (cVar1 != '\0');
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar7 = (int)pcVar5 - (int)param_2;
    pcVar3 = (char *)(*(int *)(param_1 + 0x628) + -1);
    do {
      pcVar5 = pcVar3 + 1;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar5 != '\0');
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar7 = uVar7 & 3; pcVar5 = (char *)&local_484, uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar3 = *param_2;
      param_2 = param_2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar7 = (int)pcVar5 - (int)&local_484;
    pcVar3 = (char *)(*(int *)(param_1 + 0x628) + -1);
    do {
      pcVar5 = pcVar3 + 1;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar5 != '\0');
    pcVar5 = (char *)&local_484;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar3 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar3 = pcVar3 + 1;
    }
    pcVar5 = *(char **)(param_1 + 0x628);
    pcVar3 = pcVar5 + 1;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    *(int *)(param_1 + 0x634) = (int)pcVar5 - (int)pcVar3;
    return 0;
  }
  return 0xffffffff;
}

