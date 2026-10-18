/* speed.exe 00517070 FUN_00517070; analysis pseudocode, not buildable source.
 * calls 00405da0 FUN_00405da0
 * calls 005b5b70 FUN_005b5b70
 * calls 00591d90 FUN_00591d90
 * calls 00572070 FUN_00572070
 * calls 0065faf0 FUN_0065faf0
 * calls 005cc240 FUN_005cc240
 */

void FUN_00517070(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  if ((DAT_0091cb10 == 0) ||
     (((iVar1 = *(int *)(DAT_0091cb10 + 0x11c), iVar1 != 3 && (iVar1 != 4)) && (iVar1 != 5)))) {
    pcVar3 = "EA_Trax_Jukebox.fng";
    if (DAT_0091d218 < 1) {
      iVar1 = FUN_005b5b70("EA_Trax_Jukebox.fng");
    }
    else {
      FUN_00572070();
      iVar1 = FUN_00591d90(pcVar3);
    }
    if ((iVar1 == 0) && (DAT_00925e90 == 3)) {
      uVar2 = FUN_005cc240("Pathfinder5");
      iVar1 = FUN_00405da0(1,0xffffffff,0,0);
      *(undefined4 *)(iVar1 + 4) = uVar2;
      FUN_0065faf0();
    }
  }
  return;
}

