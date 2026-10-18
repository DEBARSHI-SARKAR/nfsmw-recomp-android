/* speed.exe 004135b0 FUN_004135b0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004135b0(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)(**(code **)(**(int **)(param_1 + 0x48) + 0x84))();
  fVar2 = (float10)_DAT_00890968;
  if ((!NAN(fVar1) && !NAN(fVar2)) && fVar1 < fVar2 != (fVar1 == fVar2)) {
    (**(code **)(**(int **)(param_1 + 0x50) + 0x94))(0x41d6930c);
  }
  fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x50) + 0x90))();
  *(float *)(param_1 + 100) = (float)fVar2;
  return;
}

