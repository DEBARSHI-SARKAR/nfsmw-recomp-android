/* speed.exe 00616b90 FUN_00616b90; analysis pseudocode, not buildable source.
 * calls 0060ccd0 FUN_0060ccd0
 * calls 007c56b0 __CxxThrowException@8
 * calls 004303b0 FUN_004303b0
 * calls 00609370 FUN_00609370
 * calls 00432d50 FUN_00432d50
 * calls 0060cd70 FUN_0060cd70
 */

void __thiscall
FUN_00616b90(int param_1,undefined4 *param_2,char param_3,undefined4 *param_4,undefined4 param_5)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008767f8;
  local_c = ExceptionList;
  if (0x15555553 < *(uint *)(param_1 + 8)) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    ExceptionList = &local_c;
    FUN_004303b0("map/set<T> too long",0x13);
    local_4 = 0;
    FUN_00432d50(local_50);
    local_34[0] = &PTR_FUN_008bf290;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_008c9ca8);
  }
  ExceptionList = &local_c;
  piVar3 = (int *)FUN_0060cd70(*(undefined4 *)(param_1 + 4),param_4,*(undefined4 *)(param_1 + 4),
                               param_5,0);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (param_4 == *(undefined4 **)(param_1 + 4)) {
    (*(undefined4 **)(param_1 + 4))[1] = piVar3;
    **(undefined4 **)(param_1 + 4) = piVar3;
    *(int **)(*(int *)(param_1 + 4) + 8) = piVar3;
  }
  else if (param_3 == '\0') {
    param_4[2] = piVar3;
    if (param_4 == *(undefined4 **)(*(int *)(param_1 + 4) + 8)) {
      *(int **)(*(int *)(param_1 + 4) + 8) = piVar3;
    }
  }
  else {
    *param_4 = piVar3;
    if (param_4 == (undefined4 *)**(int **)(param_1 + 4)) {
      **(int **)(param_1 + 4) = (int)piVar3;
    }
  }
  cVar1 = *(char *)(piVar3[1] + 0x18);
  piVar6 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x18) = 1;
      *param_2 = piVar3;
      ExceptionList = local_c;
      return;
    }
    piVar4 = piVar6 + 1;
    piVar2 = (int *)*piVar4;
    piVar5 = *(int **)piVar2[1];
    if (piVar2 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar2[1])[2];
      if ((char)piVar5[6] == '\0') {
LAB_00616c8b:
        *(undefined1 *)(*piVar4 + 0x18) = 1;
        *(undefined1 *)(piVar5 + 6) = 1;
        *(undefined1 *)(*(int *)(*piVar4 + 4) + 0x18) = 0;
        piVar6 = *(int **)(*piVar4 + 4);
      }
      else {
        if (piVar6 == (int *)piVar2[2]) {
          FUN_0060ccd0(piVar2);
          piVar6 = piVar2;
        }
        *(undefined1 *)(piVar6[1] + 0x18) = 1;
        *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x18) = 0;
        FUN_00609370(*(undefined4 *)(piVar6[1] + 4));
      }
    }
    else {
      if ((char)piVar5[6] == '\0') goto LAB_00616c8b;
      if (piVar6 == (int *)*piVar2) {
        FUN_00609370(piVar2);
        piVar6 = piVar2;
      }
      *(undefined1 *)(piVar6[1] + 0x18) = 1;
      *(undefined1 *)(*(int *)(piVar6[1] + 4) + 0x18) = 0;
      FUN_0060ccd0(*(undefined4 *)(piVar6[1] + 4));
    }
    cVar1 = *(char *)(piVar6[1] + 0x18);
  } while( true );
}

