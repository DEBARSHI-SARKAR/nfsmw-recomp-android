/* speed.exe 007924d0 FUN_007924d0; analysis pseudocode, not buildable source.
 * calls 0045da30 FUN_0045da30
 */

void FUN_007924d0(void)

{
  int iVar1;
  int *piVar2;
  
  do {
    do {
      iVar1 = FUN_0045da30(4);
    } while (iVar1 == DAT_00905dfc);
    piVar2 = &DAT_009b4250;
    while ((piVar2[1] == -1 || (*piVar2 != iVar1))) {
      piVar2 = piVar2 + 7;
      if (0x9b42a3 < (int)piVar2) {
        return;
      }
    }
  } while( true );
}

