/* speed.exe 006320c0 FUN_006320c0; analysis pseudocode, not buildable source.
 * calls 00605a50 FUN_00605a50
 * calls 00614d10 FUN_00614d10
 */

undefined4 FUN_006320c0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  bool bVar6;
  
  iVar3 = FUN_00605a50(param_1);
  puVar2 = DAT_00920390;
  uVar1 = DAT_0091f1c4;
  if (iVar3 != 1) {
    return 0;
  }
  puVar4 = DAT_00920390 + 4;
  bVar6 = DAT_00920390 != (undefined4 *)0x0;
  DAT_00920390 = puVar4;
  if (bVar6) {
    uVar5 = FUN_00614d10(param_1,1);
    puVar2[3] = uVar1;
    puVar2[2] = uVar5;
    puVar2[1] = 0x10;
    *puVar2 = &PTR_FUN_008a7688;
    return 0;
  }
  return 0;
}

