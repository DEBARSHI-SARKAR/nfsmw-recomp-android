/* speed.exe 00849200 FUN_00849200; analysis pseudocode, not buildable source.
 * calls 00846300 FUN_00846300
 * calls 00848c80 FUN_00848c80
 * calls 007c64e0 _strncpy
 * calls 007c97c0 FUN_007c97c0
 * calls 007d6cb0 __security_check_cookie
 * calls 0083a630 FUN_0083a630
 * calls 0083c880 FUN_0083c880
 * calls 00856fc0 thunk_FUN_0084b650
 * calls 00852430 GetTickCount
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_00849200(int param_1,char *param_2,undefined4 param_3,int param_4,char *param_5,char *param_6,
            undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  DWORD DVar10;
  char *pcVar11;
  uint uVar12;
  undefined *puVar13;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_208;
  char local_204 [255];
  char local_105;
  char local_104 [256];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  FUN_00848c80(param_1);
  *(undefined4 *)(param_1 + 0x8e8) = param_7;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x8e4) = param_8;
  *(int *)(param_1 + 0xa4) = param_4;
  _strncpy((char *)(param_1 + 0x24),param_2,0x80);
  _strncpy((char *)(param_1 + 0xa8),param_5,0x80);
  _strncpy((char *)(param_1 + 0x128),param_6,0x80);
  if (*(int *)(param_1 + 0x1ac) == 0) {
    uVar2 = FUN_00846300(param_1);
    *(uint *)(param_1 + 0x1ac) = uVar2 & 0xffff;
  }
  puVar8 = (undefined1 *)(param_1 + 0x5b4);
  *puVar8 = 0;
  FUN_0083c880(puVar8,0x100,&DAT_008b6dc0,param_1 + 0x534);
  FUN_0083c880(puVar8,0x100,&DAT_008b6da0,param_1 + 0x574);
  FUN_0083c880(puVar8,0x100,&DAT_008c6ed4,param_1 + 0x4e8);
  iVar3 = FUN_007c97c0(param_5,0x3a);
  if (iVar3 == 0) {
    FUN_0083c880(puVar8,0x100,&DAT_008b68c4,param_6);
    FUN_0083c880(puVar8,0x100,&DAT_0089ebf8,param_5);
  }
  else {
    _strncpy(local_204,param_5,0xff);
    local_105 = '\0';
    puVar4 = (undefined1 *)FUN_007c97c0(local_204,0x3a);
    if (puVar4 != (undefined1 *)0x0) {
      *puVar4 = 0;
      pcVar7 = puVar4 + 1;
      FUN_0083a630(local_104,0x100,local_204);
      pcVar5 = local_104;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pcVar11 = param_6;
      do {
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      pcVar6 = param_6;
      if (pcVar5 + (int)(pcVar11 + (-(int)(param_6 + 1) - (int)(local_104 + 1))) < (char *)0x100) {
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        uVar2 = (int)pcVar6 - (int)param_6;
        pcVar5 = &local_105;
        do {
          pcVar11 = pcVar5 + 1;
          pcVar5 = pcVar5 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = param_6;
        for (uVar12 = uVar2 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar5 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar5 = pcVar5 + 4;
        }
        for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *pcVar5 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar5 = pcVar5 + 1;
        }
      }
      FUN_0083c880(puVar8,0x100,&DAT_008b68c4,local_104);
      if (*pcVar7 == '$') {
        pcVar7 = puVar4 + 2;
        puVar13 = &DAT_0089ebf8;
      }
      else {
        puVar13 = &DAT_008b6d24;
      }
      FUN_0083c880(puVar8,0x100,puVar13,pcVar7);
    }
  }
  pcVar5 = (char *)(param_1 + 0x6b4);
  FUN_0083a630(pcVar5,0x10,param_6);
  if (*pcVar5 == '/') {
    pcVar7 = (char *)(param_1 + 0x6b5);
    iVar3 = (int)pcVar5 - (int)pcVar7;
    do {
      cVar1 = *pcVar7;
      pcVar7[iVar3] = cVar1;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
  }
  puVar8 = (undefined1 *)FUN_007c97c0(pcVar5,0x2f);
  if (puVar8 != (undefined1 *)0x0) {
    *puVar8 = 0;
  }
  if (*param_2 == '*') {
    param_2 = param_2 + 1;
  }
  uVar9 = thunk_FUN_0084b650(param_2,param_4 * 1000);
  *(undefined4 *)(param_1 + 8) = uVar9;
  if (*(int *)(param_1 + 0x10) != 1) {
    *(undefined4 *)(param_1 + 0x10) = 1;
    if (*(code **)(param_1 + 0x8e8) != (code *)0x0) {
      local_218 = 1;
      local_21c = 0x636f6e6e;
      local_214 = 0;
      local_208 = 0;
      (**(code **)(param_1 + 0x8e8))(param_1,&local_21c,*(undefined4 *)(param_1 + 0x8e4));
    }
  }
  if (param_4 < 1) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    DVar10 = GetTickCount();
    *(DWORD *)(param_1 + 0x14) = DVar10 + param_4 * 1000;
  }
  *(undefined4 *)(param_1 + 0x4e4) = 0xffffffff;
  return 0;
}

