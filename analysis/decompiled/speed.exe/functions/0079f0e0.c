/* speed.exe 0079f0e0 FUN_0079f0e0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 00799fe0 FUN_00799fe0
 * calls 0085ce00 FUN_0085ce00
 * calls 0079f090 FUN_0079f090
 * calls 00794f80 FUN_00794f80
 * calls 00793340 FUN_00793340
 * calls 0083c880 FUN_0083c880
 * calls 0085ce10 FUN_0085ce10
 * calls 0078c490 FUN_0078c490
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0079d3f0 FUN_0079d3f0
 * calls 0079bac0 FUN_0079bac0
 * calls 00796d30 FUN_00796d30
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

void FUN_0079f0e0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188 [32];
  undefined4 local_108 [65];
  
  FUN_0085ce00(param_1);
  puVar1 = (undefined4 *)FUN_0079f090();
  if (*(int *)(param_2 + 4) == 0) {
    FUN_0078c490();
    FUN_00796d30();
    FUN_0079d3f0();
  }
  if ((*(int *)(param_2 + 4) == 2) && (*(int *)(param_2 + 0xc) == 3)) {
    uVar4 = *puVar1;
    puVar3 = local_188;
    for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    FUN_0085ce10(uVar4,0x73657373,local_188,0x80);
    local_198 = 0;
    local_194 = 0;
    local_190 = 0;
    local_18c = 0;
    FUN_0085ce10(*puVar1,0x6e6f6e63,&local_198,0x10);
    puVar3 = local_108;
    for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    FUN_0083c880(local_108,0x100,&DAT_008b7130,local_188);
    FUN_0083c880(local_108,0x100,"PLATPARAMS",&local_198);
    FUN_007ec1bd();
    InterlockedIncrement(&DAT_009b4438);
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    puVar5 = &LAB_00794ff0;
    puVar3 = local_108;
    uVar4 = 0x67736574;
    FUN_00794f80(0x67736574,puVar3,&LAB_00794ff0,0,0,0,0);
    FUN_00793340(uVar4,puVar3,puVar5,uVar6,uVar7,uVar8,uVar9);
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
    FUN_0079bac0();
    FUN_00799fe0();
  }
  if ((code *)puVar1[1] != (code *)0x0) {
    (*(code *)puVar1[1])(param_1,param_2,puVar1[2]);
  }
  return;
}

