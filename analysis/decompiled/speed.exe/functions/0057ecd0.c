/* speed.exe 0057ecd0 FUN_0057ecd0; analysis pseudocode, not buildable source.
 * calls 00666fe0 FUN_00666fe0
 * calls 0056ec20 FUN_0056ec20
 * calls 0056c3e0 FUN_0056c3e0
 * calls 006596e0 FUN_006596e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057ecd0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (DAT_00926110 != 0) {
    DAT_00904ffc = 1;
  }
  _DAT_00904fc4 = DAT_008f86c8;
  DAT_00904fd8 = DAT_008f86bc;
  DAT_00904fb8 = DAT_008f86a4;
  DAT_00905008 = DAT_00926088;
  _DAT_00904fbc = DAT_00926084;
  DAT_00904fee = DAT_008f86d0 != 0;
  _DAT_00904fcc = DAT_00926098;
  _DAT_00904fd0 = DAT_0092609c;
  _DAT_00905014 = DAT_008f86cc;
  _DAT_0090500c = DAT_008f86cc;
  DAT_00904fdc = DAT_008f86b8;
  DAT_00904fe0 = DAT_00926080;
  DAT_00904fed = (char)DAT_00926080 + '\x02';
  DAT_00904fec = (char)DAT_00926080 + '\x01';
  if (DAT_008f86d4 != -1) {
    *(int *)(*(int *)(DAT_0091cf90 + 0x10) + 0x88) = DAT_008f86d4;
  }
  if (DAT_008f86d8 != -1) {
    *(int *)(*(int *)(DAT_0091cf90 + 0x10) + 0x88) = DAT_008f86d8;
  }
  uVar2 = FUN_0056ec20(DAT_008f86c4);
  *(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x8c) = uVar2;
  uVar2 = FUN_0056ec20(DAT_008f86c4);
  *(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0xa0) = uVar2;
  iVar1 = DAT_0091cf90;
  iVar3 = 0;
  if (0 < DAT_00904fdc) {
    do {
      (&DAT_00905000)[iVar3] = (int)*(char *)(iVar1 + 0xc + iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_00904fdc);
  }
  _DAT_0090501c = 0x3f800000;
  _DAT_00905020 = 0x3f800000;
  _DAT_00905030 = 0;
  if (DAT_00926110 == 0) {
    if (DAT_00925e90 != 3) {
      FUN_00666fe0();
      return;
    }
    FUN_006596e0();
    return;
  }
  FUN_0056c3e0();
  return;
}

