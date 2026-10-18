/* speed.exe 00426c10 FUN_00426c10; analysis pseudocode, not buildable source.
 */

undefined1 __fastcall FUN_00426c10(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  
  cVar2 = (**(code **)(*param_1 + 4))(0);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((param_1[7] == 0) && (param_1[0x1a] == 0)) {
    piVar4 = *(int **)param_1[0x35];
    if (piVar4 != (int *)param_1[0x35]) {
      do {
        piVar1 = (int *)piVar4[2];
        cVar2 = (**(code **)(*piVar1 + 0x70))();
        if (cVar2 == '\0') {
          if ((param_1[0x10] < param_1[0x11]) &&
             (iVar3 = (**(code **)(*piVar1 + 0x50))(), iVar3 != 0)) {
            return 1;
          }
          cVar2 = (**(code **)(*piVar1 + 0x54))();
          if (cVar2 != '\0') {
            return 1;
          }
        }
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)param_1[0x35]);
    }
    return 0;
  }
  return 1;
}

