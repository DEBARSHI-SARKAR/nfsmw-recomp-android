/* speed.exe 005a41e0 FUN_005a41e0; analysis pseudocode, not buildable source.
 * calls 00590a20 FUN_00590a20
 * calls 0056f2f0 FUN_0056f2f0
 * calls 0067c080 FUN_0067c080
 * calls 00455fd0 FUN_00455fd0
 * calls 00739a70 FUN_00739a70
 * calls 007598d0 FUN_007598d0
 * calls 00452380 FUN_00452380
 * calls 00748130 FUN_00748130
 * calls 00672e00 FUN_00672e00
 * calls 0045a430 FUN_0045a430
 * calls 00599d20 FUN_00599d20
 * calls 005af1c0 FUN_005af1c0
 * calls 004e4ea0 FUN_004e4ea0
 * calls 004549b0 FUN_004549b0
 */

int __thiscall FUN_005a41e0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_344 [4];
  int local_340;
  undefined1 local_330 [20];
  undefined1 local_31c [784];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008736d6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_2 == 0x3a94520) {
    ExceptionList = &local_c;
    *(uint *)(*(int *)(DAT_0091cf90 + 0x10) + 0xac) =
         *(uint *)(*(int *)(DAT_0091cf90 + 0x10) + 0xac) | 0x100000;
  }
  iVar2 = FUN_00748130(param_2);
  iVar3 = 0;
  piVar5 = param_1;
  do {
    if (*piVar5 == param_2) {
      piVar5 = param_1 + iVar3 * 5;
      if (piVar5 == (int *)0x0) goto LAB_005a425d;
      goto LAB_005a4268;
    }
    iVar3 = iVar3 + 1;
    piVar5 = piVar5 + 5;
  } while (iVar3 < 200);
  piVar5 = (int *)0x0;
LAB_005a425d:
  FUN_00590a20(iVar2 + 0x28);
LAB_005a4268:
  iVar3 = FUN_00599d20(*piVar5);
  *(uint *)(iVar3 + 0xc) = *(uint *)(iVar3 + 0xc) | 0x40;
  if (*(byte *)(iVar3 + 0x10) < 0x4c) {
    param_1 = param_1 + (uint)*(byte *)(iVar3 + 0x10) * 0x66 + 1000;
  }
  else {
    param_1 = (int *)0x0;
  }
  FUN_00739a70(0xffffffff,0,0,0);
  uVar4 = FUN_005af1c0(iVar2 + 0x28);
  FUN_007598d0(uVar4);
  FUN_0056f2f0(local_31c);
  uVar4 = FUN_004549b0(iVar2 + 0x28);
  uVar7 = 0;
  uVar6 = 0;
  uVar4 = FUN_00455fd0(0x27e73952,uVar4,0,0);
  FUN_00452380(uVar4,uVar6,uVar7);
  local_4 = 0;
  if ((local_340 != 0) && (param_1 != (int *)0x0)) {
    FUN_004e4ea0(*(undefined4 *)(iVar3 + 8),0,0);
    local_4 = CONCAT31(local_4._1_3_,1);
    cVar1 = FUN_0067c080(local_330,local_344);
    if (cVar1 != '\0') {
      FUN_00672e00(local_330,param_1 + 0x46);
    }
    local_4 = local_4 & 0xffffff00;
    FUN_0045a430();
  }
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return iVar3;
}

