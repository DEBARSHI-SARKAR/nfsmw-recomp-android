/* speed.exe 00845020 FUN_00845020; analysis pseudocode, not buildable source.
 * calls 0083e480 FUN_0083e480
 */

void FUN_00845020(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  if ((*(int *)(param_1 + 0x1834) != 0) && (*(int *)(param_1 + 0x10) != 1)) {
    iVar3 = 0;
    piVar2 = (int *)(*(int *)(param_1 + 0x1834) + 8);
    do {
      if (((piVar2[-2] != 0) && (*piVar2 != 0)) && (iVar1 = FUN_0083e480(piVar2[-1]), 0 < iVar1)) {
        local_8 = piVar2[-1];
        local_18 = 0;
        local_14 = 2;
        local_c = 0;
        local_4 = 0;
        local_10 = iVar3;
        (*(code *)*piVar2)(param_1,&local_18,piVar2[1]);
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 5;
    } while (iVar3 < 0x1d);
  }
  return;
}

