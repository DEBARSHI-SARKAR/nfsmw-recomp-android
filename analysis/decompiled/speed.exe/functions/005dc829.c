/* speed.exe 005dc829 FUN_005dc829; analysis pseudocode, not buildable source.
 * calls 0045da30 FUN_0045da30
 * calls 00460bf0 FUN_00460bf0
 * calls 0056bc10 FUN_0056bc10
 * calls 004647c0 FUN_004647c0
 * calls 00460d20 FUN_00460d20
 */

void FUN_005dc829(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  int iVar4;
  int iVar5;
  
  while( true ) {
    uVar1 = FUN_0045da30(0x96);
    FUN_004647c0(&stack0x00000004,"RACERNAME_%03d",uVar1);
    uVar1 = FUN_00460bf0(&stack0x00000004);
    uVar1 = FUN_0056bc10(uVar1);
    iVar4 = 0;
    if (*(int *)(DAT_0091e000 + 0x1958) < 1) break;
    iVar5 = 0;
    iVar3 = DAT_0091e000;
    while ((iVar2 = *(int *)(iVar5 + 0x20 + iVar3), iVar2 == 0 ||
           (iVar2 = FUN_00460d20(uVar1,iVar2), iVar3 = DAT_0091e000, iVar2 != 0))) {
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x194;
      if (*(int *)(iVar3 + 0x1958) <= iVar4) goto LAB_005dc89e;
    }
  }
LAB_005dc89e:
  *(undefined4 *)(unaff_EBP + 8) = uVar1;
  return;
}

