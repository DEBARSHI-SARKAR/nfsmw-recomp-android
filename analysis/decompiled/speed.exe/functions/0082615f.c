/* speed.exe 0082615f FUN_0082615f; analysis pseudocode, not buildable source.
 * calls 00824540 FUN_00824540
 * calls 00824f14 FUN_00824f14
 * calls 0081eae9 FUN_0081eae9
 * calls 00824f3a FUN_00824f3a
 * calls 00824500 FUN_00824500
 * calls 0081e9e7 FUN_0081e9e7
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0082615f(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  iVar2 = param_1 * 0x5c + DAT_009c2520;
  if (_DAT_0089096c <= param_2) {
    if (*(int *)(iVar2 + 0x54) != 0) {
      FUN_00824540(iVar2 + 0x40,*(int *)(iVar2 + 0x54));
      FUN_0081eae9(*(undefined4 *)(iVar2 + 0x54));
      *(undefined4 *)(iVar2 + 0x54) = 0;
    }
  }
  else {
    if (*(int *)(iVar2 + 0x54) == 0) {
      iVar1 = FUN_0081e9e7(0x28);
      *(int *)(iVar2 + 0x54) = iVar1;
      *(undefined4 *)(iVar1 + 4) = 0;
      *(undefined2 *)(*(int *)(iVar2 + 0x54) + 0x18) = 0x28;
      *(undefined1 *)(*(int *)(iVar2 + 0x54) + 0x1a) = 0;
      FUN_00824f14(*(undefined4 *)(iVar2 + 0x54));
      FUN_00824500(iVar2 + 0x40,*(undefined4 *)(iVar2 + 0x54));
    }
    local_c = (uint)DAT_009c2046 << 8;
    local_10 = (int)ROUND((float)DAT_009c2046 * param_2) << 7;
    local_8 = 0x100;
    FUN_00824f3a(*(undefined4 *)(iVar2 + 0x54),&local_10);
  }
  return;
}

