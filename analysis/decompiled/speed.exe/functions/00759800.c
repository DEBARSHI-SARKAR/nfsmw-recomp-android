/* speed.exe 00759800 FUN_00759800; analysis pseudocode, not buildable source.
 * calls 0045da30 FUN_0045da30
 * calls 00460bf0 FUN_00460bf0
 * calls 0074d070 FUN_0074d070
 * calls 00751670 FUN_00751670
 * calls 007517d0 FUN_007517d0
 * calls 00747c40 FUN_00747c40
 */

void __fastcall FUN_00759800(undefined4 *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  iVar6 = 0;
  uVar2 = FUN_00751670(*param_1,0x4c,0,0xffffffff);
  uVar7 = 0;
  iVar3 = FUN_0045da30(uVar2);
  iVar3 = iVar3 + 1;
  if (0 < iVar3) {
    do {
      uVar7 = FUN_00747c40(*param_1,0x4c,0,uVar7,0xffffffff);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  param_1[0x5e] = uVar7;
  FUN_007517d0();
  param_1[0x5f] = 0;
  puVar8 = param_1 + 0x9d;
  for (iVar3 = 0x22; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar8 = 0x1010101;
    puVar8 = puVar8 + 1;
  }
  *(undefined2 *)puVar8 = 0x101;
  *(undefined1 *)((int)puVar8 + 2) = 1;
  do {
    if (iVar6 == 0x42) {
      iVar4 = FUN_00460bf0("CALIPER");
      iVar3 = param_1[0xc0];
      if (((iVar3 == 0) || (*(char *)(iVar3 + 4) != 'L')) ||
         (iVar5 = FUN_0074d070(), iVar5 != iVar4)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((iVar3 != 0) && ((*(char *)(iVar3 + 4) == 'B' || (bVar1)))) {
        *(undefined1 *)((int)param_1 + 0x2b6) = 0;
      }
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0x8b);
  return;
}

