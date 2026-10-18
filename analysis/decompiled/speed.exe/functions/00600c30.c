/* speed.exe 00600c30 FUN_00600c30; analysis pseudocode, not buildable source.
 * calls 005fab40 FUN_005fab40
 * calls 005fb710 FUN_005fb710
 * calls 004519d0 FUN_004519d0
 */

char * __fastcall FUN_00600c30(uint *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  int local_4;
  
  local_4 = 0;
  pcVar5 = "16.1.0";
  do {
    uVar1 = FUN_004519d0(pcVar5);
    FUN_005fb710(uVar1);
    iVar2 = FUN_005fab40();
    piVar3 = (int *)param_1[0xf];
    uVar4 = 0;
    if (*param_1 != 0) {
      do {
        if (*piVar3 == 0) break;
        if (*piVar3 == iVar2) goto LAB_00600c84;
        piVar3 = piVar3 + 4;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *param_1);
    }
    *piVar3 = iVar2;
LAB_00600c84:
    if (((uint)piVar3[1] >> 1 & 1) == 0) {
      return "16.1.0" + local_4 * 8;
    }
    local_4 = local_4 + 1;
    pcVar5 = pcVar5 + 8;
    if (0x8a380b < (int)pcVar5) {
      return (char *)0x0;
    }
  } while( true );
}

