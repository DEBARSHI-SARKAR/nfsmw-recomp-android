/* speed.exe 007b01f0 FUN_007b01f0; analysis pseudocode, not buildable source.
 * calls 007a6160 FUN_007a6160
 * calls 007aec00 FUN_007aec00
 * calls 00576f10 FUN_00576f10
 * calls 007aec50 FUN_007aec50
 * calls 00514c70 FUN_00514c70
 * calls 00575b40 FUN_00575b40
 * calls 00575b20 FUN_00575b20
 * calls 00524850 FUN_00524850
 */

void __fastcall FUN_007b01f0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  
  cVar1 = FUN_00575b20();
  if (cVar1 != '\0') {
    iVar20 = 0;
    do {
      iVar2 = FUN_007aec50((&DAT_009061b0)[iVar20]);
      if ((iVar2 == 0) || (*(char *)(iVar2 + 0x14) == '\0')) {
        iVar19 = 0;
      }
      else {
        iVar19 = 1;
      }
      iVar3 = FUN_00576f10((&DAT_00906194)[iVar20],0);
      iVar20 = iVar20 + 1;
      FUN_007a6160(iVar20,iVar2,iVar3 - iVar19);
    } while (iVar20 < 7);
    return;
  }
  cVar1 = FUN_00575b40();
  if (cVar1 != '\0') {
    iVar20 = 0;
    do {
      iVar2 = FUN_007aec00((&DAT_00906180)[iVar20]);
      if ((iVar2 == 0) || (*(char *)(iVar2 + 0x14) == '\0')) {
        iVar19 = 0;
      }
      else {
        iVar19 = 1;
      }
      iVar3 = FUN_00576f10((&DAT_0090616c)[iVar20],0);
      iVar20 = iVar20 + 1;
      FUN_007a6160(iVar20,iVar2,iVar3 - iVar19);
    } while (iVar20 < 5);
    uVar4 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x47df0e22);
    FUN_00514c70(uVar4);
    uVar4 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x47df0e23);
    FUN_00514c70(uVar4);
    return;
  }
  iVar20 = FUN_007aec00(0x4d);
  if ((iVar20 == 0) || (*(char *)(iVar20 + 0x14) == '\0')) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  iVar19 = FUN_00576f10(0xe,0);
  FUN_007a6160(1,iVar20,iVar19 - iVar2);
  iVar2 = FUN_007aec00(0x53);
  if ((iVar2 == 0) || (*(char *)(iVar2 + 0x14) == '\0')) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  iVar19 = FUN_007aec00(0x5b);
  if ((iVar19 == 0) || (*(char *)(iVar19 + 0x14) == '\0')) {
    iVar19 = 0;
  }
  else {
    iVar19 = 1;
  }
  iVar3 = FUN_007aec00(99);
  if ((iVar3 == 0) || (*(char *)(iVar3 + 0x14) == '\0')) {
    iVar3 = 0;
  }
  else {
    iVar3 = 1;
  }
  iVar5 = FUN_007aec00(100);
  if ((iVar5 == 0) || (*(char *)(iVar5 + 0x14) == '\0')) {
    iVar5 = 0;
  }
  else {
    iVar5 = 1;
  }
  iVar6 = FUN_007aec00(0x65);
  if ((iVar6 == 0) || (*(char *)(iVar6 + 0x14) == '\0')) {
    iVar6 = 0;
  }
  else {
    iVar6 = 1;
  }
  iVar7 = FUN_007aec00(0x66);
  if ((iVar7 == 0) || (*(char *)(iVar7 + 0x14) == '\0')) {
    iVar7 = 0;
  }
  else {
    iVar7 = 1;
  }
  iVar8 = FUN_007aec00(0x67);
  if ((iVar8 == 0) || (*(char *)(iVar8 + 0x14) == '\0')) {
    iVar8 = 0;
  }
  else {
    iVar8 = 1;
  }
  iVar9 = FUN_007aec00(0x68);
  if ((iVar9 == 0) || (*(char *)(iVar9 + 0x14) == '\0')) {
    iVar9 = 0;
  }
  else {
    iVar9 = 1;
  }
  iVar10 = FUN_007aec00(0x6b);
  if ((iVar10 == 0) || (*(char *)(iVar10 + 0x14) == '\0')) {
    iVar10 = 0;
  }
  else {
    iVar10 = 1;
  }
  iVar11 = FUN_007aec00(0x6c);
  if ((iVar11 == 0) || (*(char *)(iVar11 + 0x14) == '\0')) {
    iVar11 = 0;
  }
  else {
    iVar11 = 1;
  }
  iVar12 = FUN_007aec00(0x6d);
  if ((iVar12 == 0) || (*(char *)(iVar12 + 0x14) == '\0')) {
    iVar12 = 0;
  }
  else {
    iVar12 = 1;
  }
  iVar13 = FUN_007aec00(0x6e);
  if ((iVar13 == 0) || (*(char *)(iVar13 + 0x14) == '\0')) {
    iVar13 = 0;
  }
  else {
    iVar13 = 1;
  }
  iVar14 = FUN_007aec00(0x6f);
  if ((iVar14 == 0) || (*(char *)(iVar14 + 0x14) == '\0')) {
    iVar14 = 0;
  }
  else {
    iVar14 = 1;
  }
  iVar15 = FUN_007aec00(0x70);
  if ((iVar15 == 0) || (*(char *)(iVar15 + 0x14) == '\0')) {
    iVar15 = 0;
  }
  else {
    iVar15 = 1;
  }
  iVar16 = FUN_007aec00(0x73);
  if ((iVar16 == 0) || (*(char *)(iVar16 + 0x14) == '\0')) {
    iVar16 = 0;
  }
  else {
    iVar16 = 1;
  }
  iVar17 = FUN_007aec00(0x7b);
  if ((iVar17 == 0) || (*(char *)(iVar17 + 0x14) == '\0')) {
    iVar17 = 0;
  }
  else {
    iVar17 = 1;
  }
  iVar18 = FUN_00576f10(0xf,0);
  FUN_007a6160(2,iVar20,(iVar18 - iVar17) -
                        (iVar2 + iVar19 + iVar3 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 +
                         iVar11 + iVar12 + iVar13 + iVar14 + iVar15 + iVar16));
  iVar20 = FUN_007aec00(0x4c);
  if ((iVar20 == 0) || (*(char *)(iVar20 + 0x14) == '\0')) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  iVar19 = FUN_00576f10(0x10,0);
  FUN_007a6160(3,iVar20,iVar19 - iVar2);
  iVar20 = FUN_007aec00(0x84);
  if ((iVar20 == 0) || (*(char *)(iVar20 + 0x14) == '\0')) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  iVar19 = FUN_00576f10(0xd,0);
  FUN_007a6160(4,iVar20,iVar19 - iVar2);
  uVar4 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x47df0e21);
  FUN_00514c70(uVar4);
  uVar4 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x47df0e22);
  FUN_00514c70(uVar4);
  uVar4 = FUN_00524850(*(undefined4 *)(param_1 + 0x10),0x47df0e23);
  FUN_00514c70(uVar4);
  return;
}

