/* speed.exe 0075b640 FUN_0075b640; analysis pseudocode, not buildable source.
 * calls 00759f00 FUN_00759f00
 * calls 005087a0 FUN_005087a0
 * calls 00508b10 FUN_00508b10
 */

undefined4 __fastcall FUN_0075b640(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_200 [128];
  
  piVar6 = *(int **)(param_1 + 0x58);
  iVar5 = 0;
  if (piVar6 != (int *)(param_1 + 0x58)) {
    do {
      if (piVar6[2] != 0) {
        iVar4 = piVar6[0xd3];
        if (*(int *)(iVar4 + 0xc) == 0) {
          iVar1 = *(int *)(iVar4 + 0x54);
          iVar3 = 0;
          if ((iVar1 != 0) && (*(char *)(iVar1 + 0xe) == '\0')) {
            *(undefined1 *)(iVar1 + 0xe) = 1;
            local_200[iVar5] = *(undefined4 *)(iVar1 + 8);
            iVar3 = 1;
          }
          iVar1 = *(int *)(iVar4 + 0x58);
          if ((iVar1 != 0) && (*(char *)(iVar1 + 0xe) == '\0')) {
            *(undefined1 *)(iVar1 + 0xe) = 1;
            local_200[iVar3 + iVar5] = *(undefined4 *)(iVar1 + 8);
            iVar3 = iVar3 + 1;
          }
          iVar1 = *(int *)(iVar4 + 0x5c);
          if ((iVar1 != 0) && (*(char *)(iVar1 + 0xe) == '\0')) {
            *(undefined1 *)(iVar1 + 0xe) = 1;
            local_200[iVar3 + iVar5] = *(undefined4 *)(iVar1 + 8);
            iVar3 = iVar3 + 1;
          }
          iVar1 = *(int *)(iVar4 + 0x60);
          if ((iVar1 != 0) && (*(char *)(iVar1 + 0xe) == '\0')) {
            *(undefined1 *)(iVar1 + 0xe) = 1;
            local_200[iVar3 + iVar5] = *(undefined4 *)(iVar1 + 8);
            iVar3 = iVar3 + 1;
          }
          *(uint *)(iVar4 + 0xc) = (iVar3 == 0) + 1;
          piVar6[3] = 1;
          iVar5 = iVar5 + iVar3;
        }
        if (*(int *)(iVar4 + 0x10) == 0) {
          *(undefined4 *)(iVar4 + 0x10) = 2;
        }
      }
      uVar2 = DAT_00904a00;
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)(param_1 + 0x58));
    if (0 < iVar5) {
      iVar4 = FUN_005087a0(local_200,iVar5,DAT_00904a00,1);
      while ((iVar4 != 0 && (iVar4 = FUN_00759f00(1), iVar4 != 0))) {
        iVar4 = FUN_005087a0(local_200,iVar5,DAT_00904a00,1);
      }
      *(undefined4 *)(param_1 + 0x14) = 1;
      FUN_00508b10(local_200,iVar5,&LAB_00748ac0,0,uVar2);
      return 1;
    }
  }
  return 0;
}

