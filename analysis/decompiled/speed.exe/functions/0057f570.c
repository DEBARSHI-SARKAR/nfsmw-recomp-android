/* speed.exe 0057f570 FUN_0057f570; analysis pseudocode, not buildable source.
 * calls 005fab40 FUN_005fab40
 * calls 005dca70 FUN_005dca70
 * calls 005fb710 FUN_005fb710
 * calls 00460d20 FUN_00460d20
 * calls 00600c30 FUN_00600c30
 * calls 00516e10 FUN_00516e10
 * calls 004519d0 FUN_004519d0
 * calls 005af1c0 FUN_005af1c0
 * calls 00666fe0 FUN_00666fe0
 * calls 00516e30 FUN_00516e30
 * calls 00600ab0 FUN_00600ab0
 * calls 00603440 FUN_00603440
 * calls 005e39e0 FUN_005e39e0
 * calls 006596e0 FUN_006596e0
 */

void __fastcall FUN_0057f570(int param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (DAT_00926126 == '\0') {
    uVar4 = FUN_004519d0("16.2.1");
    FUN_005fb710(uVar4);
    uVar4 = FUN_005fab40();
    cVar3 = FUN_005dca70(uVar4,2);
    if (cVar3 != '\0') goto LAB_0057f5b6;
    bVar1 = false;
  }
  else {
LAB_0057f5b6:
    bVar1 = true;
  }
  if ((*(uint *)(param_1 + 4) >> 0xe & 1) == 0) {
    uVar4 = FUN_004519d0("1.2.3");
    FUN_005fb710(uVar4);
    uVar4 = FUN_005fab40();
    cVar3 = FUN_005dca70(uVar4,2);
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_0057f5fb;
    }
  }
  bVar2 = false;
LAB_0057f5fb:
  if (*(char *)(param_1 + 8) == '\x10') {
    if (!bVar1) {
      uVar4 = FUN_005af1c0("M3GTRCAREERSTART");
      *(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0xa8) = uVar4;
      *(undefined4 *)(DAT_0091cf90 + 0x2c + *(int *)(DAT_0091cf90 + 0x18) * 0x18) = uVar4;
      uVar4 = FUN_00600c30();
      uVar5 = FUN_004519d0(uVar4);
      uVar5 = FUN_005fb710(uVar5);
      uVar5 = FUN_00603440(uVar5);
      FUN_00600ab0(uVar5,2);
      FUN_005e39e0(uVar5);
      iVar6 = FUN_00460d20(uVar4,"16.1.0");
      if (iVar6 != 0) {
        *(undefined1 *)(DAT_0091cb20 + 0x2b) = 1;
      }
    }
    if (DAT_00925e90 == 3) {
      FUN_006596e0();
    }
    else {
      FUN_00666fe0();
    }
  }
  else if (bVar2) {
    uVar4 = FUN_004519d0("1.8.1");
    uVar4 = FUN_005fb710(uVar4);
    uVar4 = FUN_00603440(uVar4);
    FUN_00600ab0(uVar4,2);
    FUN_005e39e0(uVar4);
    if (DAT_00925e90 == 3) {
      FUN_006596e0();
      *(undefined1 *)(DAT_0091cb20 + 0x2b) = 1;
    }
    else {
      FUN_00666fe0();
      *(undefined1 *)(DAT_0091cb20 + 0x2b) = 1;
    }
  }
  else {
    uVar4 = 2;
    FUN_00516e10(2);
    FUN_00516e30(uVar4);
    *(uint *)(DAT_0091cf90 + 300) = *(uint *)(DAT_0091cf90 + 300) & 0xfffffeff;
  }
  *(uint *)(DAT_0091cf90 + 300) = *(uint *)(DAT_0091cf90 + 300) | 1;
  return;
}

