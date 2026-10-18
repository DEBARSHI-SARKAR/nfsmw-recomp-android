/* speed.exe 0062e740 FUN_0062e740; analysis pseudocode, not buildable source.
 * calls 00605a50 FUN_00605a50
 * calls 00614d10 FUN_00614d10
 * calls 0060b060 FUN_0060b060
 */

undefined4 FUN_0062e740(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  iVar2 = FUN_00605a50(param_1);
  puVar1 = DAT_00920390;
  if (iVar2 == 7) {
    puVar3 = DAT_00920390 + 0xc;
    bVar5 = DAT_00920390 != (undefined4 *)0x0;
    DAT_00920390 = puVar3;
    if (bVar5) {
      fVar6 = (float10)FUN_0060b060(param_1,7);
      fVar7 = (float10)FUN_0060b060(param_1,6);
      fVar8 = (float10)FUN_0060b060(param_1,5);
      fVar9 = (float10)FUN_0060b060(param_1,4);
      fVar10 = (float10)FUN_0060b060(param_1,3);
      fVar11 = (float10)FUN_0060b060(param_1,2);
      uVar4 = FUN_00614d10(param_1,1);
      puVar1[2] = uVar4;
      puVar1[3] = (float)fVar11;
      puVar1[4] = (float)fVar10;
      puVar1[5] = (float)fVar9;
      puVar1[1] = 0x30;
      *puVar1 = &PTR_FUN_008a7010;
      puVar1[6] = (float)fVar8;
      puVar1[7] = (float)fVar7;
      puVar1[8] = (float)fVar6;
    }
    return 0;
  }
  return 0;
}

