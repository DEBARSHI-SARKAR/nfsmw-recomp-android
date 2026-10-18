/* speed.exe 0070f6d0 FUN_0070f6d0; analysis pseudocode, not buildable source.
 * calls 0070b2b0 FUN_0070b2b0
 * calls 00652ad0 _malloc
 * calls 006fff90 FUN_006fff90
 * calls 00660ee0 FUN_00660ee0
 * calls 0070e880 FUN_0070e880
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0070f6d0(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  if (_DAT_008b2594 < (float)(int)param_2[2]) {
    return (undefined4 *)0x0;
  }
  puVar3 = (undefined4 *)FUN_0070e880(param_2,1);
  if (puVar3 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar5 = puVar3;
  uVar7 = FUN_006fff90(*param_2,param_2[1]);
  FUN_0070b2b0(uVar7,puVar5);
  iVar4 = (**(code **)(*param_1 + 0x1c))(*param_2);
  puVar3[10] = param_2[1] + iVar4;
  puVar5 = _malloc(8);
  puVar5[1] = puVar3;
  *puVar5 = param_1;
  uVar1 = puVar3[10];
  uVar2 = *puVar3;
  uVar6 = (**(code **)(*param_1 + 0x24))();
  FUN_00660ee0(puVar3 + 0x10,uVar6,uVar1,uVar2,&LAB_007000f0,puVar5,0);
  return puVar3;
}

