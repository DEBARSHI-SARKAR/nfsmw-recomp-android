/* speed.exe 00596df0 FUN_00596df0; analysis pseudocode, not buildable source.
 * calls 005961d0 FUN_005961d0
 * calls 005dbed0 FUN_005dbed0
 * calls 005dc7d0 FUN_005dc7d0
 * calls 005e3060 FUN_005e3060
 * calls 005962b0 FUN_005962b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00596df0(int param_1)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = FUN_005dbed0(*(undefined4 *)(param_1 + 0x1d4));
  fVar3 = (float10)FUN_005e3060();
  if ((float10)_DAT_00890968 < fVar3) {
    cVar1 = FUN_005dc7d0();
    if (cVar1 != '\0') {
      FUN_005962b0((float)*(int *)(iVar2 + 0x114),0x680ac597,0,"%$0.0f");
      return;
    }
  }
  FUN_005961d0(0x680ac597,0xfc1bf40);
  return;
}

