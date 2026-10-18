/* speed.exe 00420180 FUN_00420180; analysis pseudocode, not buildable source.
 * calls 00411a70 FUN_00411a70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00420180(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  
  iVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0x48))();
  *(undefined4 *)(iVar2 + 0x78) = 1;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0x48))();
  *(undefined4 *)(iVar2 + 0x80) = 1;
  (**(code **)(**(int **)(param_1 + 0x40) + 0x50))(2);
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  FUN_00411a70(0x41f00000);
  fVar4 = (float10)(**(code **)(**(int **)(param_1 + 0x40) + 0x84))();
  if ((fVar4 < (float10)_DAT_00890968 == (fVar4 == (float10)_DAT_00890968)) &&
     (*(int **)(param_1 + 0x40) != (int *)0x0)) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0xa0))();
    if (iVar2 != 0) {
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x40) + 0xa0))();
      cVar1 = (**(code **)(*piVar3 + 0x28))();
      if (cVar1 == '\0') {
        *(float *)(param_1 + 0x50) =
             *(float *)(*(int *)(*(int *)(param_1 + 0x68) + 8) + 0x8c) * _DAT_00890958;
        *(float *)(param_1 + 0x54) =
             *(float *)(*(int *)(*(int *)(param_1 + 0x68) + 8) + 0x94) * _DAT_00890958;
      }
    }
  }
  return;
}

