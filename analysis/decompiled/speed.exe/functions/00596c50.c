/* speed.exe 00596c50 FUN_00596c50; analysis pseudocode, not buildable source.
 * calls 005961d0 FUN_005961d0
 * calls 005dbed0 FUN_005dbed0
 * calls 005e3060 FUN_005e3060
 * calls 005962b0 FUN_005962b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00596c50(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_005dbed0(*(undefined4 *)(param_1 + 0x1d4));
  fVar2 = (float10)FUN_005e3060();
  if ((float10)_DAT_00890968 < fVar2) {
    FUN_005962b0((float)*(int *)(iVar1 + 0x118),0x94bfdfc,0,"%$0.0f");
    return;
  }
  FUN_005961d0(0x94bfdfc,0xfc1bf40);
  return;
}

