/* speed.exe 007399f0 FUN_007399f0; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_007399f0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = FUN_00460bf0(param_2 * 0xd0 + DAT_009b09d8);
  iVar3 = 0;
  piVar2 = DAT_009b09f0;
  if (0 < DAT_009b09f4) {
    do {
      if ((*piVar2 == iVar1) && (piVar2[1] == param_1)) {
        return piVar2 + 2;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 4;
    } while (iVar3 < DAT_009b09f4);
  }
  _DAT_009af270 = *(int *)(DAT_009b09ec + param_1 * 8);
  _DAT_009af274 = *(int *)(DAT_009b09ec + 4 + param_1 * 8);
  if (_DAT_009af270 == -1) {
    _DAT_009af270 = iVar1;
  }
  if (_DAT_009af274 == -1) {
    _DAT_009af274 = iVar1;
  }
  return (int *)&DAT_009af270;
}

