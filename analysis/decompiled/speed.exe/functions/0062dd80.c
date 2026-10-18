/* speed.exe 0062dd80 FUN_0062dd80; analysis pseudocode, not buildable source.
 * calls 00605a50 FUN_00605a50
 * calls 0060b060 FUN_0060b060
 */

undefined4 FUN_0062dd80(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  float10 fVar6;
  
  iVar3 = FUN_00605a50(param_1);
  puVar2 = DAT_00920390;
  uVar1 = DAT_0091f1b8;
  if (iVar3 != 1) {
    return 0;
  }
  puVar4 = DAT_00920390 + 4;
  bVar5 = DAT_00920390 != (undefined4 *)0x0;
  DAT_00920390 = puVar4;
  if (bVar5) {
    fVar6 = (float10)FUN_0060b060(param_1,1);
    puVar2[3] = uVar1;
    puVar2[2] = (float)fVar6;
    puVar2[1] = 0x10;
    *puVar2 = &PTR_FUN_008a6f28;
    return 0;
  }
  return 0;
}

