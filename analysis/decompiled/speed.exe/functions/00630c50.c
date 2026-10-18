/* speed.exe 00630c50 FUN_00630c50; analysis pseudocode, not buildable source.
 * calls 00605a50 FUN_00605a50
 * calls 00614d10 FUN_00614d10
 * calls 0060b060 FUN_0060b060
 * calls 007c4b80 FUN_007c4b80
 */

undefined4 FUN_00630c50(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  
  iVar2 = FUN_00605a50(param_1);
  puVar1 = DAT_00920390;
  if (iVar2 != 2) {
    return 0;
  }
  puVar3 = DAT_00920390 + 4;
  bVar6 = DAT_00920390 != (undefined4 *)0x0;
  DAT_00920390 = puVar3;
  if (bVar6) {
    uVar4 = FUN_00614d10(param_1,2);
    FUN_0060b060(param_1,1);
    uVar5 = FUN_007c4b80();
    puVar1[3] = uVar4;
    puVar1[2] = uVar5;
    puVar1[1] = 0x10;
    *puVar1 = &PTR_FUN_008a7430;
    return 0;
  }
  return 0;
}

