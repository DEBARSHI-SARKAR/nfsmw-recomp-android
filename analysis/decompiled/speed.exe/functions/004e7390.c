/* speed.exe 004e7390 FUN_004e7390; analysis pseudocode, not buildable source.
 * calls 004519d0 FUN_004519d0
 * calls 004522f0 FUN_004522f0
 * calls 004e52c0 FUN_004e52c0
 */

void FUN_004e7390(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  ppuVar3 = &PTR_s_City_Dense_fx_008efcc0;
  do {
    puVar1 = *ppuVar3;
    uVar9 = 1;
    uVar8 = 0xffffffff;
    uVar7 = 5;
    uVar6 = 0xc;
    puVar5 = puVar1;
    uVar4 = FUN_004522f0(puVar1);
    uVar2 = FUN_004519d0(puVar1,puVar5,uVar4);
    FUN_004e52c0(uVar4,uVar2,puVar1,uVar6,uVar7,uVar8,uVar9);
    ppuVar3 = ppuVar3 + 1;
  } while ((int)ppuVar3 < 0x8efcf0);
  return;
}

