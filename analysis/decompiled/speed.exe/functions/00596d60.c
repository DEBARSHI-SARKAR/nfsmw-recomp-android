/* speed.exe 00596d60 FUN_00596d60; analysis pseudocode, not buildable source.
 * calls 005961d0 FUN_005961d0
 * calls 005dbed0 FUN_005dbed0
 * calls 005dc7d0 FUN_005dc7d0
 * calls 005963a0 FUN_005963a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00596d60(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_005dbed0(*(undefined4 *)(param_1 + 0x1d4));
  uVar3 = 0x49fd5dcb;
  if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x3b) == '\x01') {
    uVar3 = 0x1c6f2a82;
  }
  if (_DAT_00890968 < *(float *)(iVar2 + 0x128)) {
    cVar1 = FUN_005dc7d0();
    if (cVar1 != '\0') {
      FUN_005963a0(*(undefined4 *)(iVar2 + 0x128),uVar3);
      return;
    }
  }
  FUN_005961d0(uVar3,0xfc1bf40);
  return;
}

