/* speed.exe 006702d0 FUN_006702d0; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006702d0(int param_1)

{
  float fVar1;
  int *piVar2;
  float unaff_ESI;
  float10 fVar3;
  float local_8 [2];
  
  if ((*(float *)(param_1 + 0x160) <= _DAT_00890968) &&
     (*(undefined4 *)(param_1 + 0x164) = 0, *(int *)(param_1 + 0xf4) != 0)) {
    piVar2 = (int *)FUN_005d59f0(&LAB_00668390);
    if (piVar2 != (int *)0x0) {
      local_8[0] = 0.0;
      fVar3 = (float10)(**(code **)(*piVar2 + 4))(local_8);
      local_8[0] = (float)fVar3;
      if ((_DAT_00890968 < unaff_ESI) && (_DAT_00890968 < local_8[0])) {
        fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0xf4) + 4))();
        fVar1 = (float)(fVar3 - (float10)local_8[0]);
        if ((fVar3 - (float10)local_8[0] < (float10)unaff_ESI) && (_DAT_00890968 < fVar1)) {
          *(float *)(param_1 + 0x164) = (fVar1 / unaff_ESI + _DAT_0089096c) * _DAT_008933d4;
        }
      }
    }
  }
  return;
}

