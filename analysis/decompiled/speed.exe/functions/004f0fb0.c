/* speed.exe 004f0fb0 FUN_004f0fb0; analysis pseudocode, not buildable source.
 * calls 004aeaa0 FUN_004aeaa0
 * calls 00469da0 FUN_00469da0
 * calls 00469b90 FUN_00469b90
 * calls 006ff2d0 FUN_006ff2d0
 * calls 004b2210 FUN_004b2210
 * calls 004e7470 FUN_004e7470
 * calls 005cc240 FUN_005cc240
 * calls 004b1dd0 FUN_004b1dd0
 * calls 0065faf0 FUN_0065faf0
 */

void __thiscall FUN_004f0fb0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_004aeaa0(0x40010010);
  iVar2 = FUN_004e7470();
  if (*(char *)(param_2 + 0x10) == '\0') {
    if ((*(int *)(param_1 + 0x580) == 0x14d32c41) || (*(int *)(param_1 + 0x580) == 0x2df96f7d)) {
      FUN_006ff2d0(0);
      FUN_004b2210();
    }
    uVar3 = FUN_005cc240(&DAT_00894b1c);
    uVar4 = 4;
  }
  else {
    cVar1 = FUN_004b1dd0(0);
    if (cVar1 == '\0') {
      uVar3 = FUN_005cc240("MomentStrm");
      if (iVar2 == 1) {
        uVar4 = 0x2df96f7d;
      }
      else {
        uVar4 = 0x14d32c41;
      }
      iVar2 = FUN_00469b90(DAT_008a2fc0,DAT_008a2fc4,DAT_008a2fc8,DAT_008a2fcc,DAT_008a2fc0,
                           DAT_008a2fc4,DAT_008a2fc8,DAT_008a2fcc,DAT_008a2fc0,DAT_008a2fc4,
                           DAT_008a2fc8,DAT_008a2fcc,0,uVar4);
      *(undefined4 *)(iVar2 + 4) = uVar3;
      FUN_0065faf0();
    }
    uVar3 = FUN_005cc240(&DAT_00894b1c);
    uVar4 = 3;
  }
  iVar2 = FUN_00469da0(uVar4);
  *(undefined4 *)(iVar2 + 4) = uVar3;
  FUN_0065faf0();
  return;
}

