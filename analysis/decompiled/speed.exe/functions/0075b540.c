/* speed.exe 0075b540 FUN_0075b540; analysis pseudocode, not buildable source.
 * calls 00508ae0 FUN_00508ae0
 * calls 00759f00 FUN_00759f00
 * calls 005087a0 FUN_005087a0
 */

undefined4 __fastcall FUN_0075b540(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int local_200 [128];
  
  piVar1 = (int *)(param_1 + 0x58);
  piVar6 = (int *)*piVar1;
  iVar4 = 0;
  if (piVar6 != piVar1) {
    do {
      if ((piVar6[2] != 0) && (iVar2 = piVar6[0xd3], *(int *)(iVar2 + 8) == 0)) {
        *(undefined4 *)(iVar2 + 8) = 1;
        piVar6[3] = 1;
        iVar3 = *(int *)(iVar2 + 0x74);
        if (iVar3 <= *(int *)(iVar2 + 0x78)) {
          piVar5 = (int *)(iVar2 + 0x20 + iVar3 * 4);
          do {
            if (*piVar5 != 0) {
              local_200[iVar4] = *piVar5;
              iVar4 = iVar4 + 1;
            }
            iVar3 = iVar3 + 1;
            piVar5 = piVar5 + 1;
          } while (iVar3 <= *(int *)(iVar2 + 0x78));
        }
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != piVar1);
    if (0 < iVar4) {
      iVar2 = FUN_005087a0(local_200,iVar4,DAT_00904a00,1);
      while ((iVar2 != 0 && (iVar2 = FUN_00759f00(1), iVar2 != 0))) {
        iVar2 = FUN_005087a0(local_200,iVar4,DAT_00904a00,1);
      }
      *(undefined4 *)(param_1 + 0x14) = 1;
      FUN_00508ae0(local_200,iVar4,&LAB_00748ab0,0,DAT_00904a00);
      return 1;
    }
  }
  return 0;
}

