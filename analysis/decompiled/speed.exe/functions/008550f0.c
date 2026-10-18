/* speed.exe 008550f0 FUN_008550f0; analysis pseudocode, not buildable source.
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

undefined4 FUN_008550f0(int *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  DWORD DVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_148;
  undefined1 local_144 [64];
  char local_104 [256];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  piVar7 = param_1;
  for (iVar6 = 0x100; piVar7 = piVar7 + 1, iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar7 = 0;
  }
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
  iVar6 = FUN_008548e0();
  if (iVar6 != 0) {
    FUN_00859e40(*param_1);
    param_1[0x183] = 0;
  }
  if (((param_1[0x183] != 6) || (param_1[0x187] != 0)) || (*param_1 == 0)) {
    FUN_00859e40(*param_1);
    param_1[0x183] = 0;
  }
  pcVar3 = "HEAD ";
  if (param_3 == 0) {
    pcVar3 = "GET ";
  }
  iVar6 = FUN_00854af0(param_1,uVar2,local_104,local_148,pcVar3,0);
  if (iVar6 < 0) {
    return 0xfffffffe;
  }
  param_1[0x184] = param_3;
  param_1[0x195] = param_1[0x195] + 1;
  iVar6 = FUN_008548e0();
  DVar4 = GetTickCount();
  param_1[0x192] = DVar4 + param_1[0x191];
  if (param_1[0x183] == 6) {
    iVar5 = FUN_008548e0();
    if (((iVar5 == 0) && ((uint)(iVar6 == 0) == param_1[0x182])) && (local_148 == param_1[0x181])) {
      param_1[0x183] = 2;
      goto LAB_008552fd;
    }
  }
  pcVar3 = local_104;
  iVar5 = 0x504 - (int)pcVar3;
  do {
    cVar1 = *pcVar3;
    pcVar3[(int)param_1 + iVar5] = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  param_1[0x181] = local_148;
  FUN_00859c90(*param_1,(uint)(iVar6 == 0),local_104,0,local_148);
  param_1[0x183] = 1;
LAB_008552fd:
  FUN_00855650(param_1);
  return 0;
}

