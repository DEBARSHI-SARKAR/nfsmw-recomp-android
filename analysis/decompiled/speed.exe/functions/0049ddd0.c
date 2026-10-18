/* speed.exe 0049ddd0 FUN_0049ddd0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0049ddd0(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  piVar4 = (int *)(param_1 + 0x10);
  param_2 = param_1 + (*(int *)(param_1 + 8) * param_2 + 4 + *(int *)(param_1 + 4) * 2) * 4;
  piVar1 = piVar4 + *(int *)(param_1 + 4);
  if (param_4 == 0) {
    if (piVar4 < piVar1) {
      iVar3 = param_3 + 0x10;
      do {
        iVar5 = *piVar4;
        piVar4 = piVar4 + 1;
        if (0 < iVar5) {
          do {
            pcVar2 = (code *)*piVar4;
            piVar4 = piVar4 + 1;
            (*pcVar2)(&param_2,iVar3);
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        iVar3 = iVar3 + 0x30;
      } while (piVar4 < piVar1);
      return;
    }
  }
  else {
    iVar3 = 0;
    if (piVar4 < piVar1) {
      iVar5 = param_3 + 0x10;
      do {
        iVar6 = *piVar4;
        piVar4 = piVar4 + 1;
        if ((*(uint *)(param_4 + (iVar3 >> 5) * 4) & 1 << ((byte)iVar3 & 0x1f)) == 0) {
          if (0 < iVar6) {
            do {
              pcVar2 = (code *)*piVar4;
              piVar4 = piVar4 + 1;
              if ((pcVar2 == FUN_004995d0) || (pcVar2 == (code *)&LAB_00499660)) {
                param_2 = param_2 + 0xc;
              }
              else if (pcVar2 == (code *)&LAB_00499620) {
                param_2 = param_2 + 0x10;
              }
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
        }
        else if (0 < iVar6) {
          do {
            pcVar2 = (code *)*piVar4;
            piVar4 = piVar4 + 1;
            (*pcVar2)(&param_2,iVar5);
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        iVar5 = iVar5 + 0x30;
        iVar3 = iVar3 + 1;
      } while (piVar4 < piVar1);
    }
  }
  return;
}

