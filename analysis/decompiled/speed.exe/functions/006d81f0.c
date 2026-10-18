/* speed.exe 006d81f0 FUN_006d81f0; analysis pseudocode, not buildable source.
 * calls 006ca3d0 FUN_006ca3d0
 */

int FUN_006d81f0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    piVar1 = (int *)(&DAT_0093df00)[iVar3];
    if (piVar1 != (int *)0x0) {
      iVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1,&DAT_008c152c);
      if (iVar2 < 0) {
        FUN_006ca3d0("ERROR: couldn\'t set data format for wheel on channel %d\n",iVar3);
        return iVar2;
      }
      iVar2 = (**(code **)(*(int *)(&DAT_0093df00)[iVar3] + 0x34))
                        ((int *)(&DAT_0093df00)[iVar3],param_1,5);
      if (iVar2 < 0) {
        FUN_006ca3d0("ERROR: couldn\'t set cooperative level for wheel on channel %d\n",iVar3);
        return iVar2;
      }
    }
    iVar3 = iVar3 + 1;
    if (1 < iVar3) {
      return 0;
    }
  } while( true );
}

