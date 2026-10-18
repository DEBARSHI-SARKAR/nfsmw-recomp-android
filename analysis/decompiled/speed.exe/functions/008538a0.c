/* speed.exe 008538a0 FUN_008538a0; analysis pseudocode, not buildable source.
 * calls 0083e290 FUN_0083e290
 * calls 008457b0 FUN_008457b0
 * calls 0078af20 thunk_FUN_004655f0
 * calls 00852da0 FUN_00852da0
 * calls 0083e2e0 FUN_0083e2e0
 * calls 00844a30 FUN_00844a30
 * calls 00852e60 FUN_00852e60
 * calls 00844a10 FUN_00844a10
 * calls 0078af00 FUN_0078af00
 * calls 00844fb0 FUN_00844fb0
 * calls 0083e220 FUN_0083e220
 */

void FUN_008538a0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar1 = *(int *)(param_1 + 0x1894);
  if (((4 < iVar1) && (iVar1 < 0x17)) && (iVar1 = FUN_00844a30(param_1,iVar1), iVar1 != 0)) {
    puVar2 = (undefined4 *)FUN_0078af00(0xa0);
    FUN_008457b0(puVar2,param_2,param_1 + 0x15a8);
    uVar3 = FUN_00844a10(param_1,*(undefined4 *)(param_1 + 0x1894));
    iVar4 = FUN_00852e60(iVar1,puVar2 + 3);
    if (iVar4 == 0) {
      uVar3 = FUN_0083e220(uVar3,puVar2);
      FUN_00852da0(iVar1,puVar2 + 3,uVar3);
      uVar3 = 1;
      puVar5 = puVar2;
    }
    else {
      puVar5 = (undefined4 *)FUN_0083e2e0(uVar3,iVar4);
      puVar6 = puVar2;
      puVar7 = puVar5;
      for (iVar1 = 0x28; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      FUN_0083e290(uVar3,iVar4,puVar5);
      thunk_FUN_004655f0(puVar2);
      uVar3 = 0;
    }
    FUN_00844fb0(param_1,*(undefined4 *)(param_1 + 0x1894),puVar5,uVar3);
  }
  return;
}

