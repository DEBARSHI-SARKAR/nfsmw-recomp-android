/* speed.exe 0047fb90 FUN_0047fb90; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 * calls 004647c0 FUN_004647c0
 */

void FUN_0047fb90(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  int iVar5;
  int local_1c;
  undefined1 local_18 [24];
  
  local_1c = DAT_0092cf64;
  if (7 < DAT_0092cf64) {
    local_1c = 8;
  }
  if (DAT_0092cf64 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *DAT_0092cf5c;
  }
  iVar2 = 0;
  if (0 < local_1c) {
    do {
      iVar2 = iVar2 + 1;
      FUN_004647c0(local_18,"car%d",iVar2);
      piVar1 = DAT_009885c8;
      uVar3 = FUN_005cc240(local_18,extraout_ECX,iVar5);
      (**(code **)(*piVar1 + 4))(uVar3);
      if (iVar5 == -8) {
        iVar5 = 0;
      }
      piVar1 = DAT_0092cf5c + DAT_0092cf64;
      piVar4 = DAT_0092cf5c;
      if (DAT_0092cf5c == piVar1) {
LAB_0047fc40:
        iVar5 = 0;
      }
      else {
        do {
          if (*piVar4 == iVar5) break;
          piVar4 = piVar4 + 1;
        } while (piVar4 != piVar1);
        if ((piVar4 == piVar1) || (piVar4 + 1 == piVar1)) goto LAB_0047fc40;
        iVar5 = piVar4[1];
      }
    } while (iVar2 < local_1c);
  }
  return;
}

