/* speed.exe 00599a50 FUN_00599a50; analysis pseudocode, not buildable source.
 * calls 0045a760 FUN_0045a760
 * calls 004707e0 FUN_004707e0
 * calls 00454810 FUN_00454810
 * calls 004549b0 FUN_004549b0
 * calls 00452940 FUN_00452940
 * calls 00739940 FUN_00739940
 * calls 0045a430 FUN_0045a430
 * calls 00455fd0 FUN_00455fd0
 * calls 006bf530 FUN_006bf530
 * calls 006269b0 FUN_006269b0
 * calls 00456050 FUN_00456050
 * calls 00460bf0 FUN_00460bf0
 * calls 00470730 FUN_00470730
 * calls 0045a7e0 FUN_0045a7e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00599a50(undefined4 param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iStack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00872dd0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00470730(0xeec2271a,0,0);
  local_4 = 0;
  if (((DAT_0092d884 != 0) && ((int *)*DAT_0092d87c != (int *)0x0)) &&
     (iVar2 = (**(code **)(*(int *)*DAT_0092d87c + 4))(), iVar2 == 0)) {
    (**(code **)(_DAT_00000000 + 0x44))();
    iVar2 = FUN_00454810(0x9047c9e0,0);
    if (iVar2 == 0) {
      iVar2 = FUN_006269b0(0x10);
    }
    if (*(int *)(iVar2 + 8) != DAT_0091dcac) {
      puVar3 = *(undefined1 **)(iVar2 + 0xc);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_00890978;
      }
      DAT_0091dcac = *(int *)(iVar2 + 8);
      uVar4 = FUN_00460bf0(puVar3);
      puVar3 = (undefined1 *)FUN_00739940(uVar4);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_00890978;
      }
      DAT_0091dca8 = FUN_004549b0(puVar3);
    }
  }
  uVar4 = FUN_00456050(0xa5b543b7,DAT_0091dca8);
  FUN_0045a760(uVar4);
  FUN_004707e0(0xeec2271a,0,0);
  local_4 = CONCAT31(local_4._1_3_,1);
  switch(param_1) {
  case 0:
    uVar4 = 0x585517f3;
    break;
  case 1:
    uVar4 = 0xd74c1435;
    break;
  case 2:
    uVar4 = 0xc2da793;
    break;
  case 3:
    uVar4 = 0xccf03cb3;
    break;
  case 4:
    uVar4 = 0x10204a90;
    break;
  case 5:
    uVar4 = 0x4b675dc8;
    break;
  case 6:
    uVar4 = 0xd76a6fad;
    break;
  default:
    uVar4 = FUN_00455fd0(0x93c171e4,0xeec2271a);
    FUN_0045a760(uVar4);
    goto LAB_00599bc6;
  }
  iVar2 = FUN_00454810(uVar4,0);
  if (iVar2 == 0) {
    iVar2 = FUN_006269b0(0xc);
  }
  FUN_0045a7e0(iVar2);
LAB_00599bc6:
  iVar2 = FUN_006bf530();
  uVar5 = FUN_00452940();
  if ((iVar2 == 3) < uVar5) {
    puVar3 = (undefined1 *)(iStack_2c + 0x76 + (uint)(iVar2 == 3));
  }
  else {
    puVar3 = (undefined1 *)FUN_006269b0(1);
  }
  uVar1 = *puVar3;
  local_4 = local_4 & 0xffffff00;
  FUN_0045a430();
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = pvStack_c;
  return uVar1;
}

