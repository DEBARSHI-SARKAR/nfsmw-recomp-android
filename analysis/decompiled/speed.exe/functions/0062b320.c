/* speed.exe 0062b320 FUN_0062b320; analysis pseudocode, not buildable source.
 * calls 00605a50 FUN_00605a50
 * calls 0060b060 FUN_0060b060
 * calls 007c4b80 FUN_007c4b80
 */

undefined4 FUN_0062b320(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  bool bVar5;
  
  iVar2 = FUN_00605a50(param_1);
  puVar1 = DAT_00920390;
  if (iVar2 == 1) {
    puVar3 = DAT_00920390 + 4;
    bVar5 = DAT_00920390 != (undefined4 *)0x0;
    DAT_00920390 = puVar3;
    if (bVar5) {
      FUN_0060b060(param_1,1);
      uVar4 = FUN_007c4b80();
      puVar1[1] = 0x10;
      *puVar1 = &PTR_FUN_008a691c;
      puVar1[2] = uVar4;
    }
    return 0;
  }
  return 0;
}

