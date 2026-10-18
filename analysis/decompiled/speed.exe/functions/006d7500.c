/* speed.exe 006d7500 FUN_006d7500; analysis pseudocode, not buildable source.
 * calls 007e7d7c D3DXCreateEffectPool
 * calls 00460d20 FUN_00460d20
 * calls 006c6080 FUN_006c6080
 */

void FUN_006d7500(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (DAT_00982c84 == 0) {
    D3DXCreateEffectPool(&DAT_00982c84);
  }
  piVar4 = &DAT_0093de78;
  do {
    iVar3 = *piVar4;
    if (*(int *)(iVar3 + 0x48) == 0) {
      FUN_006c6080();
    }
    switch(*(undefined4 *)(iVar3 + 4)) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 0x12:
      if (-1 < DAT_00982c3c) {
        piVar1 = (int *)(iVar3 + 0x18 + DAT_00982c3c * 4);
        iVar5 = DAT_00982c3c;
        do {
          if (*piVar1 != -1) {
            if (-1 < iVar5) {
              uVar2 = *(undefined4 *)(iVar3 + 0x18 + iVar5 * 4);
              *(undefined4 *)(iVar3 + 0xc) = uVar2;
              uVar2 = (**(code **)(**(int **)(iVar3 + 0x48) + 0x30))(*(int **)(iVar3 + 0x48),uVar2);
              *(undefined4 *)(iVar3 + 0x10) = uVar2;
              *(bool *)(iVar3 + 0x40) = 0 < *(int *)(iVar3 + 0x28 + iVar5 * 4);
              *(int *)(iVar3 + 0x3c) = iVar5;
              goto LAB_006d75a2;
            }
            break;
          }
          iVar5 = iVar5 + -1;
          piVar1 = piVar1 + -1;
        } while (-1 < iVar5);
      }
      *(undefined4 *)(iVar3 + 0x10) = 0;
      break;
    default:
      if (*(int *)(iVar3 + 0x10) != 0) {
        uVar2 = (**(code **)(**(int **)(iVar3 + 0x48) + 0x30))
                          (*(int **)(iVar3 + 0x48),*(undefined4 *)(iVar3 + 0xc));
        *(undefined4 *)(iVar3 + 0x10) = uVar2;
LAB_006d75a2:
        (**(code **)(**(int **)(iVar3 + 0x48) + 0xe8))(*(int **)(iVar3 + 0x48),uVar2);
      }
    }
    switch(*(undefined4 *)(iVar3 + 4)) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 0x12:
      (**(code **)(**(int **)(iVar3 + 0x48) + 0x14))
                (*(int **)(iVar3 + 0x48),*(undefined4 *)(iVar3 + 0x10),&uStack_c);
      *(undefined4 *)(iVar3 + 0x14) = uStack_8;
    }
    if ((*(int *)(iVar3 + 4) == 4) &&
       (iVar3 = FUN_00460d20(uStack_c,"car_no_env_fixed"), iVar3 == 0)) {
      DAT_00901840 = 0;
      DAT_009017b8 = 0;
      DAT_00901844 = 0;
    }
    piVar4 = piVar4 + 1;
    if (0x93def0 < (int)piVar4) {
      return;
    }
  } while( true );
}

