/* speed.exe 00752f80 FUN_00752f80; analysis pseudocode, not buildable source.
 * calls 00507e40 FUN_00507e40
 * calls 00748310 FUN_00748310
 * calls 00463ca0 FUN_00463ca0
 */

undefined4 FUN_00752f80(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((short)param_1[3] == 0) {
    if ((*(char *)((int)param_1 + 0xe) == '\x02') && (param_1[5] != 0)) {
      FUN_00507e40(param_1[2]);
    }
    piVar1 = (int *)param_1[1];
    iVar2 = *param_1;
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
    FUN_00748310();
    FUN_00463ca0(DAT_009b0a00,param_1);
    return 1;
  }
  return 0;
}

