/* speed.exe 008531e0 FUN_008531e0; analysis pseudocode, not buildable source.
 * calls 00853010 FUN_00853010
 * calls 0083a670 FUN_0083a670
 * calls 00852f20 FUN_00852f20
 * calls 00844a10 FUN_00844a10
 * calls 00845290 FUN_00845290
 * calls 00852fd0 FUN_00852fd0
 * calls 0083e290 FUN_0083e290
 * calls 0083e360 FUN_0083e360
 * calls 0078af20 thunk_FUN_004655f0
 * calls 0083e2e0 FUN_0083e2e0
 * calls 00844a30 FUN_00844a30
 * calls 0083abc0 FUN_0083abc0
 * calls 0078af00 FUN_0078af00
 * calls 00844fb0 FUN_00844fb0
 * calls 0083e220 FUN_0083e220
 */

void FUN_008531e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  iVar1 = FUN_00844a30(param_1,4);
  if (iVar1 != 0) {
    uVar2 = FUN_0083a670(param_2,"IDENT",0xffffffff);
    iVar3 = FUN_0083abc0(uVar2);
    if (-1 < iVar3) {
      uVar2 = FUN_00844a10(param_1,4);
      iVar4 = FUN_0083a670(param_2,&DAT_008b4cbc);
      if (iVar4 != 0) {
        puVar5 = (undefined4 *)FUN_0078af00(0x674);
        FUN_00845290(puVar5,param_2);
        iVar4 = FUN_00852fd0(iVar1,iVar3);
        if (iVar4 == 0) {
          uVar2 = FUN_0083e220(uVar2,puVar5);
          FUN_00852f20(iVar1,iVar3,uVar2);
          uVar2 = 1;
        }
        else {
          puVar6 = (undefined4 *)FUN_0083e2e0(uVar2,iVar4);
          puVar7 = puVar5;
          puVar8 = puVar6;
          for (iVar1 = 0x19d; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          FUN_0083e290(uVar2,iVar4,puVar6);
          thunk_FUN_004655f0(puVar5);
          uVar2 = 0;
          puVar5 = puVar6;
        }
        FUN_00844fb0(param_1,4,puVar5,uVar2);
        return;
      }
      iVar4 = FUN_00852fd0(iVar1,iVar3);
      if (iVar4 != 0) {
        FUN_00853010(iVar1,iVar3);
        uVar2 = FUN_0083e360(uVar2,iVar4);
        FUN_00844fb0(param_1,4,uVar2,0xffffffff);
        thunk_FUN_004655f0(uVar2);
      }
    }
  }
  return;
}

