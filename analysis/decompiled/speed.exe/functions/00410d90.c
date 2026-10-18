/* speed.exe 00410d90 FUN_00410d90; analysis pseudocode, not buildable source.
 * calls 00410d60 FUN_00410d60
 */

bool __thiscall FUN_00410d90(uint param_1,int *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(int *)(param_1 - 0x24) + 0xc))(param_2);
  if (cVar1 == '\0') {
    return true;
  }
  cVar1 = (**(code **)(*param_2 + 0x88))();
  if (((cVar1 == '\0') && (cVar1 = (**(code **)(*param_2 + 0x5c))(), cVar1 == '\0')) &&
     (cVar1 = FUN_00410d60(param_2), cVar1 == '\0')) {
    return true;
  }
  if (param_2 == (int *)0x0) {
    if (DAT_0092c674 != 0) goto LAB_00410e06;
  }
  else if ((DAT_0092c674 == 0) || (param_2[1] != *(int *)(DAT_0092c674 + 4))) {
LAB_00410e06:
    return param_2 != (int *)(-(uint)(param_1 != 0x5c) & param_1);
  }
  return false;
}

