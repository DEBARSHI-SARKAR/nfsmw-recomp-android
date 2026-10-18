/* speed.exe 00596b20 FUN_00596b20; analysis pseudocode, not buildable source.
 * calls 005ddec0 FUN_005ddec0
 * calls 005961d0 FUN_005961d0
 * calls 005dbed0 FUN_005dbed0
 * calls 005963a0 FUN_005963a0
 */

void __fastcall FUN_00596b20(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  FUN_005dbed0(*(undefined4 *)(param_1 + 0x1d4));
  iVar1 = *(int *)(param_1 + 0x1d0);
  if ((-1 < iVar1) && (iVar1 != *(int *)(param_1 + 0x1d4))) {
    FUN_005dbed0(iVar1);
    fVar2 = (float10)FUN_005ddec0();
    fVar3 = (float10)FUN_005ddec0();
    FUN_005963a0((float)ABS(fVar3 - (float10)(float)fVar2),0xab44ed8b);
    return;
  }
  FUN_005961d0(0xab44ed8b,0xfc1bf40);
  return;
}

