/* speed.exe 0047b250 FUN_0047b250; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 */

void __fastcall FUN_0047b250(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar1 = (int *)param_1[1];
  while (piVar3 = piVar1, piVar3 != param_1 + 1) {
    piVar1 = (int *)*piVar3;
    if (*(char *)((int)piVar3 + 0xe) != '\0') {
      piVar2 = (int *)piVar3[1];
      *piVar2 = (int)piVar1;
      piVar1[1] = (int)piVar2;
      thunk_FUN_007c7250(piVar3);
      *param_1 = *param_1 + -1;
    }
  }
  return;
}

