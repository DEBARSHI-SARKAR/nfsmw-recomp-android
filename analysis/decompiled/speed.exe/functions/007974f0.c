/* speed.exe 007974f0 FUN_007974f0; analysis pseudocode, not buildable source.
 * calls 007412d0 FUN_007412d0
 * calls 00735750 FUN_00735750
 * calls 00735960 FUN_00735960
 * calls 0078a3a0 FUN_0078a3a0
 * calls 00794f80 FUN_00794f80
 * calls 00792230 FUN_00792230
 * calls 00840aa0 FUN_00840aa0
 * calls 0045ce40 FUN_0045ce40
 * calls 007357a0 FUN_007357a0
 */

void FUN_007974f0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_4;
  
  local_4 = 0;
  FUN_0078a3a0(&local_4,0x20);
  DAT_009b420c = local_4;
  if (local_4 == 3) {
    cVar1 = FUN_007357a0();
    if ((cVar1 == '\0') && (DAT_009b41fc < 4)) {
      FUN_007412d0();
      FUN_00792230(4);
      return;
    }
    FUN_00735750();
  }
  else {
    if (local_4 == 6) {
      iVar2 = FUN_00794f80();
      iVar2 = FUN_00840aa0(*(undefined4 *)(iVar2 + 0x38),0x7374696d);
      iVar2 = iVar2 + 2;
      uVar5 = 0x40000000;
      uVar4 = 0x40000000;
      uVar3 = FUN_0045ce40(0x40000000,0x40000000,iVar2);
      FUN_00735960(uVar3,uVar4,uVar5,iVar2);
      return;
    }
    if (local_4 == 7) {
      FUN_00792230(7);
      return;
    }
  }
  return;
}

