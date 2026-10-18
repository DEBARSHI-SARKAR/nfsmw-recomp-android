/* speed.exe 00600540 FUN_00600540; analysis pseudocode, not buildable source.
 * calls 005d51f0 FUN_005d51f0
 * calls 005fc4a0 FUN_005fc4a0
 * calls 005d59f0 FUN_005d59f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00600540(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  float10 fVar4;
  
  param_1[0x5f] = 0;
  param_1[99] = 0;
  param_1[0x5c] = DAT_008a2fb4;
  param_1[0x5d] = DAT_008a2fb8;
  param_1[0x5e] = DAT_008a2fbc;
  param_1[0x60] = DAT_008a2fb4;
  param_1[0x61] = DAT_008a2fb8;
  param_1[0x62] = DAT_008a2fbc;
  if (((*param_1 != 0) &&
      (iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*param_1), iVar1 != 0)) &&
     (*(int **)(iVar1 + 4) != (int *)0x0)) {
    piVar2 = (int *)(**(code **)(**(int **)(iVar1 + 4) + 0x54))();
    if (piVar2 != (int *)0x0) {
      piVar3 = (int *)(**(code **)(*piVar2 + 0x20))();
      param_1[0x5c] = *piVar3;
      param_1[0x5d] = piVar3[1];
      param_1[0x5e] = piVar3[2];
      fVar4 = (float10)(**(code **)(*piVar2 + 0x2c))();
      param_1[99] = (int)(float)fVar4;
      (**(code **)(*piVar2 + 0x34))(param_1 + 0x60);
      if ((float)param_1[99] == _DAT_00890968) {
        fVar4 = (float10)FUN_005fc4a0();
        param_1[99] = (int)(float)fVar4;
      }
    }
    piVar2 = (int *)FUN_005d59f0(&LAB_004037e0);
    if (piVar2 != (int *)0x0) {
      fVar4 = (float10)(**(code **)(*piVar2 + 4))();
      param_1[0x5f] = (int)(float)fVar4;
    }
  }
  return;
}

