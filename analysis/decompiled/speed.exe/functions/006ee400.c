/* speed.exe 006ee400 FUN_006ee400; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 0040e040 FUN_0040e040
 */

char __fastcall FUN_006ee400(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piStack_4;
  
  piStack_4 = param_1;
  (**(code **)(param_1[0x13] + 0x14))();
  if ((DAT_008f86e0 != 0) && (DAT_0092c678 != 0)) {
    piVar2 = (int *)FUN_005d59f0(&LAB_006200e0);
    if (piVar2 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar2 + 8))();
      if (cVar1 == '\0') {
        iVar3 = (**(code **)(param_1[0xb] + 0xc))();
        if (iVar3 != 0) {
          piVar2 = (int *)FUN_005d59f0(&LAB_00403770);
          if (piVar2 != (int *)0x0) {
            cVar1 = (**(code **)(*piVar2 + 0xc))();
            if (cVar1 == '\0') {
              cVar1 = FUN_0040e040(&piStack_4);
              if (cVar1 != '\0') {
                cVar1 = (**(code **)(*piStack_4 + 0xbc))();
                return '\x01' - (cVar1 != '\0');
              }
            }
          }
        }
      }
    }
  }
  return '\0';
}

