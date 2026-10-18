/* speed.exe 004180f0 FUN_004180f0; analysis pseudocode, not buildable source.
 * calls 0040fe20 FUN_0040fe20
 * calls 004100a0 FUN_004100a0
 */

void __fastcall FUN_004180f0(int param_1)

{
  float *pfVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  float *pfVar5;
  float10 fVar6;
  
  if (*(char *)(param_1 + 0x2c) != '\0') {
    if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
      puVar2 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x1c) + 0x60))();
      *(undefined4 *)(param_1 + 0x10) = *puVar2;
      *(undefined4 *)(param_1 + 0x14) = puVar2[1];
      *(undefined4 *)(param_1 + 0x18) = puVar2[2];
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x1c) + 0x54))();
      (**(code **)(*piVar3 + 0x34))(param_1 + 0x20);
    }
    if (*(int **)(param_1 + 0xc) != (int *)0x0) {
      uVar4 = (**(code **)(**(int **)(param_1 + 0xc) + 0x60))((float *)(param_1 + 0x10));
      fVar6 = (float10)FUN_004100a0(uVar4);
      *(float *)(param_1 + 0x3c) = (float)fVar6;
      pfVar1 = (float *)(param_1 + 0x30);
      pfVar5 = (float *)(**(code **)(**(int **)(param_1 + 0xc) + 0x60))();
      *pfVar1 = *(float *)(param_1 + 0x10) - *pfVar5;
      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x14) - pfVar5[1];
      *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x18) - pfVar5[2];
      FUN_0040fe20(pfVar1,pfVar1);
    }
  }
  return;
}

