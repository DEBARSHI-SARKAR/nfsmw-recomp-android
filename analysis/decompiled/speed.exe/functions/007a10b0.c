/* speed.exe 007a10b0 thunk_FUN_007a0c20; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_007a0c20(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_40c [1024];
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined1 uStack_4;
  
  auStack_40c[0] = 0;
  uStack_c = 0;
  uStack_8 = 0;
  uStack_4 = 1;
  iVar1 = 6;
  if (6 < DAT_009b46d8) {
    iVar1 = DAT_009b46d8;
  }
  if (DAT_009b46dc < iVar1) {
    iVar1 = DAT_009b46dc;
  }
  FUN_0078a310(iVar1 - DAT_009b46d8,DAT_009b46d4);
  DAT_009b4228 = DAT_009b4228 + 1;
  FUN_0078a310(DAT_009b4228,0x20);
  FUN_007c4b80();
  iVar2 = 0;
  iVar1 = FUN_007c4b80();
  if (0 < iVar1) {
    do {
      FUN_0078a310(*(undefined1 *)(iVar2 + param_1),8);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  FUN_0079ff50(6,auStack_40c,0);
  return;
}

