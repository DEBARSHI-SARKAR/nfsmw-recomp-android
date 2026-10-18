/* speed.exe 0060e5a0 FUN_0060e5a0; analysis pseudocode, not buildable source.
 * calls 00613970 FUN_00613970
 * calls 00606b60 FUN_00606b60
 * calls 00613eb0 FUN_00613eb0
 * calls 0060bd50 FUN_0060bd50
 * calls 00607cb0 FUN_00607cb0
 */

void __fastcall FUN_0060e5a0(undefined4 param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int unaff_EDI;
  int local_18;
  int local_14;
  
  iVar5 = *(int *)(unaff_EDI + 8) - param_2 >> 3;
  if (iVar5 < in_EAX) {
    iVar7 = in_EAX - iVar5;
    if (*(int *)(unaff_EDI + 0x18) - *(int *)(unaff_EDI + 8) <= iVar7 * 8) {
      FUN_00606b60();
    }
    iVar5 = iVar5 + iVar7;
    do {
      **(undefined4 **)(unaff_EDI + 8) = 0;
      iVar7 = iVar7 + -1;
      *(int *)(unaff_EDI + 8) = *(int *)(unaff_EDI + 8) + 8;
    } while (iVar7 != 0);
  }
  iVar5 = iVar5 - in_EAX;
  iVar1 = FUN_00613970();
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(*(int *)(unaff_EDI + 0x10) + 0x38);
  *(undefined1 *)(iVar1 + 6) = 0xff;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined1 *)(iVar1 + 7) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  uVar2 = FUN_00613970();
  *(undefined4 *)(iVar1 + 0xc) = uVar2;
  for (iVar7 = *(int *)(iVar1 + 0x1c); iVar7 < iVar5; iVar7 = iVar7 + 1) {
    *(undefined4 *)(*(int *)(iVar1 + 0xc) + iVar7 * 8) = 0;
  }
  *(int *)(iVar1 + 0x1c) = iVar5;
  uVar2 = FUN_00613970();
  *(undefined4 *)(iVar1 + 0x10) = uVar2;
  iVar7 = 0;
  do {
    *(undefined4 *)(iVar7 + 0x10 + *(int *)(iVar1 + 0x10)) = 0;
    *(undefined4 *)(iVar7 + *(int *)(iVar1 + 0x10)) = 0;
    *(undefined4 *)(iVar7 + 8 + *(int *)(iVar1 + 0x10)) = 0;
    iVar7 = iVar7 + 0x14;
  } while (iVar7 < 0x28);
  *(undefined1 *)(iVar1 + 7) = 1;
  *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x10) + 0x14;
  if (0 < iVar5) {
    local_18 = 1;
    iVar7 = iVar5 * -8;
    local_14 = iVar5;
    do {
      puVar6 = (undefined4 *)(*(int *)(unaff_EDI + 8) + iVar7);
      puVar3 = (undefined4 *)FUN_00607cb0(iVar1,local_18);
      if (puVar3 == &DAT_008a3c5c) {
        puVar3 = (undefined4 *)FUN_0060bd50();
      }
      *puVar3 = *puVar6;
      puVar3[1] = puVar6[1];
      iVar7 = iVar7 + 8;
      local_18 = local_18 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  iVar7 = FUN_00613eb0();
  piVar4 = (int *)(*(int *)(iVar1 + 0x10) +
                  ((1 << (*(byte *)(iVar1 + 7) & 0x1f)) - 1U & *(uint *)(iVar7 + 8)) * 0x14);
  while ((*piVar4 != 4 || (piVar4[1] != iVar7))) {
    piVar4 = (int *)piVar4[4];
    if (piVar4 == (int *)0x0) {
      piVar4 = &DAT_008a3c5c;
LAB_0060e758:
      *(undefined1 *)(iVar1 + 6) = 0;
      if (piVar4 == &DAT_008a3c5c) {
        piVar4 = (int *)FUN_0060bd50();
      }
      *piVar4 = 3;
      piVar4[1] = (int)(float)iVar5;
      puVar3 = (undefined4 *)(*(int *)(unaff_EDI + 8) + iVar5 * -8);
      *(undefined4 **)(unaff_EDI + 8) = puVar3;
      puVar3[1] = iVar1;
      *puVar3 = 5;
      if (*(int *)(unaff_EDI + 0x18) - *(int *)(unaff_EDI + 8) < 9) {
        FUN_00606b60();
      }
      *(int *)(unaff_EDI + 8) = *(int *)(unaff_EDI + 8) + 8;
      return;
    }
  }
  piVar4 = piVar4 + 2;
  goto LAB_0060e758;
}

