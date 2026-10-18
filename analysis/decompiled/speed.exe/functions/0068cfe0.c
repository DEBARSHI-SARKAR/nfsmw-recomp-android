/* speed.exe 0068cfe0 FUN_0068cfe0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0068cfe0(int param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x7c) + 0x74))();
  if (cVar1 != '\0') {
    (**(code **)(*(int *)(param_1 + 0x48) + 4))();
    (**(code **)(*(int *)(param_1 + 0x48) + 0x1c))(0x3f800000);
    uVar2 = (**(code **)(**(int **)(param_1 + 0x7c) + 0x74))();
    if ((uVar2 & 2) != 0) {
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x34) + 0x54))();
      (**(code **)(*piVar3 + 100))(&DAT_008a2fb4);
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x34) + 0x54))();
                    /* WARNING: Could not recover jumptable at 0x0068d03d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar3 + 0x60))(&DAT_008a2fb4);
      return;
    }
  }
  return;
}

