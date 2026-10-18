/* speed.exe 0049dc20 FUN_0049dc20; analysis pseudocode, not buildable source.
 * calls 007c5e60 _printf
 */

void FUN_0049dc20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar5 = 0;
  piVar4 = (int *)(param_1 + 0x10);
  if (0 < iVar1) {
    do {
      iVar3 = *piVar4;
      piVar4 = piVar4 + 1;
      iVar5 = iVar5 + 1;
      if (0 < iVar3) {
        iVar5 = iVar5 + iVar3;
        do {
          iVar2 = *piVar4;
          if (iVar2 == 0) {
            *piVar4 = (int)&LAB_00499620;
          }
          else if (iVar2 == 1) {
            *piVar4 = (int)FUN_004995d0;
          }
          else if (iVar2 == 2) {
            *piVar4 = (int)&LAB_00499660;
          }
          else {
            _printf("Bad signature channel type\n");
          }
          piVar4 = piVar4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    } while (iVar5 < iVar1);
  }
  iVar5 = 0;
  piVar4 = (int *)(param_1 + 0x10 + *(int *)(param_1 + 4) * 4);
  if (0 < iVar1) {
    do {
      iVar3 = *piVar4;
      piVar4 = piVar4 + 1;
      iVar5 = iVar5 + 1;
      if (0 < iVar3) {
        iVar5 = iVar5 + iVar3;
        do {
          iVar2 = *piVar4;
          if (iVar2 == 0) {
            *piVar4 = (int)&LAB_00499710;
          }
          else if (iVar2 == 1) {
            *piVar4 = (int)FUN_00499690;
          }
          else if (iVar2 == 2) {
            *piVar4 = (int)&LAB_004997a0;
          }
          else {
            _printf("Bad signature channel type\n");
          }
          piVar4 = piVar4 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    } while (iVar5 < iVar1);
  }
  return;
}

