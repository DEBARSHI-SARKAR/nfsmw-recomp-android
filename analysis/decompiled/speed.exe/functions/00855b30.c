/* speed.exe 00855b30 FUN_00855b30; analysis pseudocode, not buildable source.
 * calls 0084bcb0 GetTickCount
 * calls 008548e0 FUN_008548e0
 * calls 007d6cb0 __security_check_cookie
 * calls 00859e40 FUN_00859e40
 * calls 00854980 FUN_00854980
 * calls 00859c90 FUN_00859c90
 * calls 00854af0 FUN_00854af0
 * calls 00855650 FUN_00855650
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_00855b30(int *param_1,undefined4 param_2,char *param_3,uint param_4,int param_5)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  DWORD DVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int local_148;
  undefined1 local_144 [64];
  char local_104 [256];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  piVar9 = param_1;
  for (iVar8 = 0x100; piVar9 = piVar9 + 1, iVar8 != 0; iVar8 = iVar8 + -1) {
    *piVar9 = 0;
  }
  local_148 = 0;
  param_1[0x183] = 0;
  param_1[0x185] = -1;
  param_1[0x186] = 0;
  param_1[0x189] = 0;
  param_1[0x188] = 0;
  param_1[399] = 0;
  param_1[400] = 0;
  param_1[0x193] = 0;
  param_1[0x194] = 0;
  param_1[0x184] = 0;
  uVar2 = FUN_00854980(local_144,0x40,local_104,0x100,&local_148);
  if (local_104[0] == '\0') {
    param_1[0x183] = 7;
    return 0xffffffff;
  }
  iVar8 = FUN_008548e0();
  if (iVar8 != 0) {
    FUN_00859e40(*param_1);
    param_1[0x183] = 0;
  }
  if (((param_1[0x183] != 6) || (param_1[0x187] != 0)) || (*param_1 == 0)) {
    FUN_00859e40(*param_1);
    param_1[0x183] = 0;
  }
  iVar8 = local_148;
  if ((param_3 != (char *)0x0) && ((int)param_4 < 0)) {
    pcVar3 = param_3;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    param_4 = (int)pcVar3 - (int)(param_3 + 1);
  }
  pcVar3 = "PUT ";
  if (param_5 == 0) {
    pcVar3 = "POST ";
  }
  iVar4 = FUN_00854af0(param_1,uVar2,local_104,local_148,pcVar3,param_4);
  if (iVar4 < 0) {
    return 0xfffffffe;
  }
  if ((param_3 == (char *)0x0) || (param_4 == 0)) {
    param_4 = 0;
  }
  else {
    uVar5 = param_1[0x18b] - param_1[0x18d];
    if ((int)uVar5 < (int)param_4) {
      param_4 = uVar5;
    }
    pcVar3 = (char *)(param_1[0x18a] + param_1[0x18d]);
    for (uVar5 = param_4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)param_3;
      param_3 = param_3 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar5 = param_4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar3 = *param_3;
      param_3 = param_3 + 1;
      pcVar3 = pcVar3 + 1;
    }
    param_1[0x18d] = param_1[0x18d] + param_4;
    iVar8 = local_148;
  }
  param_1[0x195] = param_1[0x195] + 1;
  iVar4 = FUN_008548e0();
  DVar6 = GetTickCount();
  param_1[0x192] = DVar6 + param_1[0x191];
  if (param_1[0x183] == 6) {
    iVar7 = FUN_008548e0();
    if (((iVar7 == 0) && ((uint)(iVar4 == 0) == param_1[0x182])) && (iVar8 == param_1[0x181])) {
      param_1[0x183] = 2;
      goto LAB_00855dbf;
    }
  }
  pcVar3 = local_104;
  iVar7 = 0x504 - (int)pcVar3;
  do {
    cVar1 = *pcVar3;
    pcVar3[(int)param_1 + iVar7] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  param_1[0x181] = iVar8;
  FUN_00859c90(*param_1,(uint)(iVar4 == 0),local_104,0,iVar8);
  param_1[0x183] = 1;
LAB_00855dbf:
  FUN_00855650(param_1);
  return param_4;
}

