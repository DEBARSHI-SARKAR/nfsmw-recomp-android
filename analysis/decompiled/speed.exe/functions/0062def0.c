/* speed.exe 0062def0 FUN_0062def0; analysis pseudocode, not buildable source.
 * calls 00605a50 FUN_00605a50
 * calls 0060b060 FUN_0060b060
 */

undefined4 FUN_0062def0(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  float10 fVar5;
  
  iVar2 = FUN_00605a50(param_1);
  puVar1 = DAT_00920390;
  if (iVar2 == 1) {
    puVar3 = DAT_00920390 + 4;
    bVar4 = DAT_00920390 != (undefined4 *)0x0;
    DAT_00920390 = puVar3;
    if (bVar4) {
      fVar5 = (float10)FUN_0060b060(param_1,1);
      puVar1[2] = (float)fVar5;
      puVar1[1] = 0x10;
      *puVar1 = &PTR_LAB_008a6f50;
    }
    return 0;
  }
  return 0;
}

