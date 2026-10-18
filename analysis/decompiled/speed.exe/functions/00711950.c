/* speed.exe 00711950 FUN_00711950; analysis pseudocode, not buildable source.
 * calls 007c4840 FID_conflict:_memcpy
 * calls 004b1ce0 FUN_004b1ce0
 * calls 0070c600 FUN_0070c600
 * calls 004ccab0 FUN_004ccab0
 * calls 006269b0 FUN_006269b0
 * calls 0070fc90 FUN_0070fc90
 * calls 004cb270 FUN_004cb270
 * calls 004b8880 FUN_004b8880
 * calls 00454810 FUN_00454810
 * calls 0045a430 FUN_0045a430
 */

int FUN_00711950(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  ushort uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087ff78;
  local_c = ExceptionList;
  if ((DAT_009933c0 != (int *)0x0) &&
     (uVar2 = (int)DAT_009933c4 - (int)DAT_009933c0 >> 2, uVar2 != 0)) {
    ExceptionList = &local_c;
    if (1 < uVar2) {
      piVar3 = DAT_009933c0;
      if (DAT_009933c0 == DAT_009933c4) {
LAB_007119ae:
        ExceptionList = &local_c;
        FUN_0070fc90(piVar3,DAT_009933c4,(int)DAT_009933c4 - (int)piVar3 >> 2,&LAB_004b1d20);
      }
      else {
        do {
          if (*(byte *)(*DAT_009933c0 + 0x3b) < 0x65) goto LAB_007119ae;
          piVar3 = piVar3 + 1;
          ExceptionList = &local_c;
        } while (piVar3 != DAT_009933c4);
      }
    }
    piVar3 = DAT_009933c0;
    if (DAT_009933c0 != DAT_009933c4) {
      do {
        iVar1 = *piVar3;
        if (*(char *)(iVar1 + 0x39) == '\0') {
          uVar8 = 0;
          piVar6 = (int *)(iVar1 + 0x1c);
          iVar7 = 7;
          do {
            if ((*piVar6 != 0) && (*(char *)(*piVar6 + 4) != '\0')) {
              uVar8 = uVar8 + 1;
            }
            piVar6 = piVar6 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          if (uVar8 == *(byte *)(iVar1 + 0x38)) {
            *(undefined1 *)(iVar1 + 0x39) = 1;
            if ((*(byte *)(iVar1 + 0x3e) & 2) == 0) {
              *(undefined4 *)(iVar1 + 0x10) = DAT_00925ae8;
            }
          }
          else {
            iVar7 = FUN_0070c600(iVar1,1);
            if ((*(char *)(iVar1 + 0x38) == '\0') || (iVar7 == 2)) {
              iVar7 = (int)DAT_009933c4 - (int)(piVar3 + 1);
              goto LAB_00711b31;
            }
            uVar10 = 0;
            uVar9 = 0;
            uVar4 = FUN_004cb270(*(undefined4 *)(iVar1 + 8));
            FUN_004b8880(uVar4,uVar9,uVar10);
            local_4 = 0;
            pcVar5 = (char *)FUN_00454810(0xaecbb4ad,0);
            if (pcVar5 == (char *)0x0) {
              pcVar5 = (char *)FUN_006269b0(1);
            }
            local_4 = 0xffffffff;
            if (*pcVar5 != '\0') {
              FUN_0045a430();
              ExceptionList = local_c;
              return 0;
            }
            FUN_0045a430();
          }
          if (*(char *)(iVar1 + 0x39) == '\0') {
            ExceptionList = local_c;
            return 0;
          }
        }
        iVar7 = FUN_0070c600(iVar1,0xffffffff);
        if (iVar7 == 2) {
          iVar7 = (int)DAT_009933c4 - (int)(piVar3 + 1);
LAB_00711b31:
          FID_conflict__memcpy(piVar3,piVar3 + 1,(iVar7 >> 2) << 2);
          DAT_009933c4 = DAT_009933c4 + -1;
          FUN_004ccab0();
          FUN_004b1ce0(iVar1);
          ExceptionList = local_c;
          return 0;
        }
        if (iVar7 == 4) {
          if (piVar3 == DAT_009933c4) {
            ExceptionList = local_c;
            return 0;
          }
          piVar3 = piVar3 + 1;
        }
        else if (iVar7 == 0) {
          ExceptionList = local_c;
          return iVar1;
        }
      } while (piVar3 != DAT_009933c4);
    }
  }
  ExceptionList = local_c;
  return 0;
}

