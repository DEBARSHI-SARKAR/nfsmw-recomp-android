/* speed.exe 0062a590 FUN_0062a590; analysis pseudocode, not buildable source.
 * calls 00605a50 FUN_00605a50
 * calls 0060b060 FUN_0060b060
 * calls 007c4b80 FUN_007c4b80
 */

undefined4 FUN_0062a590(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  iVar4 = FUN_00605a50(param_1);
  puVar3 = DAT_00920390;
  uVar2 = DAT_0091f1b8;
  uVar1 = DAT_0091f1b0;
  if (iVar4 != 6) {
    return 0;
  }
  puVar5 = DAT_00920390 + 0xc;
  bVar9 = DAT_00920390 != (undefined4 *)0x0;
  DAT_00920390 = puVar5;
  if (bVar9) {
    FUN_0060b060(param_1,6);
    uVar6 = FUN_007c4b80();
    FUN_0060b060(param_1,5);
    uVar7 = FUN_007c4b80();
    FUN_0060b060(param_1,4);
    uVar8 = FUN_007c4b80();
    fVar10 = (float10)FUN_0060b060(param_1,3);
    fVar11 = (float10)FUN_0060b060(param_1,2);
    fVar12 = (float10)FUN_0060b060(param_1,1);
    puVar3[3] = (float)fVar11;
    puVar3[8] = uVar2;
    puVar3[4] = (float)fVar10;
    puVar3[9] = uVar1;
    puVar3[2] = (float)fVar12;
    puVar3[6] = uVar7;
    puVar3[1] = 0x30;
    *puVar3 = &PTR_FUN_008a6714;
    puVar3[5] = uVar8;
    puVar3[7] = uVar6;
    return 0;
  }
  return 0;
}

