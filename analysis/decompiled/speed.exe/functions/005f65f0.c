/* speed.exe 005f65f0 FUN_005f65f0; analysis pseudocode, not buildable source.
 * calls 004647c0 FUN_004647c0
 * calls 00465a70 FUN_00465a70
 * calls 00664010 FUN_00664010
 * calls 005f51a0 FUN_005f51a0
 * calls 00663f40 FUN_00663f40
 */

void __thiscall FUN_005f65f0(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined1 local_180 [128];
  undefined1 local_100 [128];
  undefined1 local_80 [128];
  
  iVar4 = param_1[4];
  iVar1 = param_1[6];
  FUN_004647c0(local_180,"%s.bin",param_1[1]);
  FUN_004647c0(local_100,"%s.vlt",param_1[1]);
  FUN_004647c0(local_80,"Gameplay resident data: %s",local_180);
  puVar2 = (undefined4 *)FUN_00465a70(param_1[5],0);
  uVar6 = param_1[5];
  param_1[3] = puVar2;
  puVar7 = (undefined4 *)(iVar4 + param_2);
  for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar2 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  FUN_00663f40(local_180,param_1[3],param_1[5]);
  uVar3 = FUN_00664010(local_100,iVar1 + param_2,param_1[7]);
  *param_1 = uVar3;
  iVar4 = FUN_005f51a0(param_1,param_1 + 0xd);
  uVar6 = iVar4 + 0x5fU & 0xfffffff0;
  param_1[0xc] = uVar6;
  uVar3 = FUN_00465a70(uVar6,0x400);
  param_1[0xf] = uVar3;
  param_1[2] = param_1[2] | 1;
  return;
}

