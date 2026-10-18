/* speed.exe 0081e639 FUN_0081e639; analysis pseudocode, not buildable source.
 * calls 0081ec47 FUN_0081ec47
 * calls 0081ed38 FUN_0081ed38
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0081e639(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (DAT_009c1fe0 == 0) {
    DAT_009c2044 = 0x10;
    DAT_009c2063 = 0x5a;
    DAT_009c2054 = 1;
    DAT_009c204f = 0;
    _DAT_009c2050 = 0xbf800000;
    puVar3 = &DAT_009c203c;
    puVar4 = &DAT_009c20ec;
    for (iVar2 = 0x27; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    iVar2 = FUN_0081ec47();
    if (iVar2 != 1) {
      DAT_009c1fe4 = FUN_0081ed38();
    }
    DAT_009c1fe0 = 1;
  }
  uVar1 = DAT_009c1fe4;
  puVar3 = &DAT_009c2020;
  for (iVar2 = 0x33; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *puVar3;
    puVar3 = puVar3 + 1;
    param_1 = param_1 + 1;
  }
  return uVar1;
}

