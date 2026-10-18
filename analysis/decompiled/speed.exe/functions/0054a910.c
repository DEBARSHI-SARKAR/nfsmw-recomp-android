/* speed.exe 0054a910 FUN_0054a910; analysis pseudocode, not buildable source.
 * calls 0079c470 FUN_0079c470
 * calls 00512e40 FUN_00512e40
 * calls 0079bac0 FUN_0079bac0
 * calls 00790970 FUN_00790970
 * calls 00535870 FUN_00535870
 * calls 0056e300 FUN_0056e300
 * calls 0078bc20 FUN_0078bc20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0054a910(int param_1)

{
  int iVar1;
  int extraout_ECX;
  undefined *puVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 local_38;
  undefined local_34 [52];
  
  *(int *)(param_1 + 0x30) = DAT_00925b14 + 20000;
  local_38 = 0;
  if (((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0) &&
     (iVar1 = FUN_00535870(&local_38), iVar1 != 0)) {
    return;
  }
  uVar5 = 0;
  uVar3 = 0;
  FUN_0079bac0(0,0);
  FUN_00790970(uVar3,uVar5);
  puVar4 = &LAB_00535a80;
  iVar1 = param_1;
  FUN_0079bac0(&LAB_00535a80,param_1);
  FUN_00790970(puVar4,iVar1);
  if ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) == 0) {
    uVar3 = FUN_00512e40(&local_38);
    *(undefined4 *)(extraout_ECX + 0x164) = uVar3;
  }
  else {
    *(undefined4 *)(DAT_0091cf90 + 0x164) = 6;
  }
  if (*(int *)(param_1 + 0x40) == 2) {
    FUN_0078bc20(100,*(undefined4 *)(DAT_0091cf90 + 0x168),*(char *)(DAT_0091cf90 + 0x141) == '\0',0
                 ,0,*(undefined4 *)(DAT_0091cf90 + 0x164),1);
    puVar2 = local_34;
  }
  else {
    _DAT_0091cc0c = *(undefined4 *)(DAT_0091cf90 + 0x164);
    puVar2 = &DAT_0091cbe0;
  }
  puVar4 = &LAB_00512f50;
  iVar1 = param_1;
  FUN_0079bac0(puVar2,&LAB_00512f50,param_1);
  iVar1 = FUN_0079c470(puVar2,puVar4,iVar1);
  if (-1 < iVar1) {
    *(undefined1 *)(param_1 + 0x2e) = 1;
    FUN_0056e300(3);
    return;
  }
  *(undefined1 *)(param_1 + 0x2f) = 1;
  return;
}

