/* speed.exe 0081f207 FUN_0081f207; analysis pseudocode, not buildable source.
 * calls 0081d7a4 FUN_0081d7a4
 * calls 0081fe64 FUN_0081fe64
 */

void FUN_0081f207(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1 * 0x88 + DAT_009c2014;
  iVar2 = param_1 * 0x90 + DAT_009c21f4;
  if (*(char *)(iVar2 + 0x4e) == '\0') {
    FUN_0081fe64(*(undefined2 *)(iVar2 + 0x1c),iVar1);
  }
  else {
    iVar2 = 0;
    if (DAT_009c1fd8 != 0) {
      do {
        *(undefined4 *)(iVar1 + iVar2 * 4) = 0;
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(uint)DAT_009c1fd8);
    }
    *(undefined4 *)(iVar1 + 0x14) = 0x3f800000;
  }
  FUN_0081d7a4(param_1);
  return;
}

