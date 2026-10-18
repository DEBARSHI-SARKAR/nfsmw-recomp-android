/* speed.exe 006e2930 FUN_006e2930; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 006ceb00 FUN_006ceb00
 * calls 006e2930 FUN_006e2930
 */

void FUN_006e2930(int *param_1)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x25);
  while (cVar1 == '\0') {
    FUN_006e2930(param_1[2]);
    piVar2 = (int *)*param_1;
    FUN_006ceb00();
    if (param_1 != (int *)0x0) {
      FUN_005d0370(param_1,0x28,&PTR_LAB_004c5452_1_00890f10);
    }
    param_1 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x25);
  }
  return;
}

