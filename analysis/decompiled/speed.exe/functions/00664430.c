/* speed.exe 00664430 FUN_00664430; analysis pseudocode, not buildable source.
 * calls 00465a70 FUN_00465a70
 * calls 00664010 FUN_00664010
 * calls 0064af20 FUN_0064af20
 * calls 0045ce40 FUN_0045ce40
 * calls 00663f40 FUN_00663f40
 * calls 004647c0 FUN_004647c0
 */

void FUN_00664430(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined1 local_40 [64];
  
  FUN_0045ce40();
  iVar2 = FUN_0064af20(param_2);
  iVar2 = param_1 + 0x10 + iVar2 * 0x14;
  iVar1 = *(int *)(iVar2 + 0x10);
  FUN_004647c0(local_40,"Attributes - %s.bin",param_2);
  puVar3 = (undefined4 *)FUN_00465a70(*(undefined4 *)(iVar2 + 4),param_4);
  uVar5 = *(uint *)(iVar2 + 4);
  puVar6 = (undefined4 *)(*(int *)(iVar2 + 0xc) + param_1);
  puVar7 = puVar3;
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  FUN_004647c0(local_40,"%s.bin",param_2);
  FUN_00663f40(local_40,puVar3,*(undefined4 *)(iVar2 + 4));
  FUN_004647c0(local_40,"%s.vlt",param_2);
  FUN_00664010(local_40,iVar1 + param_1,*(undefined4 *)(iVar2 + 8));
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = puVar3;
  }
  return;
}

