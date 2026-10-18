/* speed.exe 0049dac0 FUN_0049dac0; analysis pseudocode, not buildable source.
 */

void __thiscall
FUN_0049dac0(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_4;
  
  iVar5 = *(int *)(param_1 + 4);
  iVar3 = iVar5 * 2 + 4;
  param_4 = param_1 + (*(int *)(param_1 + 8) * param_4 + iVar3) * 4;
  piVar4 = (int *)(param_1 + 0x10 + iVar5 * 4);
  param_3 = param_1 + (*(int *)(param_1 + 8) * param_3 + iVar3) * 4;
  piVar1 = piVar4 + iVar5;
  if (param_6 == 0) {
    if (piVar4 < piVar1) {
      iVar3 = param_5 + 0x10;
      do {
        iVar5 = *piVar4;
        piVar4 = piVar4 + 1;
        if (0 < iVar5) {
          do {
            pcVar2 = (code *)*piVar4;
            piVar4 = piVar4 + 1;
            (*pcVar2)(param_2,&param_3,&param_4,iVar3);
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        iVar3 = iVar3 + 0x30;
      } while (piVar4 < piVar1);
      return;
    }
  }
  else {
    local_4 = 0;
    if (piVar4 < piVar1) {
      iVar3 = param_5 + 0x10;
      do {
        iVar5 = *piVar4;
        piVar4 = piVar4 + 1;
        if ((*(uint *)(param_6 + (local_4 >> 5) * 4) & 1 << ((byte)local_4 & 0x1f)) == 0) {
          if (0 < iVar5) {
            do {
              pcVar2 = (code *)*piVar4;
              piVar4 = piVar4 + 1;
              if ((pcVar2 == FUN_00499690) || (pcVar2 == (code *)&LAB_004997a0)) {
                param_3 = param_3 + 0xc;
                param_4 = param_4 + 0xc;
              }
              else if (pcVar2 == (code *)&LAB_00499710) {
                param_3 = param_3 + 0x10;
                param_4 = param_4 + 0x10;
              }
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
        else if (0 < iVar5) {
          do {
            pcVar2 = (code *)*piVar4;
            piVar4 = piVar4 + 1;
            (*pcVar2)(param_2,&param_3,&param_4,iVar3);
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        iVar3 = iVar3 + 0x30;
        local_4 = local_4 + 1;
      } while (piVar4 < piVar1);
    }
  }
  return;
}

