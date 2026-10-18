/* speed.exe 00853aa0 FUN_00853aa0; analysis pseudocode, not buildable source.
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
 * calls 0083abc0 FUN_0083abc0
 * calls 0078af00 FUN_0078af00
 * calls 00844fb0 FUN_00844fb0
 * calls 00845ad0 FUN_00845ad0
 * calls 0083e220 FUN_0083e220
 */

void FUN_00853aa0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  uVar1 = FUN_0083a670(param_2,&DAT_008b68ec,0xffffffff);
  iVar2 = FUN_0083abc0(uVar1);
  if ((((-1 < iVar2) && (iVar2 = iVar2 + 0x18, 0x17 < iVar2)) && (iVar2 < 0x1d)) &&
     (iVar3 = FUN_00844a30(param_1,iVar2), iVar3 != 0)) {
    uVar1 = FUN_00844a10(param_1,iVar2);
    iVar4 = FUN_0083a670(param_2,&DAT_008b6f0c);
    if (iVar4 != 0) {
      puVar5 = (undefined4 *)FUN_0078af00(0xa0);
      FUN_00845ad0(puVar5,param_2);
      iVar4 = FUN_00852fd0(iVar3,*puVar5);
      if (iVar4 == 0) {
        uVar1 = FUN_0083e220(uVar1,puVar5);
        FUN_00852f20(iVar3,*puVar5,uVar1);
        FUN_00844fb0(param_1,iVar2,puVar5,1);
        return;
      }
      puVar6 = (undefined4 *)FUN_0083e2e0(uVar1,iVar4);
      puVar8 = puVar5;
      puVar9 = puVar6;
      for (iVar3 = 0x28; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      FUN_0083e290(uVar1,iVar4,puVar6);
      thunk_FUN_004655f0(puVar5);
      FUN_00844fb0(param_1,iVar2,puVar6,0);
      return;
    }
    uVar7 = FUN_0083a670(param_2,&DAT_008b6fe8,0);
    uVar7 = FUN_0083abc0(uVar7);
    iVar4 = FUN_00852fd0(iVar3,uVar7);
    if (iVar4 != 0) {
      FUN_00853010(iVar3,uVar7);
      uVar1 = FUN_0083e360(uVar1,iVar4);
      FUN_00844fb0(param_1,iVar2,uVar1,0xffffffff);
      thunk_FUN_004655f0(uVar1);
    }
  }
  return;
}

