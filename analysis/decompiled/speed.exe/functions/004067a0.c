/* speed.exe 004067a0 FUN_004067a0; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004067a0(int param_1)

{
  char cVar1;
  int *piVar2;
  float10 fVar3;
  
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x18))(0);
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x1c))(0);
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x14))(0);
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x2c))(0);
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x24))(0);
  cVar1 = (**(code **)(**(int **)(param_1 + 0x48) + 0x78))();
  if (cVar1 == '\0') {
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x30) + 0x54))();
    fVar3 = (float10)(**(code **)(*piVar2 + 0x30))();
    if ((float10)_DAT_00890d34 <= fVar3) {
                    /* WARNING: Could not recover jumptable at 0x0040680b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0x4c) + 0x1c))(0x3e800000);
      return;
    }
  }
  return;
}

