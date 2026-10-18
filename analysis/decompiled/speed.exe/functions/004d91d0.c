/* speed.exe 004d91d0 FUN_004d91d0; analysis pseudocode, not buildable source.
 * calls 004ae8b0 FUN_004ae8b0
 */

void __thiscall FUN_004d91d0(int param_1,float param_2)

{
  int *piVar1;
  char cVar2;
  
  cVar2 = FUN_004ae8b0();
  if (cVar2 == '\0') {
    *(float *)(param_1 + 0x40) = param_2;
    *(float *)(param_1 + 0x3c) = param_2 + *(float *)(param_1 + 0x3c);
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    for (piVar1 = *(int **)(param_1 + 0x20); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      (**(code **)(*piVar1 + 0x24))(param_2);
      (**(code **)(*piVar1 + 0x30))();
    }
    for (piVar1 = *(int **)(param_1 + 0x24); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      (**(code **)(*piVar1 + 0x24))(param_2);
      (**(code **)(*piVar1 + 0x30))();
    }
  }
  return;
}

