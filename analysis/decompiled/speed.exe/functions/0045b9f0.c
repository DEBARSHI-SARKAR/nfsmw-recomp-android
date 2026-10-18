/* speed.exe 0045b9f0 FUN_0045b9f0; analysis pseudocode, not buildable source.
 * calls 0045b9f0 FUN_0045b9f0
 * calls 005d0370 FUN_005d0370
 */

void FUN_0045b9f0(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x21);
  while (cVar1 == '\0') {
    FUN_0045b9f0(param_1[2]);
    piVar2 = (int *)*param_1;
    if (param_1 != (int *)0x0) {
      FUN_005d0370(param_1,0x24,&PTR_LAB_004c5452_1_00890f10);
    }
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x21);
  }
  return;
}

