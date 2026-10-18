/* speed.exe 005d5660 FUN_005d5660; analysis pseudocode, not buildable source.
 * calls 005d4fe0 FUN_005d4fe0
 * calls 005d1a30 FUN_005d1a30
 */

void FUN_005d5660(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *local_4;
  
  local_4 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                      1);
  FUN_005d4fe0(param_2,local_4,param_3 + -1);
  piVar5 = local_4 + 1;
  while (((param_2 < local_4 &&
          (uVar2 = 0xff8 - *(int *)(*local_4 + 4), uVar3 = 0xff8 - *(int *)(local_4[-1] + 4),
          uVar2 <= uVar3)) && (uVar3 <= uVar2))) {
    local_4 = local_4 + -1;
  }
  piVar1 = piVar5;
  piVar7 = local_4;
  if (piVar5 < param_3) {
    uVar2 = 0xff8 - *(int *)(*local_4 + 4);
    do {
      uVar3 = 0xff8 - *(int *)(*piVar5 + 4);
      piVar1 = piVar5;
      if ((uVar3 < uVar2) || (uVar2 < uVar3)) break;
      piVar5 = piVar5 + 1;
      piVar1 = piVar5;
    } while (piVar5 < param_3);
  }
joined_r0x005d56e7:
  do {
    piVar4 = local_4;
    if (param_3 <= piVar1) {
joined_r0x005d572a:
      for (; param_2 < local_4; local_4 = local_4 + -1) {
        piVar4 = piVar4 + -1;
        uVar2 = 0xff8 - *(int *)(*piVar7 + 4);
        uVar3 = 0xff8 - *(int *)(*piVar4 + 4);
        if (uVar2 <= uVar3) {
          if (uVar2 < uVar3) break;
          piVar7 = piVar7 + -1;
          FUN_005d1a30(piVar7,piVar4);
        }
      }
      if (local_4 == param_2) {
        if (piVar1 == param_3) {
          *param_1 = piVar7;
          param_1[1] = piVar5;
          return;
        }
        if (piVar5 != piVar1) {
          FUN_005d1a30(piVar7,piVar5);
        }
        piVar5 = piVar5 + 1;
        FUN_005d1a30(piVar7,piVar1);
        piVar1 = piVar1 + 1;
        piVar7 = piVar7 + 1;
      }
      else {
        local_4 = local_4 + -1;
        if (piVar1 == param_3) {
          piVar7 = piVar7 + -1;
          if (local_4 != piVar7) {
            FUN_005d1a30(local_4,piVar7);
          }
          piVar5 = piVar5 + -1;
          FUN_005d1a30(piVar7,piVar5);
        }
        else {
          FUN_005d1a30(piVar1,local_4);
          piVar1 = piVar1 + 1;
        }
      }
      goto joined_r0x005d56e7;
    }
    uVar2 = 0xff8 - *(int *)(*piVar7 + 4);
    uVar3 = 0xff8 - *(int *)(*piVar1 + 4);
    piVar6 = piVar5;
    if (uVar3 <= uVar2) {
      if (uVar3 < uVar2) goto joined_r0x005d572a;
      piVar6 = piVar5 + 1;
      FUN_005d1a30(piVar5,piVar1);
    }
    piVar5 = piVar6;
    piVar1 = piVar1 + 1;
  } while( true );
}

