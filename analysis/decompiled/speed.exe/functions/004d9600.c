/* speed.exe 004d9600 FUN_004d9600; analysis pseudocode, not buildable source.
 * calls 004ae8b0 FUN_004ae8b0
 */

void __thiscall FUN_004d9600(int param_1,float param_2)

{
  int *piVar1;
  char cVar2;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    cVar2 = FUN_004ae8b0();
    if (cVar2 == '\0') {
      *(float *)(param_1 + 8) = param_2;
      *(float *)(param_1 + 4) = param_2 + *(float *)(param_1 + 4);
    }
    else {
      *(undefined4 *)(param_1 + 8) = 0;
    }
    for (piVar1 = *(int **)(param_1 + 0x10); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      (**(code **)(*piVar1 + 0x14))(param_2);
    }
  }
  return;
}

