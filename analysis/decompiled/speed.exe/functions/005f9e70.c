/* speed.exe 005f9e70 FUN_005f9e70; analysis pseudocode, not buildable source.
 * calls 00452430 FUN_00452430
 * calls 005dd930 FUN_005dd930
 * calls 005f93d0 FUN_005f93d0
 * calls 005f95f0 FUN_005f95f0
 */

void FUN_005f9e70(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  
  bVar3 = false;
  bVar6 = DAT_00926064 == 0;
  iVar5 = *(int *)(DAT_0091e004 + 0x2c);
  iVar1 = *(int *)(DAT_0091e000 + 0x196c);
  if (iVar5 != 0) {
    FUN_005f93d0();
    iVar2 = *(int *)(DAT_0091e004 + 0x30);
    *(int *)(DAT_0091e000 + 0x1964) = iVar2;
    bVar6 = iVar2 == 2 && bVar6;
    if (((iVar1 != 0) && (*(int *)(iVar5 + 0xc) != *(int *)(iVar1 + 0x14))) &&
       (bVar3 = true, iVar2 == 2)) {
      *(undefined1 *)(DAT_0091e000 + 0x19a5) = 1;
    }
  }
  if (((bVar6) && (FUN_005f95f0(iVar5 == 0), !bVar3)) && (iVar1 != 0)) {
    uVar4 = FUN_00452430();
    iVar5 = FUN_005dd930(uVar4);
    if (*(char *)(iVar5 + 0x3c) == '\0') {
      FUN_005f93d0();
      return;
    }
  }
  return;
}

