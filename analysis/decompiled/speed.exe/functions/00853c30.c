/* speed.exe 00853c30 FUN_00853c30; analysis pseudocode, not buildable source.
 * calls 00853010 FUN_00853010
 * calls 0083a670 FUN_0083a670
 * calls 00852f20 FUN_00852f20
 * calls 00844a10 FUN_00844a10
 * calls 00852fd0 FUN_00852fd0
 * calls 0083e290 FUN_0083e290
 * calls 0083e360 FUN_0083e360
 * calls 0078af20 thunk_FUN_004655f0
 * calls 0083e2e0 FUN_0083e2e0
 * calls 00844a30 FUN_00844a30
 * calls 00845bf0 FUN_00845bf0
 * calls 0083abc0 FUN_0083abc0
 * calls 0078af00 FUN_0078af00
 * calls 008450a0 FUN_008450a0
 * calls 00844fb0 FUN_00844fb0
 * calls 0083e220 FUN_0083e220
 */

void FUN_00853c30(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  iVar1 = FUN_00844a30(param_1,1);
  if (iVar1 != 0) {
    uVar2 = FUN_0083a670(param_2,&DAT_008b6fe8,0xffffffff);
    iVar3 = FUN_0083abc0(uVar2);
    if (-1 < iVar3) {
      uVar2 = FUN_00844a10(param_1,1);
      iVar4 = FUN_0083a670(param_2,&DAT_008b6f0c);
      if (iVar4 == 0) {
        iVar4 = FUN_00852fd0(iVar1,iVar3);
        if (iVar4 != 0) {
          FUN_00853010(iVar1,iVar3);
          uVar2 = FUN_0083e360(uVar2,iVar4);
          FUN_00844fb0(param_1,1,uVar2,0xffffffff);
          thunk_FUN_004655f0(uVar2);
        }
      }
      else {
        puVar5 = (undefined4 *)FUN_0078af00(0x244);
        FUN_00845bf0(puVar5,param_2);
        iVar3 = FUN_00852fd0(iVar1,*puVar5);
        if (iVar3 == 0) {
          uVar2 = FUN_0083e220(uVar2,puVar5);
          FUN_00852f20(iVar1,*puVar5,uVar2);
          uVar2 = 1;
        }
        else {
          puVar6 = (undefined4 *)FUN_0083e2e0(uVar2,iVar3);
          puVar7 = puVar5;
          puVar8 = puVar6;
          for (iVar1 = 0x91; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          FUN_0083e290(uVar2,iVar3,puVar6);
          thunk_FUN_004655f0(puVar5);
          uVar2 = 0;
          puVar5 = puVar6;
        }
        if ((puVar5[1] & 0x200000) != 0) {
          puVar7 = puVar5;
          puVar8 = (undefined4 *)(param_1 + 0x15a0);
          for (iVar1 = 0x91; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
        }
        FUN_00844fb0(param_1,1,puVar5,uVar2);
      }
      uVar2 = FUN_0083a670(param_2,&DAT_008c74a4,0xffffffff);
      uVar2 = FUN_0083abc0(uVar2);
      uVar2 = FUN_0083a670(param_2,&DAT_008b7108,0,uVar2);
      uVar2 = FUN_0083abc0(uVar2);
      FUN_008450a0(param_1,*(undefined4 *)(param_1 + 0x17e4),uVar2);
    }
  }
  return;
}

