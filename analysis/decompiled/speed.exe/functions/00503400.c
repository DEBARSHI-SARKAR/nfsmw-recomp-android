/* speed.exe 00503400 FUN_00503400; analysis pseudocode, not buildable source.
 * calls 006cb320 FUN_006cb320
 * calls 004fb210 FUN_004fb210
 * calls 0045cd20 __break
 * calls 00502e80 FUN_00502e80
 */

int FUN_00503400(uint param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  
  if (param_1 != 0) {
    iVar5 = *(int *)(&DAT_00915198 + (param_1 & 0xff) * 4);
    if ((iVar5 != 0) && (*(uint *)(iVar5 + 0x24) == param_1)) {
      return iVar5;
    }
    if ((int **)DAT_009173f8 != &DAT_009173f8) {
      cVar1 = (&DAT_0091a0dc)[param_1 & 0x1fff];
      piVar7 = DAT_009173f8;
      do {
        if (cVar1 == '\0') break;
        if (param_3 == 0) {
          iVar5 = FUN_00502e80(param_1);
LAB_00503489:
          if (iVar5 != 0) {
            iVar2 = *piVar7;
            piVar3 = (int *)piVar7[1];
            *piVar3 = iVar2;
            *(int **)(iVar2 + 4) = piVar3;
            piVar4 = DAT_009173f8;
            piVar3 = DAT_009173f8 + 1;
            DAT_009173f8 = piVar7;
            *piVar3 = (int)piVar7;
            *piVar7 = (int)piVar4;
            piVar7[1] = (int)&DAT_009173f8;
            uVar6 = *(uint *)(iVar5 + 0x24) & 0xff;
            *(undefined1 *)(iVar5 + 0x53) = 1;
            *(int *)(&DAT_00915198 + uVar6 * 4) = iVar5;
            *(undefined4 *)(&DAT_00915598 + uVar6 * 4) = *(undefined4 *)(iVar5 + 0x24);
            return iVar5;
          }
        }
        else if (((piVar7[5] != 0) && (iVar5 = *(int *)(piVar7[5] + 0x74), iVar5 != 0)) &&
                (iVar5 = FUN_004fb210(param_1,iVar5,piVar7[6],0,8), iVar5 != 0)) {
          iVar5 = *(int *)(iVar5 + 4);
          goto LAB_00503489;
        }
        piVar7 = (int *)*piVar7;
      } while ((int **)piVar7 != &DAT_009173f8);
    }
    iVar5 = FUN_006cb320(param_1);
    if (iVar5 != 0) {
      return iVar5;
    }
    uVar6 = 0;
    if (DAT_00915fa8 != 0) {
      do {
        if (*(uint *)(&DAT_009159a0 + uVar6 * 4) == param_1) {
          if (*(int *)(&DAT_00915a30 + uVar6 * 4) != 0) {
            return *(int *)(&DAT_00915a30 + uVar6 * 4);
          }
          break;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < DAT_00915fa8);
    }
  }
  if (param_2 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = DAT_00916040;
    if (DAT_00916040 == 0) {
                    /* WARNING: Subroutine does not return */
      __break();
    }
  }
  return iVar5;
}

