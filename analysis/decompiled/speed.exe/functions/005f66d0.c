/* speed.exe 005f66d0 FUN_005f66d0; analysis pseudocode, not buildable source.
 * calls 004647c0 FUN_004647c0
 * calls 0064ae60 FUN_0064ae60
 * calls 00664010 FUN_00664010
 * calls 005d29d0 FUN_005d29d0
 * calls 005f51a0 FUN_005f51a0
 * calls 00663f40 FUN_00663f40
 */

void __thiscall FUN_005f66d0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 local_100 [128];
  undefined1 local_80 [128];
  
  iVar5 = param_1[4];
  iVar1 = param_1[6];
  FUN_004647c0(local_100,"%s.bin",param_1[1]);
  FUN_004647c0(local_80,"%s.vlt",param_1[1]);
  puVar2 = (undefined4 *)FUN_005d29d0(0x1c,0);
  puVar6 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[1] = 0xea0ff1ce;
    *puVar2 = &PTR_LAB_008a3a24;
    puVar2[6] = param_3;
    puVar6 = puVar2;
  }
  uVar3 = FUN_0064ae60(puVar6);
  FUN_00663f40(local_100,iVar5 + param_2,param_1[5]);
  uVar4 = FUN_00664010(local_80,iVar1 + param_2,param_1[7]);
  *param_1 = uVar4;
  param_1[8] = puVar6;
  param_1[10] = puVar6[1];
  param_1[9] = puVar6[3];
  FUN_0064ae60(uVar3);
  iVar5 = FUN_005f51a0(param_1,param_1 + 0xd);
  param_1[0xc] = iVar5 + 0x5fU & 0xfffffff0;
  return;
}

