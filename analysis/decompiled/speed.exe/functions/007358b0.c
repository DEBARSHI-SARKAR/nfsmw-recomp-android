/* speed.exe 007358b0 FUN_007358b0; analysis pseudocode, not buildable source.
 * calls 0083f560 FUN_0083f560
 * calls 0079f090 FUN_0079f090
 * calls 0078c380 FUN_0078c380
 * calls 0078b2c0 FUN_0078b2c0
 * calls 0079bac0 FUN_0079bac0
 * calls 0079a150 FUN_0079a150
 */

void __fastcall FUN_007358b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0078b2c0();
  if ((uint)(iVar1 - *(int *)(param_1 + 0x1c)) < 0x65) {
    *(undefined1 *)(param_1 + 0x1a) = 0;
  }
  else {
    if (*(char *)(param_1 + 0x1a) == '\0') {
      FUN_0078b2c0();
    }
    *(undefined1 *)(param_1 + 0x1a) = 1;
  }
  if (DAT_009b416c != 0) {
    uVar2 = 0;
    FUN_0079bac0(0);
    FUN_0079a150(uVar2);
    return;
  }
  FUN_0079f090();
  iVar1 = FUN_0078c380(0);
  if (iVar1 != 0) {
    FUN_0079f090();
    iVar1 = FUN_0078c380(0);
    if (*(int *)(iVar1 + 0x88) == 3) {
      FUN_0079f090();
      iVar1 = FUN_0078c380(0);
      iVar1 = FUN_0083f560(*(undefined4 *)(iVar1 + 0x9c));
      uVar2 = *(undefined4 *)(iVar1 + 0xc);
      FUN_0079bac0(uVar2);
      FUN_0079a150(uVar2);
      return;
    }
  }
  uVar2 = 0xffffffff;
  FUN_0079bac0(0xffffffff);
  FUN_0079a150(uVar2);
  return;
}

