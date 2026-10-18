/* speed.exe 005dc800 FUN_005dc800; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 * calls 0056bc00 FUN_0056bc00
 */

void __fastcall FUN_005dc800(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_20 [32];
  
  uVar2 = FUN_00460bf0("RACERNAME_000");
  cVar1 = FUN_0056bc00(uVar2);
  if (cVar1 == '\0') {
    *(char **)(param_1 + 8) = "UNKNOWN";
    return;
  }
  while( true ) {
    uVar2 = FUN_0045da30(0x96);
    FUN_004647c0(auStack_20,"RACERNAME_%03d",uVar2);
    uVar2 = FUN_00460bf0(auStack_20);
    uVar2 = FUN_0056bc10(uVar2);
    iVar5 = 0;
    if (*(int *)(DAT_0091e000 + 0x1958) < 1) break;
    iVar6 = 0;
    iVar4 = DAT_0091e000;
    while ((iVar3 = *(int *)(iVar6 + 0x20 + iVar4), iVar3 == 0 ||
           (iVar3 = FUN_00460d20(uVar2,iVar3), iVar4 = DAT_0091e000, iVar3 != 0))) {
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x194;
      if (*(int *)(iVar4 + 0x1958) <= iVar5) goto LAB_005dc89e;
    }
  }
LAB_005dc89e:
  *(undefined4 *)(param_1 + 8) = uVar2;
  return;
}

