/* speed.exe 005013e0 FUN_005013e0; analysis pseudocode, not buildable source.
 */

void FUN_005013e0(void)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_4;
  
  piVar5 = &DAT_00914b60;
  do {
    if ((*piVar5 != 0) && (iVar4 = 0, 0 < (short)piVar5[1])) {
      local_4 = 0;
      do {
        uVar2 = *(uint *)(local_4 + 8 + *piVar5);
        if (((DAT_009160b0 <= uVar2) && (uVar2 < DAT_009160b4)) && (iVar3 = 0, 0 < DAT_009160b8)) {
          puVar1 = &DAT_009160bc;
          do {
            if ((*puVar1 <= uVar2) && (uVar2 < puVar1[1])) {
              uVar2 = puVar1[2] + uVar2;
              break;
            }
            iVar3 = iVar3 + 1;
            puVar1 = puVar1 + 3;
          } while (iVar3 < DAT_009160b8);
        }
        *(uint *)(local_4 + 8 + *piVar5) = uVar2;
        iVar4 = iVar4 + 1;
        local_4 = local_4 + 0xc;
      } while (iVar4 < (short)piVar5[1]);
    }
    piVar5 = piVar5 + 2;
    if (0x91510f < (int)piVar5) {
      return;
    }
  } while( true );
}

