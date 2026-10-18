/* speed.exe 00714000 FUN_00714000; analysis pseudocode, not buildable source.
 * calls 00713570 FUN_00713570
 * calls 006fef90 FUN_006fef90
 * calls 0070c600 FUN_0070c600
 * calls 004ccab0 FUN_004ccab0
 * calls 004b8880 FUN_004b8880
 * calls 0070afe0 FUN_0070afe0
 * calls 00454810 FUN_00454810
 * calls 0070afb0 FUN_0070afb0
 * calls 0070b020 FUN_0070b020
 * calls 005d0370 FUN_005d0370
 * calls 004b1ce0 FUN_004b1ce0
 * calls 007c4840 FID_conflict:_memcpy
 * calls 00712040 FUN_00712040
 * calls 006269b0 FUN_006269b0
 * calls 007139a0 FUN_007139a0
 * calls 004cb270 FUN_004cb270
 * calls 0045a430 FUN_0045a430
 * calls 0070fbc0 FUN_0070fbc0
 * calls 00708e10 FUN_00708e10
 */

undefined4 FUN_00714000(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *_Dst;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_28;
  int *local_24 [6];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00880098;
  local_c = ExceptionList;
  if (DAT_009933d4 == (int *)0x0) {
    return 1;
  }
  uVar7 = DAT_009933d8 - (int)DAT_009933d4 >> 2;
  if (uVar7 == 0) {
    return 1;
  }
  ExceptionList = &local_c;
  if (1 < uVar7) {
    ExceptionList = &local_c;
    FUN_0070fbc0(DAT_009933d4,DAT_009933d8,uVar7);
  }
  iVar3 = DAT_00992230;
  iVar6 = *(int *)(DAT_00992230 + 0x88);
  iVar2 = *DAT_009933d4;
  local_24[0] = DAT_009933d4;
  local_28 = iVar2;
  if (iVar6 != 0) {
    uVar10 = 0;
    uVar9 = 0;
    uVar4 = FUN_004cb270(*(undefined4 *)(iVar6 + 8));
    FUN_004b8880(uVar4,uVar9,uVar10);
    local_4 = 0;
    pcVar5 = (char *)FUN_00454810(0xaecbb4ad,0);
    if (pcVar5 == (char *)0x0) {
      pcVar5 = (char *)FUN_006269b0(1);
    }
    cVar1 = *pcVar5;
    pcVar5 = (char *)FUN_00454810(0x87930ed2,0);
    if (pcVar5 == (char *)0x0) {
      pcVar5 = (char *)FUN_006269b0(1);
    }
    cVar8 = *pcVar5;
    if ((*(uint *)(iVar3 + 0x28) >> 2 & 1) != 0) {
      cVar8 = '\x01';
    }
    if ((cVar1 != '\0') && (*(byte *)(iVar6 + 0x3b) < *(byte *)(iVar2 + 0x3b))) {
      cVar8 = '\x01';
    }
    local_4 = 0xffffffff;
    FUN_0045a430();
    if (cVar8 == '\0') {
      FUN_00712040(&DAT_009933d0);
      goto LAB_00714283;
    }
  }
  _Dst = local_24[0];
  if ((DAT_009933ac != 0) && (DAT_009933b0 - DAT_009933ac >> 2 != 0)) {
    FUN_007139a0(&DAT_009933a4);
    FUN_0070b020();
  }
  iVar6 = FUN_006fef90(iVar2,0);
  if (iVar6 == -5) {
    if (iVar2 != 0) {
      FUN_004ccab0();
      FUN_004b1ce0(iVar2);
    }
    FID_conflict__memcpy(_Dst,_Dst + 1,(DAT_009933d8 - (int)(_Dst + 1) >> 2) << 2);
    DAT_009933d8 = DAT_009933d8 + -4;
    ExceptionList = local_c;
    return 0;
  }
  if ((iVar6 == -2) && (iVar6 = FUN_0070c600(iVar2,1), iVar6 != 2)) {
    FUN_00713570(local_24,DAT_00993398,&local_28);
    FUN_0070afb0(local_24,_Dst);
    ExceptionList = local_c;
    return 1;
  }
  if ((DAT_009933c0 != 0) && (DAT_009933c4 - DAT_009933c0 >> 2 != 0)) {
    FUN_00708e10(local_24,DAT_009933c0,DAT_009933c4,FUN_007042d0);
    FUN_0070afe0(local_24,local_24[0],DAT_009933c4);
  }
  FUN_00713570(local_24,DAT_009933c0,&local_28);
LAB_00714283:
  if (DAT_009933d4 != (int *)0x0) {
    FUN_005d0370(DAT_009933d4,(DAT_009933dc - (int)DAT_009933d4 >> 2) << 2,0);
  }
  DAT_009933dc = 0;
  DAT_009933d8 = 0;
  DAT_009933d4 = (int *)0x0;
  ExceptionList = local_c;
  return 1;
}

