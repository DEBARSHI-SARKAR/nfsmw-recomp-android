/* speed.exe 0082621f FUN_0082621f; analysis pseudocode, not buildable source.
 * calls 00824540 FUN_00824540
 * calls 00824dd2 FUN_00824dd2
 * calls 0081eae9 FUN_0081eae9
 * calls 00824500 FUN_00824500
 * calls 0081e9e7 FUN_0081e9e7
 * calls 00824dfd FUN_00824dfd
 */

void FUN_0082621f(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  iVar2 = param_1 * 0x5c + DAT_009c2520;
  if (param_2 < 1) {
    if (*(int *)(iVar2 + 0x58) != 0) {
      FUN_00824540(iVar2 + 0x40,*(int *)(iVar2 + 0x58));
      FUN_0081eae9(*(undefined4 *)(iVar2 + 0x58));
      *(undefined4 *)(iVar2 + 0x58) = 0;
    }
  }
  else {
    if (*(int *)(iVar2 + 0x58) == 0) {
      iVar1 = FUN_0081e9e7(0x58);
      *(int *)(iVar2 + 0x58) = iVar1;
      *(undefined4 *)(iVar1 + 4) = 0;
      *(undefined2 *)(*(int *)(iVar2 + 0x58) + 0x18) = 0x50;
      *(undefined1 *)(*(int *)(iVar2 + 0x58) + 0x1a) = 0;
      FUN_00824dd2(*(undefined4 *)(iVar2 + 0x58));
      FUN_00824500(iVar2 + 0x40,*(undefined4 *)(iVar2 + 0x58));
    }
    local_8 = (uint)DAT_009c2046 << 8;
    local_c = param_2 << 8;
    FUN_00824dfd(*(undefined4 *)(iVar2 + 0x58),&local_c);
  }
  return;
}

