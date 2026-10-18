/* speed.exe 004087a0 FUN_004087a0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_004087a0(int *param_1)

{
  int *piVar1;
  float10 fVar2;
  undefined1 auStack_c [4];
  float fStack_8;
  
  piVar1 = (int *)(**(code **)(*param_1 + 4))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x54))();
  (**(code **)(*piVar1 + 0x4c))(auStack_c);
  fVar2 = (float10)(**(code **)(*piVar1 + 0x30))();
  fVar2 = fVar2 * (float10)_DAT_00890634;
  if (fVar2 < (float10)fStack_8 + (float10)_DAT_00890db0) {
    fVar2 = (float10)(float)((float10)fStack_8 + (float10)_DAT_00890db0);
  }
  if ((float10)_DAT_00890dac < fVar2) {
    fVar2 = (float10)_DAT_00890dac;
  }
  return fVar2;
}

