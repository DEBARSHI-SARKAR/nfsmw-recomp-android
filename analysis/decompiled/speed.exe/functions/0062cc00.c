/* speed.exe 0062cc00 FUN_0062cc00; analysis pseudocode, not buildable source.
 * calls 00605a50 FUN_00605a50
 * calls 00614d10 FUN_00614d10
 * calls 0060b060 FUN_0060b060
 */

undefined4 FUN_0062cc00(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  
  iVar3 = FUN_00605a50(param_1);
  puVar2 = DAT_00920390;
  uVar1 = DAT_0091f1b8;
  if (iVar3 != 8) {
    return 0;
  }
  puVar4 = DAT_00920390 + 0xc;
  bVar9 = DAT_00920390 != (undefined4 *)0x0;
  DAT_00920390 = puVar4;
  if (bVar9) {
    fVar10 = (float10)FUN_0060b060(param_1,8);
    uVar5 = FUN_00614d10(param_1,7);
    fVar11 = (float10)FUN_0060b060(param_1,6);
    uVar6 = FUN_00614d10(param_1,5);
    fVar12 = (float10)FUN_0060b060(param_1,4);
    uVar7 = FUN_00614d10(param_1,3);
    fVar13 = (float10)FUN_0060b060(param_1,2);
    uVar8 = FUN_00614d10(param_1,1);
    puVar2[2] = uVar8;
    puVar2[3] = (float)fVar13;
    puVar2[8] = uVar5;
    puVar2[4] = uVar7;
    puVar2[5] = (float)fVar12;
    puVar2[10] = uVar1;
    puVar2[6] = uVar6;
    puVar2[1] = 0x30;
    *puVar2 = &PTR_FUN_008a6c6c;
    puVar2[7] = (float)fVar11;
    puVar2[9] = (float)fVar10;
    return 0;
  }
  return 0;
}

