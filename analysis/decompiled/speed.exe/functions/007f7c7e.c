/* speed.exe 007f7c7e FUN_007f7c7e; analysis pseudocode, not buildable source.
 * calls 004b3120 FUN_004b3120
 * calls 007f774f FUN_007f774f
 * calls 007fa07c FUN_007fa07c
 * calls 007fa9a6 FUN_007fa9a6
 * calls 007faac2 FUN_007faac2
 * calls 007f9a97 FUN_007f9a97
 * calls 004b3030 FUN_004b3030
 * calls 004bb220 FUN_004bb220
 * calls 007f9a79 FUN_007f9a79
 * calls 007ec59c FUN_007ec59c
 * calls 007faaee FUN_007faaee
 * calls 007faad1 FUN_007faad1
 */

void __thiscall FUN_007f7c7e(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int local_8;
  
  local_8 = 0;
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  *param_3 = 0;
  do {
    iVar4 = FUN_004b3030(uVar7);
    FUN_007ec59c();
    if (iVar4 != 0) {
      uVar5 = FUN_007f774f(iVar4,4);
      cVar3 = FUN_007faaee(uVar5);
      if (cVar3 != '\0') {
        local_8 = 2;
      }
      cVar3 = FUN_007faad1(uVar5);
      if (cVar3 != '\0') {
        local_8 = 5;
      }
      cVar3 = FUN_007faac2(uVar5);
      if (cVar3 != '\0') {
        local_8 = 4;
      }
      if (local_8 != 0) {
        piVar1 = (int *)(param_1 + 0x90);
        *piVar1 = *piVar1 + 1;
        if (1 < *piVar1) {
          *piVar1 = 0;
        }
        piVar1 = (int *)(param_1 + (*piVar1 + 10) * 0xc);
        *param_3 = (int)piVar1;
        *piVar1 = iVar4;
        if (((local_8 == 2) || (local_8 == 4)) || (local_8 == 5)) {
          iVar6 = *(int *)(iVar4 + 4);
        }
        else {
          iVar6 = *(int *)(iVar4 + 4);
          iVar4 = iVar4 + 8;
        }
        piVar1[1] = iVar4;
        piVar1[2] = iVar6;
        if (*(int *)(param_2 + 0x18) != 0) {
          return;
        }
        if (local_8 == 2) {
          uVar7 = FUN_007fa9a6();
        }
        else {
          if (local_8 != 4) {
            return;
          }
          uVar7 = FUN_007fa07c();
        }
        iVar4 = FUN_007f9a79(uVar7,piVar1);
        if (iVar4 == 2) {
          return;
        }
        FUN_007f9a97();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FUN_004bb220(uVar7,iVar4);
    }
    cVar3 = FUN_004b3120(uVar7);
    if (cVar3 != '\0') {
      return;
    }
  } while( true );
}

