/* speed.exe 00419a40 FUN_00419a40; analysis pseudocode, not buildable source.
 * calls 006269b0 FUN_006269b0
 * calls 005cc240 FUN_005cc240
 * calls 00419910 FUN_00419910
 * calls 00452940 FUN_00452940
 */

undefined4 FUN_00419a40(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  
  iVar1 = FUN_00419910();
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_005cc240(param_1);
  uVar7 = 0;
  iVar3 = FUN_00452940();
  if (iVar3 != 0) {
    iVar3 = 0;
    do {
      iVar6 = *(int *)(iVar1 + 8);
      uVar4 = FUN_00452940();
      if (uVar7 < uVar4) {
        iVar6 = iVar6 + 8 + iVar3;
      }
      else {
        iVar6 = FUN_006269b0(0x18);
      }
      puVar5 = *(undefined1 **)(iVar6 + 0xc);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_00890978;
      }
      iVar6 = FUN_005cc240(puVar5);
      if (iVar2 == iVar6) {
        return 1;
      }
      uVar7 = uVar7 + 1;
      iVar3 = iVar3 + 0x18;
      uVar4 = FUN_00452940();
    } while (uVar7 < uVar4);
  }
  return 0;
}

