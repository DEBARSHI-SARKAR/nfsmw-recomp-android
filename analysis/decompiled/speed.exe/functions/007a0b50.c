/* speed.exe 007a0b50 FUN_007a0b50; analysis pseudocode, not buildable source.
 * calls 0078a310 FUN_0078a310
 * calls 0079ff50 FUN_0079ff50
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007a0b50(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_40c [1024];
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  local_40c[0] = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 1;
  iVar1 = 0xd;
  if (0xd < DAT_009b46d8) {
    iVar1 = DAT_009b46d8;
  }
  if (DAT_009b46dc < iVar1) {
    iVar1 = DAT_009b46dc;
  }
  FUN_0078a310(iVar1 - DAT_009b46d8,DAT_009b46d4);
  FUN_007c4b80();
  iVar2 = 0;
  iVar1 = FUN_007c4b80();
  if (0 < iVar1) {
    do {
      FUN_0078a310(*(undefined1 *)(iVar2 + param_1),8);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  FUN_0079ff50(0xd,local_40c,1);
  return;
}

