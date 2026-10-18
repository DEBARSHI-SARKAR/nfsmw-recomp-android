/* speed.exe 00523880 FUN_00523880; analysis pseudocode, not buildable source.
 * calls 00591160 FUN_00591160
 * calls 00581bf0 FUN_00581bf0
 * calls 0056bc10 FUN_0056bc10
 * calls 0056bc00 FUN_0056bc00
 * calls 00460c70 FUN_00460c70
 * calls 00592410 FUN_00592410
 * calls 0045d380 FUN_0045d380
 * calls 0056ecc0 FUN_0056ecc0
 */

void __fastcall FUN_00523880(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_0045d380(1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar2 + -4;
  }
  iVar2 = FUN_00592410(iVar2);
  FUN_0056ecc0(*(undefined4 *)(param_1 + 0x3c));
  iVar3 = FUN_00591160();
  if (iVar3 != -0x6446333d) {
    uVar4 = FUN_00591160();
    cVar1 = FUN_0056bc00(uVar4);
    if (cVar1 != '\0') {
      if (*(int *)(iVar2 + 0xc) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 0xc) + -4;
      }
      uVar4 = FUN_00591160();
      uVar4 = FUN_0056bc10(uVar4);
      FUN_00460c70(iVar2 + 0xc,uVar4);
      return;
    }
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0xc) + -4;
  }
  uVar4 = FUN_00581bf0();
  FUN_00460c70(iVar2 + 0xc,uVar4);
  return;
}

