/* speed.exe 004560d0 FUN_004560d0; analysis pseudocode, not buildable source.
 * calls 00455bc0 FUN_00455bc0
 * calls 00455960 FUN_00455960
 */

int __fastcall FUN_004560d0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  if (iVar2 != 0) {
    if (param_1[2] != 0) {
LAB_0045610f:
      return param_1[2];
    }
    if (*param_1 != 0) {
      iVar1 = FUN_00455bc0(*param_1);
      if (iVar1 != 0) {
        iVar2 = FUN_00455960(iVar2);
        param_1[2] = iVar2;
        if (iVar2 != 0) {
          *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + 1;
        }
        goto LAB_0045610f;
      }
    }
  }
  return 0;
}

